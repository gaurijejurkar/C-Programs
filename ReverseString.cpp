#include<stdio.h>

void Reverse(char *str)
{
	char *start,*end;
	char temp;

	if(NULL==str)
	{
		return ;
	}
	
	

	while(*str!='\0')
	{
		
		  if(*str==' ')
		  {
			 while((*str==' ')&&(str!='\0'))
			 {
				str++;
			 }
		    
		  }
		else
		{
			start=str;
			end=str;
			
			while((*str!=' ')&&(*str!='\0'))
			{
				end++;
				str++;
			}
			end--;
			
			while(start<end)
			{
			
			
				temp=*start;
				*start=*end;
				*end=temp;
				//str++;
				start++;
				end--;
			}
			}
		}
	}
	


int main()
{
	char arr[50];
	int iRet=0;


	printf("Enter String\n");
	scanf("%[^'\n']s",arr);
	printf("%s\n",arr);


	Reverse(arr);

	printf("%s\n",arr);
}

