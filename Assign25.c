#include<stdio.h>

void print_firstN_num(int n) // print first N natural numbers //
{
    if(n>1)
    print_firstN_num(n-1);
    printf("%d ",n);
}

void print_firstN_num_reverse(int n)
{
    if(n>=1)
    {
        printf("%d ",n);
        print_firstN_num_reverse(n-1);
    }
}

int fact(int n)
{
    if(n==0)
    return 1;
    else
    return n*fact(n-1);
}

void print_N_odd(int n)
{
    if(n>1)
    print_N_odd(n-1);
    printf("%d ",2*n-1);
}

void print_N_odd_reverse(int n)
{
    if(n>0)
    {
        printf("%d ",2*n-1);
        print_N_odd_reverse(n-1);
    }
}

void printNeven(int n)
{
    if(n>0)
    {
        printNeven(n-1);
        printf("%d ",2*n);
    }
}

int main()
{
    int n,f;
    printf("enter a number\n");
    scanf("%d",&n);
    printNeven(n);
    //print_N_odd_reverse(n);
    //print_N_odd(n);
    //print_firstN_num(n);
    //print_firstN_num_reverse(n);
    /*f=fact(n);
    printf("%d",f);*/
    return 0;
}