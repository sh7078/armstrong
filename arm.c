
#include<stdio.h>
#include<math.h>

int main(){
	
	// to print armstrong number in a given range
       int first,last,b,i;
       printf("Enter the two numbers in which we have to find armstrong number:");
       scanf("%d%d",&first,&last);
       for(i=first;i<=last;i++)
       {
       	    b=armstrong(i);
	    printf("%d",b);                       		
       }
return 0;
}
int armstrong(int x)
{
	int j=0,num,remainder,power;
	int original_number;
	int result=0;
	num = x;
	original_number=x;
	while(x!=0)
	{
		x=x/10;
		j++;	
	}
	while(num!=0)
	{
		remainder=num%10;
		power=pow(remainder,j);
		result=result+power;
		num=num/10;
	}
	if(original_number==result)
	return result;
}

