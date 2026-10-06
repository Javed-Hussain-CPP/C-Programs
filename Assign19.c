#include<stdio.h>
int q1()
{
    int n;
    printf("enter a month number\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("\n31");
        break;
    case 2: 
        printf("\n28 or 29");
        break;      
    case 3:  
        printf("\n31");
        break;     
    case 4:
        printf("\n30");
        break;    
    case 5:
        printf("\n31");
        break;   
    
    default:
        printf("\nInvalid Month");
    }
    printf("\n\noutside switch");
    return 0;
}



int q2()
{
    int n,a,b;
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");

    printf("Enter your Choice\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("\nenter two numbers");
        scanf("%d %d",&a,&b);
        printf("Sum is %d\n",a+b);
        break;
    case 2: 
        printf("\nenter two numbers");
        scanf("%d %d",&a,&b);
        if(a>b)
        {
           printf("Difference is %d\n",a-b); 
        }
        else
        printf("put first value greater\n");
        break;     
    case 3:  
        printf("\nenter two numbers");
        scanf("%d %d",&a,&b);
        printf("Product is %d\n",a*b);
        break;     
    case 4:
        printf("\nenter two numbers");
        scanf("%d %d",&a,&b);
        printf("Division is %d\n",a/b);
        break;
    case 5:
        printf("\nExit");
        break;  
    default:
        printf("\nInvalid Task");
    }
    
    printf("\n\noutside switch");
    return 0;
}

int q3()
{
    int n;
    printf("enter a day number of a Week\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("\nIt's Monday");
        break;
    case 2: 
        printf("\nTuesday");
        break;      
    case 3:  
        printf("\nWednesday");
        break;     
    case 4:
        printf("\nThursday");
        break;    
    case 5:
        printf("\nFriday");
        break;   
    
    default:
        printf("\nInvalid Day Number");
    }
    printf("\n\noutside switch");
    return 0;
}

int q4()
{
    int a,b,c,choice;
    printf("Enter lengths of the sides of a triangle:\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("\n1. Check for an Isosceles Triangle");
    printf("\n2. Check for Right Angled Triangle");
    printf("\n3. Check for an Equilateral Triangle");
    printf("\n4. Exit");
    printf("\n Enter your choice\n");
    scanf("%d",&choice);
    if(a+b>c && b+c>a && c+a>b)
    {
      switch(choice)
      {
          case 1: 
          if ((a==b || a==c || b==c) && (a!=b!=c))
          printf("Yes, It is an Isosceles triangle");
          else
          printf("Not an Isosceles Triangle");
          break;

          case 2:
          if(a>b && a>c)
          {
            if(a*a==(b*b)+(c*c))
            printf("Yes, It is a Right Angled Triangle");
            else
            printf("Not a Right Angled Triangle");
          }
          else if(b>a && b>c)
          {
            if(b*b==(a*a)+(c*c))
            printf("Yes, It is a Right Angled Triangle");
            else
            printf("Not a Right Angled Triangle");
          }
          else if(c>a && c>b)
          {
            if(c*c==(a*a)+(b*b))
            printf("Yes, It is a Right Angled Triangle");
            else
            printf("Not a Right Angled Triangle");
          }
          else
          printf("Not a Right Angled Triangle");
          break;
          
          case 3:
          if(a==b && b==c)
          printf("Yes, It is an Equilateral Triangle");
          else
          printf("Not an Equilateral Triangle");
          break;

          case 4: printf("\nExit");
          default : printf("\n Invalid Choice, Retry");                
        
      }
    }
    else
    printf("Not a Valid Triangle");
    if(a+b>c && b+c>a && c+a>b)
    printf("\nOutside Switch");
    return 0;
}

int main()
{
    int var;
    printf("enter the value of var\n");
    scanf("%d",&var);
    switch (var)
    {
    case 1:
        printf("\nGood");
        break;
    case 2: 
        printf("\nBetter");
        break;      
    case 3:  
        printf("\nBest");
        break;
    
    default:
        printf("\nInvalid");
    }
    printf("\n\noutside switch");
    return 0;
}