#include<stdio.h>
#include<conio.h>
void main()
{
   char string1[20],*ptr;
   int i,len,flag=0;
   ptr=string1;
   clrscr();
   printf("enter the string");
   gets(ptr);
   len=strlen(ptr);
    for(i=0;i<len;i++)
    {
     if(ptr[i]==ptr[len-i-1])
      {
	flag=1;
	break;
      }
    }
    if(flag==1)
    {
     printf("\n string not palindrome");
    }
    else
    {
    printf("\n string is pallindrome");
    }
    getch();
}