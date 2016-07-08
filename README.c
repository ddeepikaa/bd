# bd
#include<stdio.h>
int main()
{
 char alpha;
 printf("enter the charater");
 scanf("%d",&alpha);
 if(((alpha>=65)&&(alpha<=90))||((alpha>=95)&&(alpha<=122)))
     printf("it is an alphabet");
  else
     printf("it is not an alphabet");
}
