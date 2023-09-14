#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,f1=0,f2=1,f3;
  clrscr();
  printf("enter the range");
  scanf("%d",&n);
  printf("\n%d %d",f1,f2);
  for(i=2;i<n;i++)
   {
    f3=f1+f2;
    printf(" %d",f3);
    f1=f2;
    f2=f3;
  }
  getch();
  }
