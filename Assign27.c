#include<stdio.h>

int Sum_of_N_natural_num(int n)
{
    if(n>0)
    return n + Sum_of_N_natural_num(n-1);
}

int Sum_of_N_Odd_num(int n)
{
    if(n>0)
    return 2*n-1 + Sum_of_N_Odd_num(n-1);
}

int Sum_of_N_Even_num(int n)
{
    if(n>0)
    return 2*n + Sum_of_N_Even_num(n-1);
}

int Sum_of_N_Square_num(int n)
{
    if(n>0)
    return n*n + Sum_of_N_Square_num(n-1);
}

int Sum_of_digits_of_num(int n)
{
    if(n>0)
    return n%10 + Sum_of_digits_of_num(n/10);
}

int main()
{
    int n,Sum;
    printf("enter a number\n");
    scanf("%d",&n);
    //Sum=Sum_of_N_natural_num(n);
    //Sum=Sum_of_N_Odd_num(n);
    //Sum=Sum_of_N_Even_num(n);
    //Sum=Sum_of_N_Square_num(n);
    Sum=Sum_of_digits_of_num(n);
    printf("%d",Sum);
    return 0;
}