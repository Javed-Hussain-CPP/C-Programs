//  Question 1. WAP to check whether a given number is a three digit number or not.

#include<stdio.h>
int q1()
{
    int x;
    printf("enter a number\n");
    scanf("%d",&x);
    if(x>99 && x<1000 || x>-1000 && x<-99)
    printf("three digit number");
    else
    printf("not a three digit number");
    return 0;
}

// Question 2. WAP to print greater b/w two numbers. Print one number if both are the same.

int q2()
{
    int x,y;
    printf("enter two numbers\n");
    scanf("%d%d",&x,&y);
    if(x>=y)
    printf("%d is greater",x);
    else
    printf("%d is greater",y);
    return 0;
}

// Question 3. WAP to check whether roots of a given quadratic equation are real and distinct,
//             real & equal or imaginary roots.

int q3()
{
    int a,b,c;
    printf("enter values of a,b and c of a quadratic equation\n");
    scanf("%d%d%d",&a,&b,&c);
    if(b*b-4*a*c>0)
    printf("Real and Distinct Roots");
    else if(b*b-4*a*c<0)
    printf("Imaginary Roots");
    else
    printf("Real and Equal roots");
    return 0;
}

// Question 4. WAP to check whether a given year is leap or not.

int q4()
{
    int year;
    printf("enter a year\n");
    scanf("%d",&year);
    if(year%100==0)
       if(year%400==0)
          printf("%d is a Leap year",year);
       else
          printf("%d is not a Leap year",year);
    else
       if(year%4==0)
          printf("%d is a Leap year");
       else
          printf("%d is not a Leap year");      
    return 0;
}

// Question 5. WAP to find the greatest among three given numbers. Print number once if the greatest
//             number appears two or three times.

int q5()
{
    int a,b,c;
    printf("enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c)
          printf("%d is a greater number",a);
    else
       if(b>=a && b>=c)
          printf("%d is a greater number",b);
       else
          printf("%d is a greater number",c);      
    return 0;
}