#include<stdio.h>

void StrcpyX(char *src,char*dest)
{
	int icnt=0;

	if((NULL==src)||(NULL==dest))
	{
		return ;
	}

	while(*src!='\0')
	{
		/*
		  if(*src==' ')
		  {
			 while((*src==' ')&&(*src!='\0'))
			 {
				src++;
			 }
		    
		 }
		else
		{
			
			while((*src!=' ')&&(*src!='\0'))
			{
				*dest=*src;
				dest++;
				src++;
			}
		}*/
		if(*src==' ')
		{
			src++;
			
		}
		else
		{
			*dest=*src;
			dest++;
			src++;
		}
		  *dest='\0';
	}
	
}

int main()
{
	char arr[50];
	char brr[50];
	


	printf("Enter String\n");
	scanf("%[^'\n']s",arr);

    StrcpyX(arr,brr);

	printf("%s\n ",brr);
}

