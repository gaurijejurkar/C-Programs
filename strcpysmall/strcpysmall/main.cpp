#include<stdio.h>

void StrCpyX(char * src ,char *dest)
{
	while(*src!='\0')
	{
		if((*src>='a')&&(*src<='z'))
		{
		*dest=*src;
		dest++;
		}
		src++;
		
	}
	*dest='\0';
}
int main()
{
	char arr[30]="Marvellous Multi O.S.";
	char brr[30];

	StrCpyX(arr,brr);

	printf("%s\n",brr);
	return 0;
}