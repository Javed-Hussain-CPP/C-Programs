// Q1. WAP to find the nth term of the Fibonacci Series. //

#include<stdio.h>
int q1()
{
    int i,x,a=0,f=1,n;
    printf("enter the term\n");
    scanf("%d",&x);
    for(i=2 ; i<=x ; i++)
    {
        n=a+f;
        a=f;
        f=n;
    }

    if(x==0 || x==1)
    printf("%d term is %d",x,x);
    else
    printf("%d term is %d",x,n);

    return 0;
}

// Q2. WAP to print first n terms of Fibonacci Series. //

#include<stdio.h>
int q2()
{
    int i,x,a=0,f=1,n;
    printf("enter the value upto where you want to print\n");
    scanf("%d",&x);
    for(i=0 ; i<=x ; i++)
    {
        if(i==0 || i==1)
        printf("%d ",i);
        else
        {
          n=a+f;
          a=f;
          f=n;  
          printf("%d ",n);
        }
    }

    printf("These are the first %d terms of Fibonacci Series",x);

    return 0;
}

// Q3. WAP to check whether the given number is there in Fibonacci Series or not. //

#include<stdio.h>
int q3()
{
    int i,x,a=0,f=1,n;
    printf("enter the number\n");
    scanf("%d",&x);
    for(i=0 ; i<=x ; i++)
    {
        if(x==0 || x==1)
        break;
        n=a+f;
        a=f;
        f=n;  
        if(x==n)
        break;
        else if (n>x)
        break;   
    }

    if(x==n || x==0 || x==1)
    printf("%d is there in Fibonacci Series",x);
    else
    printf("%d is not there in Fibonacci Series",x);

    return 0;
}

#include<stdio.h>
int q4()
{
    int a=-1,b=1,c,n;
    printf("enter the number\n");
    scanf("%d",&n);
    while((a+b)<=n)
    {
        c=a+b;
        if((a+b)==n)
        break;
        a=b;
        b=c;   
    }

    if((a+b)==n)
    printf("%d is there in Fibonacci Series",n);
    else
    printf("%d is not there in Fibonacci Series",n);

    return 0;
}

// WAP to check whether a given number is an Armstrong number or not. //

#include<stdio.h>
int q5()
{
    int x,n,S=1,c=0,d,A=0;
    printf("enter a number\n");
    scanf("%d",&x);
    n=x;
    while(x)
    {
        x=x/10;
        c++;
    }

    x=n;
    
    while(n)
    {
        d=c;
        if(c==1)
        break;

        while(c)
        {
            S=S*(n%10);
            c--;
        }

        c=d;
        n=n/10;
        A=S+A;
        S=1;
    }

    if(A==x || c==1)
    printf("%d is an Armstrong Number",x);
    else
    printf("Not an Armstrong number");

    return 0;
}


// WAP to print all Armstrong numbers under 1000. //

#include<stdio.h>
int q6()
{
    int i,n,s=1,c=0,d,a=0;
    for(i=0;i<1000;i++)
    {
        n=i;
        c=0;
        a=0;
        while(i)
        {
            i=i/10;
            c++;
        }

        i=n;

        while(n)
        {
            d=c;
            if(c==1)
            break;
            while(c)
            {
                s=s*(n%10);
                c--;
            }
            c=d;
            n=n/10;
            a=s+a;
            s=1;
        }

        if(a==i || c==1)
        printf("%d ",i);
    }

    return 0;
}

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==1)
            printf("*");

            if(i>1 && i<5)
            {
                if(j==1 || j==5)
                printf("*");
                else
                printf(" ");
            }
            else
            {
                if(i==5)
                printf("*");
            }
        }

        printf("\n");
    }

    return 0;
}