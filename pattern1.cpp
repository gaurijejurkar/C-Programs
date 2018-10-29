#include<stdio.h>

//////////////////////////////////////////////////////////////////////////

void pattern1(int ino)
{
	int i=0,j=0,idigit=0,ilength=0;
	int arr[8];
	while(ino!=0)
	{
		idigit=ino%10;
		ilength++;
		arr[i]=idigit;
		i++;
		ino=ino/10;
	}

	for(i=0;i<ilength;i++)
	{
		for(j=(ilength-1);j>=0;j--)
		{
			printf("%d\t",arr[j]);
		}
		printf("\n");
	}

}

///////////////////////////////////////////////////////////////////////////////////

void pattern2(int ino)
{
	int i=0,j=0,idigit=0,ilength=0;
	int arr[8];
	while(ino!=0)
	{
		idigit=ino%10;
		ilength++;
		arr[i]=idigit;
		i++;
		ino=ino/10;
	}

	for(i=0;i<ilength;i++)
	{
		for(j=0;j<ilength;j++)
		{
			printf("%d\t",arr[j]);
		}
		printf("\n");
	}

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

void pattern3(int ino)
{
	int i=0,j=0,idigit=0,ilength=0;
	int arr[8];
	while(ino!=0)
	{
		idigit=ino%10;
		ilength++;
		arr[i]=idigit;
		i++;
		ino=ino/10;
	}

	for(i=0;i<ilength;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d\t",arr[j]);
		}
		printf("\n");
	}

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

void pattern4(int ino)
{
	int i=0,j=0,idigit=0,ilength=0;
	int arr[8];
	while(ino!=0)
	{
		idigit=ino%10;
		ilength++;
		arr[i]=idigit;
		i++;
		ino=ino/10;
	}

	for(i=(ilength-1);i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d\t",arr[j]);
		}
		printf("\n");
	}

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

void pattern5(int ino)
{
	int i=0,j=0,idigit=0,ilength=0;
	int arr[8];
	while(ino!=0)
	{
		idigit=ino%10;
		ilength++;
		arr[i]=idigit;
		i++;
		ino=ino/10;
	}

	for(i=0;i<ilength;i++)
	{
		for(j=0;j<ilength;j++)
		{
			if((i==0)||(i==ilength-1)||(j==0)||(j==ilength-1))
			{
				printf("%d\t",arr[j]);
			}

			else
			{
				printf("0\t");
			}
		}
		printf("\n");
	}

}

////////////////////////////////////////////////////////////////////////////////

int main()
{
	int ivalue=0,ichoice=0;

	printf("Enter Number\n");
	scanf("%d",&ivalue);
	printf("Enter choice(1-5)\n");
	scanf("%d",&ichoice);

	switch(ichoice)
	{
	case 1:
			pattern1(ivalue);
			break;

	case 2:
	        pattern2(ivalue);
			break;

	case 3:
	        pattern3(ivalue);
			break;

	case 4:
			pattern4(ivalue);
			break;

	case 5:
			pattern5(ivalue);
			break;

	default:
			printf("WRONG CHOICE\n");
			break;
			}



	return 0;
}