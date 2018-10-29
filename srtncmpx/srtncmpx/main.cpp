#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL StrCmpX(char * src ,char *dest,int icnt)
{
	while(icnt!=0)
	{
		if(*dest==*src)	
		{
		src++;
		dest++;
		icnt--;
		}
		else
		{
			break;
		}
	}

	if(icnt==0)
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
	char brr[30]="    ";
	BOOL bRet=FALSE;
	bRet=StrCmpX(arr,brr,10);

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