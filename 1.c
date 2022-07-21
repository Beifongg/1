#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<ctype.h>
#include<math.h>

int main()
{
char question[][256]={"1)one plus one is",
                      "2)one plus two is",
                      "3)one plus three is",
                      "4)one plust four is" };
char option[][256]={"a.1","b.2","c.3","d.4",
                    "a.1","b.2","c.3","d.4",
                    "a.1","b.2","c.3","d.4",
                    "a.1","b.2","c.3","d.4" };
char answer[]={'a','b','c','d'};
char guess;
int guesses=0;
int size=sizeof(question)/sizeof(question[0]);
for (int i = 0; i < size; i++)
{
   printf("%s\n",question[i]);
   for (int j = i*4; j<(i*4)+4; j++)
   {printf("%s\n", option[j]);
   }
   printf("please enter your guess");
   scanf("%d",&guess);
fflush(stdin);
   if (guess=answer[i])
   {printf("right");
     guesses++;
   }
   else
   {
      printf("wrong");
   }
   
   
};
printf("%d/%d",guesses, size);
   return 0;
}


