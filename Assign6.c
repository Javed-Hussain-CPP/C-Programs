//                     Assignment-6 : More on Operators in C Language

//  question 1.  convert INR to USD.

#include<stdio.h>
/*int main()
{
    float $=84.23;
    int r;
    float USD;
    printf("enter the value of INR\n");
    scanf("%d",&r);
    USD=r/$;
    printf("%d rupees in dollar is %f",r,USD);
    return 0;
}
*/


//  question 2.  take a 3 digit number from the user and rotate its digits by one position towards the right.

/*int main()
{
    int x;
    printf("enter a 3 digit number\n");
    scanf("%d",&x);
    x=x%10*100+x/10;
    printf("%d",x);
    return 0;
}
*/


//                     Assignment-7 : Decision Control Statements

//  question 1.

/*int main()
{
    int x;
    printf("enter a number\n");
    scanf("%d",&x);
    if(x>0)
         printf("number is positive");
    else
         printf("number is non positive");
         return 0;
}
*/


// question 2.

/*int main()
{
    int x;
    printf("enter a number\n");
    scanf("%d",&x);
    if(x%5==0)
         printf("%d is divisible by 5",x);
    else
         printf("%d is not divisible by 5",x);
         return 0;
}
*/


//  question 3.  to check if a number is an even or odd. 

/*int main()
{
    int x;
    printf("enter a number\n");
    scanf("%d",&x);
    if(x%2==0)
         printf("number is even");
    else
         printf("number is odd");
         return 0;
}
*/


//  question 4.  to check if a number is an even or odd without % operator.

/*int main()
{
     int x;
     printf("enter a number\n");
     scanf("%d",&x);
     if(x==x/2*2)
     printf("number is even");
     else
     printf("number is odd");
     return 0;
}
*/

//  question 5.  to check if a number is a even or odd using bitwise operator.

int main()
{
     int x;
     printf("enter a number\n");
     scanf("%d",&x);
     if(x&1)
     printf("number is odd");
     else
     printf("number is even");
     return 0;
}