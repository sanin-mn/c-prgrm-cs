#include<stdio.h>
 int main()
 {
	FILE *Fp;
	char Fname[20];
	char ch;
	int c=1;
	printf("\n Enter File name to create :");
	scanf("%s",Fname);
	Fp=fopen(Fname,"w");

	if(Fp==NULL)
	{
		printf("File doesnot created !!!");
		exit(0);
	}
	printf("File created succusfully ");

	putc('A',Fp);
	putc('B',Fp);
	putc('C',Fp);

	printf("\n Data written succusfully");
	fclose(Fp);
	Fp=fopen(Fname,"r");

	if(Fp==NULL)
	{
		printf("\n Can't open the file !!!");
	}

	printf("Content of file is : \n");

	printf("%c",getc(Fp));
	printf("%c",getc(Fp));
	printf("%c",getc(Fp));

	while((ch=getc(Fp))!=EOF)
	{
		if(ch=='\n')
		{
			++c;
			printf("\n line=%d \t",c);
		}
		else
		{
			printf("\n line=%d \t",c);
		}
	}
	fclose(Fp);
	return(0);
 }
