#include<stdio.h>
int main()
{
  int choice;
  int roll;
  int mark1,mark2,mark3,mark4,mark5, sum;
  int total=0;
  float average;
  char grade;
  char name[20];
  int pass=0;
  do
  {
     printf("\nStudent marks management system\n");
     printf("------------------------------------\n");
     printf("1.Enter student details\n");
     printf("2.Calculate result\n");
     printf("3.Display Result\n");
     printf("4.Exit\n");
     printf("\nEnter your choice:");
     scanf("%d\n",& choice);

     switch(choice)
     {
       case 1:
	printf("Enter roll number");
	scanf("%d\n",&roll);

	printf("Enter student name:");
	scanf("%s\n",name);

	printf("Enter subject 1 mark:");
	scanf("%d\n",&mark1);

	printf("Enter subject 2 mark:");
	scanf("%d\n",&mark2);

	printf("Enter subject 3 mark:");
	scanf("%d\n",&mark3);

	printf("Enter subject 4 mark:");
	scanf("%d\n",&mark4);

	printf("Enter subject 5 mark:");
	scanf("%d\n",&mark5);
	break;

       case 2:
	   sum=mark1 + mark2 + mark3 + mark4 + mark5;

	   total= sum;
	   average= total/5.0;

	   pass=1;

	   if(mark1 <35 || mark2 <35 ||
	      mark3 <35 || mark4 <35 ||
	      mark5 <35)
	   {
	     pass=0;
	   }
	   if(average >= 90)
	       grade = 'A';
	   else if(average >= 80)
	       grade = 'B';
	   else if(average >= 70)
	       grade = 'C';
	   else if(average >= 60)
	       grade = 'D';
	   else
	       grade = 'F';

	   printf("\nResult calculate successfully!\n");
	   break;

       case 3:
	   printf("\nSTUDENT RESULT\n");
	   printf("-------------------\n");
	   printf("Roll number: %d\n",roll);
	   printf("Name  : %s\n",name);
	   printf("Total : %d\n",total);
	   printf("Average : %.2f\n",average);
	   printf("Grade : %c\n",grade);
       if(pass == 1)
	   printf("Result : PASS\n");
       else
	   printf("Result : FAIL\n");
       break;

       case 4:
	   printf("\nThank You!\n");
	   break;
       default:
	   printf("\nInvalide Choise!\n");
     }
  } while(choice !=4);
  return 0;
}
