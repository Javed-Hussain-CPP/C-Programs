// Q1.
#include<stdio.h>
int q1()
{
    int x;
    printf("enter a number\n");
    scanf("%d",&x);
    if(x>=1)
    printf("number is positive");
    else if(x<=-1)
    printf("number is negative");
    else
    printf("number is zero");
    return 0;
}

// Q2.

#include<stdio.h>
int q2()
{
    char ch;
    printf("enter a character\n");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
    printf("Alphabet in Upper Case");
    else if(ch>='a' && ch<='z')
    printf("Alphabet in Lower Case");
    else if(ch>='0' && ch<='9')
    printf("character is digit");
    else
    printf("character is special symbol");
    return 0;
}

// Q3.

#include<stdio.h>
int q3()
{
    int a,b,c;
    printf("enter the value of a side of a triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)
    printf("triangle is valid");
    else
    printf("triangle is not valid");
    return 0;
}

// Q4.

#include<stdio.h>
int q4()
{
    int x;
    printf("enter a month number\n");
    scanf("%d",&x);
    if(x==2)
    printf("number of days is 28 &29");
    else if(x==1 || x==3 || x==5 || x==7 || x==8 || x==10 || x==12)
    printf("number of days is 31");
    else
    printf("number of days is 30");
    return 0;
}