#include<stdio.h>

int fact(int n)
{
    if(n==0)
    return 1;
    return n*fact(n-1);
}

int hcf(int a,int b)
{
    if(a%b!=0)
    hcf(b,a%b);
    else
    return b;
}

int nthFib(int N)
{
    int p=-1,n=1,fib=0;
    for(int i=1;i<=N;i++)
    {
        fib=p+n;
        p=n;
        n=fib;
    }
    return fib;
}

void fib(int n)
{
    if(n>0)
    {
        fib(n-1);
        int f=nthFib(n);
        printf(" %d",f);
    }
}

int count_digits(int n)
{
    if(n==0)
    return 0;
    return 1 + count_digits(n/10);
}

int calculate_power(int n,int p)
{
    if(p==1)
    return n;
    return n*calculate_power(n,p-1);
}

int main()
{
    int num,f,a,b,h,power;
    printf("enter a number\n");
    scanf("%d%d",&num,&power);
    int result=calculate_power(num,power);
    //int c=count_digits(n); // function call
    //fib(n);  // function call
    //h=hcf(a,b); // function call
    //f=fact(n); // function call
    printf("%d",result);
}