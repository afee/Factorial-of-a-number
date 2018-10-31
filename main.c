//this is a program to find factorial of a number 
#include <stdio.h>
#include <stdlib.h>
//this is a function to findfactorial of a number 
int fact(int num)
{
    int res;
    if(num==1 || num==0)
        return 1;//factorial of number 1 and 0 is 1
    else
        res=num *fact(num-1);// call function fact recursively 
    return res;
}

int main()
{
   int i,n;
   printf("enter the number: ");//reading the number 
   scanf("%d",&n);

   i=fact(n);//calling the function and return result to variable i
   printf("%d",i);//printing the result 


    return 0;
}
