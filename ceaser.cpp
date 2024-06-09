#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
	char t[10],ch;
	int key,n;
	printf("enter plain text :");
	gets(t);
	printf("enter key:");
	scanf("%d",&key);
	printf("enter 1 for encryp and 2 for dec");
	scanf("%d",&n);
	if(n==1)
	{
		for(int i=0;t[i]!='\0';i++)
		{
			ch=t[i];
			if(islower(ch))
			{
				ch=(ch - 'a'+key)%26 + 'a';
				
			}
			if(isupper(ch))
			{
				ch=(ch - 'A'+key)%26 +'A';
				
			}
			if(isdigit(ch))
			{
				ch=(ch - '0'+key)%26 +'0';
			}
		t[i]=ch;
		}
		printf("encryp msg: %s",t);
	}
	else if(n==2)
	{
		for(int i=0;t[i]!='\0';i++)
		{
			ch=t[i];
			if(islower(ch))
			{
				ch=(ch - 'a'-key)%26 + 'a';
				
			}
			if(isupper(ch))
			{
				ch=(ch - 'A'-key)%26 +'A';
				
			}
			if(isdigit(ch))
			{
				ch=(ch - '0'-key)%26 +'0';
			}
		t[i]=ch;
		}
		printf("dec msg: %s",t);
	}
	
	
}
