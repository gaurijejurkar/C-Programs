#include<stdio.h> 
typedef int BOOL;
#define TRUE 1
#define FALSE 0

//////////////////////////////////////////////////////////////////////////////////////////////////

void pattern1(int ino)
{
	int i=0;
	char CH='A';

	if(ino<0)
	{
		ino=-ino;
	}

	for(i=1;i<=ino;i++,CH++)
	{
		printf("%c\t",CH);
		
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////

void pattern2(int ino)
{
	int i=0;
	char CH='A';

	if(ino<0)
	{
		ino=-ino;
	}

	for(i=1;i<=ino;i++,CH++)
	{
		if((i%2)!=0)
		{
			printf("%c\t",CH);
		}
		else
		{
			printf("%c\t",CH+32);
		}
	
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////

void pattern3(int irow,int icol)
{
	int i=0,j=0;

	if(irow<0)
	{
		irow=-irow;
	}
	if(icol<0)
	{
		icol=-icol;
	}

	for(i=1;i<=irow;i++)
	{
		for(j=1;j<=icol;j++)
		 {
		    printf("*\t");
	     }
		printf("\n");
	}

}

/////////////////////////////////////////////////////////////////////////////////////////////////////

void pattern4(int irow,int icol)
{
	int i=0,j=0;

	if(irow<0)
	{
		irow=-irow;
	}
	if(icol<0)
	{
		icol=-icol;
	}

	for(i=1;i<=irow;i++)
	{
		for(j=1;j<icol;j++)
		 {
		    printf("%d\t",j);
	     }
		printf("\n");
	}

}

//////////////////////////////////////////////////////////////////////////////////////////////////////

void pattern5(int irow,int icol)
{
	int i=0,j=0;

	if(irow<0)
	{
		irow=-irow;
	}
	if(icol<0)
	{
		icol=-icol;
	}

	for(i=1;i<=irow;i++)
	{
		for(j=1;j<=icol;j++)
		 {
		   
			 if((j%2)==0)
			 {
				 printf("$\t");
			 }
			 else
			 {
				 printf("%d\t",j);
			 }
	     }
	
		printf("\n");
	}

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void pattern6(int irow,int icol)
{
	int i=0,j=0;

	if(irow<0)
	{
		irow=-irow;
	}
	if(icol<0)
	{
		icol=-icol;
	}

	for(i=1;i<=irow;i++)
	{
		
		for(j=1;j<=icol;j++)
		 {
		   
			 if((j%2)!=0)
			 {
				 
				printf("%d\t",j); 
				 
			 }
			 else
			 {
				 printf("$\t"); 
			 }
			
			
	     }
		
		printf("\n");
	}

}

//////////////////////////////////////////////////////////////////////////////////////////////////

void pattern7(int irow,int icol)
{
	int i=0,j=0;

	if(irow<0)
	{
		irow=-irow;
	}
	if(icol<0)
	{
		icol=-icol;
	}

	for(i=1;i<=irow;i++)
	{
		for(j=1;j<=icol;j++)
	    {
			if((i%2)!=0)
			{
				printf("$\t");
			}
			else
		    {	
				printf("#\t");
			}
	     }
	
		printf("\n");
	}

}
////////////////////////////////////////////////////////////////////////////////////////////////////////

void pattern8(int irow,int icol)
{
	int i=0,j=0;

	if(irow<0)
	{
		irow=-irow;
	}
	if(icol<0)
	{
		icol=-icol;
	}

	for(i=irow;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("*\t");
		}
			
		printf("\n");
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////

void pattern9(int irow,int icol)
{
	int i=0,j=0;

	if(irow<0)
	{
		irow=-irow;
	}
	if(icol<0)
	{
		icol=-icol;
	}

	for(i=1;i<=irow;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*\t");
		}
			
		printf("\n");
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////////////

void pattern10(int irow,int icol)
{
	int i=0,j=0;

	if(irow<0)
	{
		irow=-irow;
	}
	if(icol<0)
	{
		icol=-icol;
	}

	for(i=1;i<=irow;i++)
	{
		for(j=1;j<=icol;j++)
		 {
				if((i==1)||(i==irow)||(j==1)||(j==icol))
					{
						printf("*\t");
			        }
			 
				else
					{
					    printf("#\t");
					}

	      }
	    
	
		printf("\n");
	}

}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
	int ivalue=0,ivalue1=0,ichoice=0;
	BOOL Running=TRUE;

	printf("Enter number\n");
	scanf("%d",&ivalue);
	printf("Enter number\n");
	scanf("%d",&ivalue1);
	printf("Enter choice(1-10)\n\n");
	scanf("%d",&ichoice);

	while(Running)
	{
		switch(ichoice)
		{
			case 0:
					Running=FALSE;
					break;

			case 1:
				   pattern1(ivalue);
				   break;
			case 2:
				   pattern2(ivalue);
				   break;
			case 3:
				   pattern3(ivalue,ivalue1);
				   break;
			case 4:
				   pattern4(ivalue,ivalue1);
				   break;
			case 5:
				   pattern5(ivalue,ivalue1);
				   break;
			case 6:
				   pattern6(ivalue,ivalue1);
				   break;
			case 7:
				   pattern7(ivalue,ivalue1);
				   break;
			case 8:
				   pattern8(ivalue,ivalue1);
				   break;
			case 9:
				   pattern9(ivalue,ivalue1);
				   break;
			case 10:
				   pattern10(ivalue,ivalue1);
				   break;
			default:
				   printf("INVALID CHOICE\n");
				   break;
		}
	
	}
	printf("\n\n..........Terminating Application..................\n\n");
	return 0;
}