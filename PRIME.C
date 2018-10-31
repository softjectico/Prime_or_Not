#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,q;
	clrscr();
	TOP:
	printf("\nEnter a no :\n");
	scanf("%d",&n);
	for(i=2;i<=(n/2);i++)
	{
	  if(n%i==0)
	  {
		printf("No %d is not prime\n",n);
		goto TOP;. // works in a loop

	  }
	}
	printf("No %d is prime \n",n);
	printf("\nTo repeat the program repeat press 1 or press any key to exit : \t");
	scanf("%d",&q);
	if(q==1)
	
		goto TOP;
	

	getch();
}
