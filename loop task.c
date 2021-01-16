#include<stdio.h>
int main()
{
int i,j,n,k;
printf("ENTER THE NUMBER OF ROWS :  ");
scanf("%d",&n);
for(i=0; i<n ; ++i)
{
	for(j=0; j>i ;j--)//.for printing of the spaces 
	printf(" ");
		for(k=0; k<=i;++k)
	{
		if(k%1==0) 
		printf("01");
	}
	printf("\n");//.for the next line
}
}
