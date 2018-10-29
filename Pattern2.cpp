#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////////////////////////

void pattern1(char *str)                                                     
{																			  
	int i=0,j=0;
	

	for(i=0;str[i]!='\0';i++)
	{
		for(j=0;str[j]!='\0';j++)
		{
			printf("%c\t",str[j]);
		}
		printf("\n");
	}
}

//////////////////////////////////////////////////////////////////////////////////

void pattern2(char *str)
{
	int i=0,j=0;
	
	
	

	for(i=0;str[i]!='\0';i++)
	{
		for(j=0;str[i+j]!='\0';j++)
		{
			printf("%c\t",str[j]);
		}
		printf("\n");
	}
}

/////////////////////////////////////////////////////////////////////////////////////////

void pattern3(char *str)
{
	int i=0,j=0;
	
	
  for(i=0;str[i]!='\0';i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c\t",str[j]);
		}
		printf("\n");
	}
}

/////////////////////////////////////////////////////////////////////////////////////////


void pattern4(char *str)
{
	int i=0,j=0;
	
	
	
  for(i=0;str[i]!='\0';i++)
	{
		for(j=0;str[j]!='\0';j++)
		{
			if((i==0)||(str[i+1]=='\0')||(j==0)||(str[j+1]=='\0'))
			{
			  printf("%c\t",str[j]);
			}
			else
			{
				printf("*\t");
			}
		}
		printf("\n");
	}
}

/////////////////////////////////////////////////////////////////////////////////////////

void pattern5(char *str)
{
	int i=0,j=0;
	
	
  for(i=0;str[i]!='\0';i++)
	{
		for(j=0;str[j]!='\0';j++)
		{
			if(j<=i)
			{
			printf("%c\t",str[j]);
			}
			else
			{
				printf("@\t");
			}

		}
		printf("\n");
	}
  
}

/////////////////////////////////////////////////////////////////////////////////////////


int main()
{
	char arr[30];
	int choice=0;
	BOOL Running=TRUE;

	printf("Enter string\n");
	scanf("%[^'\n']s",arr);

	while(Running)
	{

	printf("Enter choice(1-5)\n");
	scanf("%d",&choice);
		switch(choice)
		{
			case 0:
					Running=FALSE;
			case 1:
					pattern1(arr);
					break;

			case 2:
					pattern2(arr);
					break;

			case 3:
					pattern3(arr);
					break;

			case 4:
					pattern4(arr);
					break;

			case 5:
					pattern5(arr);
					break;

			default:
					printf("WRONG CHOICE\n");
					break;
		}
	}

	printf("\n\n..........Terminating Application..................\n\n");
	return 0;
}