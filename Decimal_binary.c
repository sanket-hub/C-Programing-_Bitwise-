/* Accept number from user and display it's equivalent binary number */

#include<stdio.h>
typedef unsigned int UINT;

void Convert(UINT iNo)
{
	int i=0,j=0;
	int arr[32]={0};
	
	while(iNo>0)
	{
		arr[i]=iNo%2;
		iNo=iNo/2;
		i++;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d ",arr[j]);
	}
}

int main()
{
	int iValue=0;
	
	printf("Enter number ");
	scanf("%d",&iValue);
	
	Convert(iValue);
	printf("\n");
	
	return 0;
}
