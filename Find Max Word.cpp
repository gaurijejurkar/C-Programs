#include<stdio.h>

int CountWords(char *str)
{
	int icnt=0,imax=0;

	if(NULL==str)
	{
		return -1;
	}

	while(*str!='\0')
	{
		
		  if(*str==' ')
		  {
			 while((*str==' ')&&(*str!='\0'))
			 {
				str++;
			 }
		    
		 }
		else
		{
			icnt=0;
			while((*str!=' ')&&(*str!='\0'))
			{
				icnt++;
				str++;
			}

			if(icnt>imax)
			{
				imax=icnt;
			}
		}


	}
	return imax;
}

int main()
{
	char arr[50];
	int iRet=0;


	printf("Enter String\n");
	scanf("%[^'\n']s",arr);

	iRet=CountWords(arr);

	printf("largest word length is%d\n ",iRet);
}

