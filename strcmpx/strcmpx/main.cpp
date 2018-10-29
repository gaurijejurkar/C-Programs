#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL StrCmpX(char * src ,char *dest)
{
	while((*src!='\0')&&(*dest!='\0'))
	{
		if(*dest==*src)	
		{
		src++;
		dest++;
		}
		else
		{
			break;
		}
	}

	if((*src=='\0')&&(*dest=='\0'))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
	
}
int main()
{
	char arr[30]="Marvellous Multi O.S.";
	char brr[30]="Marvellous Multi O.S.";
	BOOL bRet=FALSE;
	bRet=StrCmpX(arr,brr);

	if(bRet==TRUE)
	{
		printf("EQUAL\n");
	}
	else 
	{
		printf("NOT EQUAL\n");
	}

	
	return 0;
}