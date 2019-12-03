/* Accept number from user and display it's equivalent hexadecimal number */

#include<stdio.h>
typedef unsigned int UINT;

void Convert(UINT iNo)
{
	int i=0,j=0;
	int arr[8]={0};
	
	while(iNo>0)
	{
		arr[i]=iNo%16;
		iNo=iNo/16;
		i++;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%X ",arr[j]);
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
