#include<stdio.h>
typedef int BOOL;
#define  TRUE 1
#define FALSE 0

int Divide(int iValue1,int iValue2)
{
	int iAns=0;

	iAns=iValue1/iValue2;

	return iAns;

}

void DisplayText(int iValue1)
{
	int i=0;
	if(iValue1<0)
	{
		iValue1=-iValue1;
	}

	for(i=1;i<=iValue1;i++)
	{
		printf("MARVELLOUS INFOSYSTEMS\n");
	}
}

void DisplayNum(int iValue1,int iValue2)
{
	int i=0;

	for(i=iValue1;i<=iValue2;i++)
	{
		printf("%d\t",i);
	}
}

BOOL ChkDivisible(int iValue1)
{
	if((iValue1%5)==0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

void DisplayStars(int iValue1)
{
	int i=0;
	if(iValue1<0)
	{
		iValue1=-iValue1;
	}

	for(i=1;i<=iValue1;i++)
	{
		printf("*\t");
	}
}

void DisplayChar(int iValue1)
{
	int i=0;
	char ch='A';
	if(iValue1<0)
	{
		iValue1=-iValue1;
	}

	for(i=1;i<=iValue1;i++,ch++)
	{
		printf("%c\t",ch);
	}
}

int SubtractNum(int iValue1)
{
	int iAns=0;

	iAns=iValue1-5;
	return iAns;
}

void DisplayTextX(int iValue1)
{
	if(iValue1<0)
	{
		iValue1=-iValue1;
	}
	if((iValue1%2)==0)
	{
		printf("HELLO\n");
	}
	else
	{
		printf("DEMO\n");
	}
}

void DisplayStarsX(int iValue1)
{
	int i=1;
	if(iValue1<0)
	{
		iValue1=-iValue1;
	}

	while(i<=iValue1)
	{
		printf("*\t");
		i++;
	}
}


int main()
{
	int iNo1=0,iNo2=0,iChoice=0,iRet1=0;
	BOOL iRet=FALSE,Running=TRUE;
	
	
	while(Running)
	{
		printf("Enter Your Choice\n0.Exit\n1.Divide\n2.Display text\n3.Display numbers\n4.Check Divisibility\n5.Display stars\n6.Display Characters\n7.Subtract 5\n8.Display HELLO or DEMO\n9.Display Stars using while loop\n");
	    scanf("%d",&iChoice);

		switch(iChoice)
		{
		case 1:
			printf("Enter two numbers\n");
	        scanf("%d%d",&iNo1,&iNo2);
			iRet1=Divide(iNo1,iNo2);
			printf("%d/%d = %d\n",iNo1,iNo2,iRet1);
			break;

		case 2:
			printf("Enter Number\n");
			scanf("%d",&iNo1);
			DisplayText(iNo1);
			break;

		case 3:
			printf("Enter two number\n");
	        scanf("%d%d",&iNo1,&iNo2);
			DisplayNum(iNo1,iNo2);
			break;

		case 4:
			printf("Enter Number\n");
			scanf("%d",&iNo1);
			iRet=ChkDivisible(iNo1);
			if(iRet==TRUE)
			{
				printf("%d is divisible by 5\n",iNo1);
			}
			else
			{
				printf("%d is not divisible by 5\n",iNo1);
			}
			break;

		case 5:
			printf("Enter Number\n");
			scanf("%d",&iNo1);
			DisplayStars(iNo1);
			break;

		case 6:
			printf("Enter Number\n");
			scanf("%d",&iNo1);
			DisplayChar(iNo1);
			break;

		case 7:
			printf("Enter Number\n");
			scanf("%d",&iNo1);
			iRet1=SubtractNum(iNo1);
			printf("%d-5=%d",iNo1,iRet1);
			break;

		case 8:
			printf("Enter Number\n");
			scanf("%d",&iNo1);
			DisplayTextX(iNo1);
			break;

		case 9:
			printf("Enter Number\n");
			scanf("%d",&iNo1);
			DisplayStarsX(iNo1);
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