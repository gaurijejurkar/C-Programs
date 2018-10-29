#include<stdio.h>
typedef int BOOL;
#define  TRUE 1
#define FALSE 0

void DisplayEven(int iValue1)
{
	int i=0;

	if(iValue1<0)
	{
		iValue1=-iValue1;
	}

	for (i=1;i<=iValue1;i++)
	{
		if(i%2==0)
		{
			printf("%d\t",i);
		}
	}
}

int FindLargestFact(int iValue1)
{
	int i=0,iMax=0;
	if(iValue1<0)
	{
		iValue1=-iValue1;
	}

	for (i=1;i<=(iValue1/2);i++)
	{
		if((iValue1%i)==0)
		{
			if(i>iMax)
			{
				iMax=i;
			}
		}
	}
	return iMax;
}

void DisplayEvenFact(int iValue1)
{
	int i=0;
	if(iValue1<0)
	{
		iValue1=-iValue1;
	}

	for (i=1;i<=(iValue1/2);i++)
	{
		if((iValue1%i)==0)                  //find factors
		{
			if((i%2)==0)                    //check even
			{
				printf("%d\t",i);			//display
			}
		}
	}
}

void DisplayCommonFact(int iValue1,int iValue2)
{
	int i=0;
	if(iValue1<0)
	{
		iValue1=-iValue1;
	}
	if(iValue2<0)
	{
		iValue2=-iValue2;
	}

	for (i=1;i<=(iValue1/2)&&(iValue2/2);i++)
	{
		if(((iValue1%i)==0)&&((iValue2/i) ==0))                 
		{
			printf("%d\t",i);
		}
	}
}

void DisplayFibonacci(int iValue1)
{
	int i=0,iAns=0,iTemp1=0,iTemp2=1;

	if(iValue1<0)
	{
		iValue1=-iValue1;
	}

	for (i=1;i<=iValue1;i++)
	{
		printf("%d\t",iAns);
		iAns=iTemp1+iTemp2;
		iTemp1=iTemp2;
		iTemp2=iAns;
		
	}
}

void CharSwap(char *ptr1, char *ptr2)
{
	char cTemp;
	cTemp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=cTemp;
}

void SwapNum(int *ptr1,int *ptr2)
{
	*ptr1=*ptr1+*ptr2;
	*ptr2=*ptr1-*ptr2;
	*ptr1=*ptr1-*ptr2;
}

char ConvertCase(char ch)
{
	if((ch>='a')&&(ch<='z'))
	{
		return (ch-32);
	}
	else if((ch>='A')&&(ch<='Z'))
	{
		
		return (ch+32);
	}
	else
	{
		return 0;
	}
	
}

BOOL ChkVowel(char ch)
{
	if((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'))
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
	int iNo1=0,iNo2=0,iChoice=0,iRet=0;
	BOOL bRet=FALSE,Running=TRUE;
	char Ch1='\0',Ch2='\0',cRet='\0';
	
	
	while(Running)
	{
		printf("0.Exit\n1.Display Even numbers\n2.Display Largest Factor\n3.Display Even Factors\n4.Display Common Factors\n5.Display Fibonacci Series\n6.Swap Characters\n7.Swap Numbers\n8.Convert Case\n9.Check Vowel or not\n");
	    printf("\nEnter Your Choice\n");
		scanf("%d",&iChoice);

		switch(iChoice)
		{
			
		     case 1:
				 printf("Enter Number\n");
				 scanf("%d",&iNo1);
				 DisplayEven(iNo1);
				 break;

			 case 2:
				 printf("Enter Number\n");
			     scanf("%d",&iNo1);
				 iRet=FindLargestFact(iNo1);
				 printf("Largest Factor of %d is %d \n",iNo1,iRet);
				 break;

			 case 3:
				 printf("Enter Number\n");
			     scanf("%d",&iNo1);
				 DisplayEvenFact(iNo1);
				 break;

			 case 4:
				 printf("Enter two numbers\n");
				 scanf("%d%d",&iNo1,&iNo2);
				 DisplayCommonFact(iNo1,iNo2);
				 break;

			 case 5:
				 printf("Enter Number\n");
			     scanf("%d",&iNo1);
				 DisplayFibonacci(iNo1);
				 break;

			 case 6:
				 printf("Enter two characters\n");
				 fflush(stdin);
				 scanf("%c",&Ch1);
				 fflush(stdin);
				 scanf("%c",&Ch2);
			
				 CharSwap(&Ch1,&Ch2);
				 printf("After Swapping %c %c",Ch1,Ch2);
				 break;

			 case 7:
				 printf("Enter two numbers\n");
				 fflush(stdin);
				 scanf("%d%d",&iNo1,&iNo2);
				 SwapNum(&iNo1,&iNo2);
				 printf("After Swapping %d %d",iNo1,iNo2);
				 break;

			 case 8:
				 printf("Enter character\n");
				 fflush(stdin);
				 scanf("%c",&Ch1);
				 
				 cRet=ConvertCase(Ch1);
				 if(cRet==0)
				 {
					 printf("%c is not a alphabet\n",Ch1);
				 }
				 else
				 {
				 printf("%c",cRet);
				 }
				 break;
				 
			 case 9:
				 printf("Enter character\n");
				 fflush(stdin);
				 scanf("%c",&Ch1);
				 
				 bRet=ChkVowel(Ch1);
				 if(bRet==TRUE)
				 {
				   printf("%c is Vowel\n",Ch1);
				 }
				 else
				 {
					printf("%c is not Vowel\n",Ch1);
			     }
			     break;

			 case 0:
				Running=FALSE;
				break;

			 default:
				printf("Invalid Choice\n");
				break;
		}
				printf("\n\n");
	}	


	return 0;
}