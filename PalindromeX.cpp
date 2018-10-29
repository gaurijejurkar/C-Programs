#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0


BOOL ChkPalindromeX(char *str)
{
	char temp='\0';
	char *start,*end;

	if(NULL==str)
	{
		return FALSE;
	}
	start=str;
	end=str;

	while(*end!='\0')
	{
		end++;
	}
	end--;
	while(start<end)
	{
		if((*end>='A')&&(*end<='Z'))
		{
			temp=*end+32;
		}
		else if((*end>='a')&&(*end<='z'))
		{
			temp=*end-32;
		}

		if (*start==temp)
		{
			start++;
			end--;
		}
		else
		{
			break;
		}

	}

	if(start>=end)
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
	char arr[30];
	BOOL bRet=FALSE;

	printf("Enter String\n");
	scanf("%[^'\n']s",arr);

	

	bRet=ChkPalindromeX(arr);

	
	if(bRet==TRUE)
	{
		printf("String is Palindrome\n");
	}
	else
	{
		printf("String is not Palindrome\n");
	}
	return 0;
}


