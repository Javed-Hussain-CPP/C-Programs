// Q1.

#include<stdio.h>
int q1()
{
    int N;
    int i=1;
    printf("enter the value to print MySirg\n");
    scanf("%d",&N);
    while (i<=N)
    {
        printf("MySirg\n");
        i++;
    }
    return 0;
}

// Q2.

#include<stdio.h>
int q2()
{
    int i=1,n;
    printf("enter a value\n");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}

// Q3.

#include<stdio.h>
int q3()
{
    int i=1,n;
    printf("enter a number\n");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("%d\n",1+n-i);
        i++;
    }
    return 0;
}

// Q4.

#include<stdio.h>
int q4()
{
    int i=1,n;
    printf("enter a number ");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("%d ",2*i-1);
        i++;
    }
    return 0;
}

// Q5.

#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter a number ");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("%d\n",);
        i-=2;
    }
    return 0;
}

// Q6.

#include<stdio.h>
int q6()
{
    int i=2;
    while (i<=20)
    {
        printf("%d\n",i);
        i+=2;
    }
    return 0;
}

// Q7.

#include<stdio.h>
int q7()
{
    int i=10;
    while (i>=1)
    {
        printf("%d\n",i);
        i-=2;
    }
    return 0;
}

// Q8.

#include<stdio.h>
int q8()
{
    int i=1;
    while (i<=10)
    {
        printf("%d\n",i*i);
        i++;
    }
    return 0;
}

// Q9.

#include<stdio.h>
int q9()
{
    int i=1;
    while (i<=10)
    {
        printf("%d\n",i*i*i);
        i++;
    }
    return 0;
}

// q10.

#include<stdio.h>
int q10()
{
    int i=5;
    while (i<=50)
    {
        printf("%d\n",i);
        i+=5;
    }
    return 0;
}