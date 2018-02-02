#include<stdio.h>
int main()
{
int number,count=0;
printf("Enter the number:\n",number);
scanf("%d",&number);
while(number>0)
{
number=number/10;
count=count+1;
}
printf("The no of digit is %d\n",count);
return 0;
}
