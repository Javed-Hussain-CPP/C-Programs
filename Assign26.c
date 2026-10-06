#include<stdio.h>

void print_N_even_Reverse(int n)
{
    if(n>0)
    {
    printf("%d ",2*n);
    print_N_even_Reverse(n-1);
    }
}

void print_first_N_Squares(int n)
{
    if(n>0)
    {
        print_first_N_Squares(n-1);
        printf("%d ",n*n);
    }
}

void print_binary(int n)
{
    if(n>0)
    {
        print_binary(n/2);
        printf("%d",n%2);
    }
}

void print_octal(int n)
{
    if(n>0)
    {
        print_octal(n/8);
        printf("%d",n%8);
    }
}

void print_reverse_of_num(int n)
{
    if(n>0)
    {
        printf("%d",n%10);
        print_reverse_of_num(n/10);
    }
}

int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    //print_N_even_Reverse(n);
    //print_first_N_Squares(n);
    //print_binary(n);
    //print_octal(n);
    print_reverse_of_num(n);
    /*while(n)
    {
        if(n%2==0)
        printf("0");
        else
        printf("1");
        n=n/2;
    }*/
    
    return 0;
}