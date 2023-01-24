#include <stdio.h>
#define SIZE 1024
#include<stdlib.h>
#include<string.h>
//TITLE HEAD
void head()
{
	system("cls");

	printf("\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
		printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
		printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
		printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
		printf("\n\t\t-------------------------------------------------------------------------------\n");
		printf("\t\t\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1");
		printf("\xB1\xB1\xB1\xB1\xB1 \t         GROUP_TYPEDEF \t\t ");
		printf("   \xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\n");
		printf("\t\t\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1");
		printf("\xB1   UNIVERSITY ADMINISTRATION SYSTEM - DEPARTMENT OF ICT   ");
		printf("\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\n");
		printf("\t\t\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1");
		printf("\xB1\xB1\xB1\xB1\xB1 \t      FACULTY OF TECHNOLOGY\t    ");
		printf("\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\n");


		printf("\t\t\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1");
		printf("\xB1\xB1\xB1\xB1\xB1 \t      UNIVERSITY OF COLOMBO\t    ");
		printf("\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\n");

		printf("\t\t-------------------------------------------------------------------------------\n");
		printf("\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
		printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
		printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
		printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
}

struct course{
		char ID[10];
		char course_name[60];
		char D_name[10];
		char F_name[10];
};


int subtask_1()
{
    char text[SIZE] = {0}, record[100];
	char ch;
	int  no = 0,len;
	FILE *fp; //pointer

	//create a new file

	fp = fopen("newFile.txt","a");

	if(fp == NULL)
		{
		printf("Error in creating a file");
		return -1;
		}
		system("cls");
		head();

	printf("Enter the student details line wise (press # to save and close):\n");
	printf("\nReg.no: \nname: \nDate of Birth: \nAddress: \nGender: \nPhone no: \nMarital Status: \n\n");
	while(1)
	{
		ch = getchar();
		if(ch == '#')
		{
			break;
		}
		fputc(ch,fp);
	}
	fclose(fp); //close the file
	printf("File saved successfully\n");

	/*open file*/
	fp = fopen("newFile.txt","r");
	if(fp == NULL)
	{
		printf("Error in opening file.\n");
		return -1;
	}

	printf("Entered records are:\n");
	//read content from file
	no = 0;
    while((ch=fgetc(fp))!=EOF)
	{
		if(ch==0x0A)//check new line
		{
			record[no++] = '\0';
			no = 0;
			printf("%s\n", record);
			continue;
		}
		record[no++] = ch;
    }
	fclose(fp);
	return 0;
}

int subtask_2(){
	//add_course();
	/*int remove_course(){
	char id[10],course_id[10],course_name[60],D_name[10],F_name[10];
	printf("Enter the course id to remove");
	scanf("%s",&id);
	FILE *course;
	if((course=fopen("aaa.txt","r+"))!=NULL){
		while(fscanf(course,"%s\t%s\t%s\t%s\t",&course_id,&course_name,&D_name,&F_name)!=EOF){
			if(strcmp(id,course_id)==0){
				strcpy(course_id,"");
				strcpy(course_name,"");
				strcpy(D_name,"");
				strcpy(F_name,"");
				fprintf(course,"\n%s\t%s\t%s\t%s\t",course_id,course_name,D_name,F_name);
			}
		}
		printf("course doesnt exsist");
	}
	else{
		printf("course.txt file open error");
	}
	fclose(course);
	return 0;
	}*/
	//int add_course(){
	system("cls");
		head();
		FILE *course;
		course=fopen("course.txt","w");
		if(course==NULL){
			printf("File opening Error!");
			exit(1);
		}
		else{
			struct course C[5];
			for (int i=0; i<5; i++){
				printf("Enter the  course id to add: ");
				scanf("%s",&C[i].ID);
				//printf("\n");
				printf("Enter course name: ");
				scanf("%s",&C[i].course_name);
				printf("Enter course department: ");
				scanf("%s",&C[i].D_name);
				printf("Enter course facutlty: ");
				scanf("%s",&C[i].F_name);
			}
			for (int j=0; j<5; j++){
				fprintf(course,"\n%s\t",C[j].ID);
				fprintf(course,"%s\t",C[j].course_name);
				fprintf(course,"%s\t",C[j].D_name);
				fprintf(course,"%s\t",C[j].F_name);
			}
		}
		return 0;

	/*
	int update_course(){
		char id[10],course_id[10],course_name[60],D_name[10],F_name[10];
		char c_id[10],c_name[60],nD_name[10],nF_name[10];
		printf("Enter the course id to update");
		scanf("%s",&id);
		printf("Enter the new course id: ");
		scanf("%s",&c_id);
		printf("Enter the new course name: ");
		scanf("%s",&c_name);
		printf("Enter the new course department: ");
		scanf("%s",&nD_name);
		printf("Enter the new course faculty: ");
		scanf("%s",&nF_name);
		FILE *course;
		if((course=fopen("course.docx","r+"))!=NULL){
			while(fscanf(course,"\n%s\t%s\t%s\t%s\t",&course_id,&course_name,&D_name,&F_name)!=EOF){
				if(strcmp(id,course_id)==0){
					strcpy(course_id,c_id);
					strcpy(course_name,c_name);
					strcpy(D_name,nD_name);
					strcpy(F_name,nF_name);
					fprintf(course,"\n%s\t%s\t%s\t%s\t",course_id,course_name,D_name,F_name);
				}
			}
			printf("course doesnt exsist");
		}
		else{
			printf("course.txt file open error");
		}
		fclose(course);
		return 0;
	}	*/
	//int main(){
		//char choice[6];
		//printf("enter what you want to do (add/remove/update): ");
		//add_course();
		/*scanf("%s",&choice);
		if(strcmp(choice,"remove")){
			remove_course();
		}
		else if(strcmp(choice,"add")){
			add_course();
		}
		else{
			update_course();
		}*/
		//return 0;
	//}
}

int subtask_3(){
		char uid[20],id[20],name[30],address[50],dob[10],Gender[6],F_name[10],maritial_status[8],D_name[10],course_id[10],department[10];
		char C_name[60];
		int tel_no[10];
		FILE *file;
		FILE *file1;
		FILE *file2;
		system("cls");
		head();
		for(int i=0;i<5;i++){
			printf("Enter student id number:");
			scanf("%s",&uid);
			if((file=fopen("newFile.txt","r"))!=NULL){
				//read from newFile.txt file
				while(fscanf(file,"%s\t%s\t%s\t%s\t%s\t%s\t%d\t%s",&department,&id,&name,&dob,&address,&Gender,&tel_no,&maritial_status)!=EOF){
					//check whether the particular student registered to the university or not
					if(strcmp(uid,id)==0){
							//check whether the student belongs to technology faculty
							if(id[4]=='T'){
							//check whether the student belongs to it department
								if(strcmp(department,"ICT")==0){
									if((file1=fopen("course.txt","r"))!=NULL){
										if((file2=fopen("ccc.txt","a"))!=NULL){
											//read from course.txt file
											while(fscanf(file1,"%s\t%s\t%s\t%s",&course_id,&C_name,&D_name,&F_name)!=EOF){
											//check for courses that is belongs to faculty of technology and it department
												if((strcmp(D_name,"ICT")==0)&&(strcmp(F_name,"TECHNOLOGY")==0)){
													//write student id,name,course id, course name on ccc.txt file
													fprintf(file2,"%s\t%s\t%s\t%s",id,name,course_id,C_name);
													fprintf(file2,"\n");
												}
											}
											//return 0;
										}
										else{
											printf("ccc.txt file open error");
											//return 0;
										}
									}
									else{
										printf("course.txt file open error");
										//return 0;
									}
								}
								else{
									printf("please enter an ict department student");
									//return 0;
								}
							}
							else{
								printf("please enter technology faculty student");
								//return 0;
							}
					}
				}

			}
			else{
				printf("newFile.txt file open error");
			}
		}
		return 0;
}

int subtask_4(){
    char str[100],ch,uid[20],id[20],name[30],address[100],C_name[60],dob[10],gender[6],maritial_status[8],tel_no[10];
    char department[10],F_name[10],D_name[10],course_id[10];
    int i=0,grade[5];
    float credit[5],gpa=0.0,totcredit=0.0;


	FILE *file4;
	file4=fopen("S_GPA.txt","w");
    FILE *file;
    FILE *file1;

	if ((file=fopen("newFILE.txt","r"))!=NULL){
	    int b;
	    while(b=fscanf(file,"%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s",&department,&id,&name,&dob,&address,&gender,&tel_no,&maritial_status)!=EOF)
        {
            printf("%s\n",&name);
            fprintf(file4,"%s\n",&name);
            if((file1=fopen("course.txt","r"))!=NULL){
                int a;
                while(a=fscanf(file1,"%s\t%s\t%s\t%s",&course_id,&C_name,&D_name,&F_name)!=EOF){
                    printf("\t%s\t(Grade|Credit): ",&course_id);
                    ch=getchar();
                    grade[i]=ch;
                    scanf("%f",&credit[i]);
                    getchar();
                    fprintf(file4,"\t%s\n",&grade[i]);
                    i=i+1;
                }
                for(int i=0;i<5;i++){
                    switch(grade[i]){
                    case 'A':
                        gpa=gpa+10*credit[i];
                        totcredit=totcredit+credit[i];
                        break;
                    case 'B':
                        gpa=gpa+9*credit[i];
                        totcredit=totcredit+credit[i];
                        break;
                    case 'C':
                        gpa=gpa+8*credit[i];
                        totcredit=totcredit+credit[i];
                        break;
                    case 'D':
                        gpa=gpa+7*credit[i];
                        totcredit=totcredit+credit[i];
                        break;
                    case 'E':
                        gpa=gpa+6*credit[i];
                        totcredit=totcredit+credit[i];
                        break;
                    case 'S':
                        gpa=gpa+5*credit[i];
                        totcredit=totcredit+credit[i];
                        break;


                    }
                }

                printf("GPA: %f\tcredit: %f\n",gpa,totcredit);
                gpa=gpa/totcredit;
                printf("GPA for your score: %.2f\n",gpa);
                fprintf(file4,"%\t%.2f\n\n",gpa);
                printf("\n\n");
            }
        }
	}
return 0;
}

int subtask_5(){

		char uid[20],id[20],name[30],gpaname[35],address[50],department[10],F_name[10],D_name[10],course_id[10],dob[10],gender[6],tel_no[10],maritial_status[8];
		char C_name[60],r1[5],r2[5],r3[5],r4[5],r5[5];
		char str[100];
		int i,grade[5];
		float gpa,credit[5];

		FILE *file5;
		FILE *file;
		FILE *file1;
		FILE *file4;
		system("cls");
		head();
		printf("Enter student id number:");
		scanf("%s",&uid);
		if ((file=fopen("newFILE.txt","r"))!=NULL){

			while(fscanf(file,"%s\n%s\n%s\n%s\n%s\n%s",&id,&name,&dob,&address,&gender,&maritial_status)!=EOF)
			{
				//check whether the particular student registered to the university or not
				if(strcmp(uid,id)==0){

					if((file1=fopen("course.txt","r"))!=NULL){

						while(fscanf(file1,"%s\t%s\t%s\t%s",&course_id,&C_name,&D_name,&F_name)!=EOF)
						{
							if((file4=fopen("S_GPA.txt","r"))!=NULL){
									while(fscanf(file4,"%s\n%s\n%s\n%s\n%s\n%s\n%f",&gpaname,&r1,&r2,&r3,&r4,&r5,&gpa)!=EOF)
									{

											//head();
											printf("\n\t\t\xdb\xdb\xdb STUDENT INFORMATION \xdb\xdb\xdb\n");
											printf("\t\t---------------------------\n\n");
											printf("\t\t--------------------------------------\n");
											printf("\n\t\t| Id_No\t\t  |%s ",id);
											printf("\n\t\t| name\t\t  | %s",name);
											printf("\n\t\t| FACULTY\t  |%s",F_name);
											printf("\n\t\t| Department\t  |%s",D_name);
											printf("\n\t\t| Address\t  |%s",address);

											printf("\n\t\t--------------------------------------\n\n\n");

											printf("\t\t\xdb\xdb\xdb COURSE INFORMATION \xdb\xdb\xdb\n");
											printf("\t\t--------------------------\n\n");
											printf("\t\tCourse ID\t Course_Name \t\t\t\t\t\tResult\n\n");
											printf("\t\t|IC_1001\t|essentials_ICT_and_Social_Computing\t\t\t|%s\t|\n",r1);
											printf("\t\t|IC_1002\t|Introduction_to_Computer_systems_and_Operating_Systems\t|%s\t|\n",r2);
											printf("\t\t|IC_1003\t|Programming_1	ict	technology\t\t\t|%s\t|\n",r3);
											printf("\t\t|IC_1004\t|Information_systems_Management\t\t\t\t|%s\t|\n",r4);
											printf("\t\t|IC_1005\t|Application_Laboratory_1\t\t\t\t|%s\t|\n",r5);
											printf("\t\t--------------------------\n\n");

											printf("\n\n\n\t\t\xdb\xdb\xdb GPA Information \xdb\xdb\xdb\n");
											printf("\t\t-----------------------\n");


											printf("\n\t\tSemester GPA:-\t%f\n",gpa);

											file5=fopen("Transcript_file.txt","a+");
											fprintf(file5,"%s\t%s\t%s\t%s\t%s\t%f\n",id,name,F_name,D_name,address,gpa);


									}
							}
						}
					}
				}


			}
		}
	return 0;
}
void mainmenu()
{
    int c;
    head();


    printf("\n\n\t\tselect option\n\n");

    printf("\t\t<1> creating students admissions   \n\n");
    printf("\t\t<2> add remove edit courses\n\n");
    printf("\t\t<3> enroll students for course\n\n");
    printf("\t\t<4> record the result of examinations and calculate the GPA\n\n");
    printf("\t\t<5> create a transcript for a student\n\n");

    printf("\t\tEnter your choice:");
    scanf("%d",&c);

    switch(c)
    {
    case 1:
        subtask_1();
        break;
    case 2:
        subtask_2();
        break;
    case 3:

        subtask_3();
        break;
    case 4:
        subtask_4();
        break;
    case 5:
        subtask_5();
        break;
    default:
        system("cls");
        mainmenu();

    }
}


int main()
{
    mainmenu();

	return 0;
}


