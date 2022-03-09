#include<stdio.h>
int main(){
int n,i,factorial;
printf("enter the number : ");
scanf("%d",&n);
factorial = n;
for(i=1;i<n;)
{
    factorial = factorial*(n-i);
    n=n-1;
    if(n==0)
    break;
}
printf("factorial of your number is %d",factorial);
return 0;
}