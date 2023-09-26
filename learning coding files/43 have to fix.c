// WAP IN C TO CALCULATE GRADE OF A STUDENT ACCORDING TO THEIR MARKS.

#include<stdio.h>

int main()
{
   float maths,physics,chemistry,english,computer,percentage;
   printf("Enter the marks of maths\n");
   scanf("%f",&maths);
   printf("Enter the marks of physics\n");
   scanf("%f",&physics);
   printf("Enter the marks of chemistry\n");
   scanf("%f",&chemistry);
   printf("Enter the marks of english\n");
   scanf("%f",&english);
   printf("Enter the marks of computer\n");
   scanf("%f",&computer);
   percentage=((maths+physics+chemistry+english+computer)/5);
   printf("Your percentage is %f\n",percentage);
   if(percentage>=90){
       printf("Your overall grade is AA because your percentage is between 90 to 100.\n");
   }
   else if((percentage>=80)&&(percentage<90)){
       printf("Your overall grade is A+ because your percentage is between 80 to 89.\n");
   }
   else if((percentage>=70)&&(percentage<80)){
       printf("Your overall grade is A because your percentage is between 70 to 79.\n");
   }
   else if((percentage>=60)&&(percentage<70)){
       printf("Your overall grade is B because your percentage is between 60 to 69.\n");
   }
   else if((percentage>=50)&&(percentage<60)){
       printf("Your overall grade is c because your percentage is between 50 to 59.\n");
   }
   else{
       printf("Your overall grade is D because your percentage is less than 50.\n");
   }
   return 0;
}