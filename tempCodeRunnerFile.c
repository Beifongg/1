#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main(){
char name[250];
double gpa;
char grade;
printf("pelase enter your name:");
fgets(name, 250, stdin);
name[strlen(name)-1]='\0';
printf("my name is %s\n", name);
printf("please enter your gpa: ");
scanf("%lf", &gpa);
if (gpa > 4)
{
  printf("your gpa is invalid");
  while (gpa>4)
  {
   
    printf("please enter your gpa: ");
scanf("%lf", &gpa);
  }}
else if (gpa <= 0)
  {
 printf("gpa cannot be <0");
  while (gpa <=0)
  {
    printf("you gpa is invalid");
    printf("please enter your gpa: ");
scanf("%lf", &gpa);
  }
  }
  else
  {printf("my gpa is %-.2lf\n", gpa);
   }

fflush(stdin);
printf("please enter your grade:");
scanf("%c", &grade);
grade=toupper(grade);
switch (grade)
{
case 'A':
 printf("my grade is A\n");
  break;
case 'B':
 printf("my grade is B\n");
  break;
  case 'C':
 printf("my grade is C\n");
  break;
  case 'D':
 printf("my grade is D\n");
  break;
default:
while (grade != 'A')
{fgetc(stdin);
 printf("please enter your grade:\n");
scanf("%c", &grade);
grade=toupper(grade);
}
printf("my grade is %c", grade);

  break;
}




}