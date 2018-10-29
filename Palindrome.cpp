#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0


BOOL ChkPalindrome(char *str)
{
	
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
		if (*start==*end)
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

	

	bRet=ChkPalindrome(arr);

	
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


