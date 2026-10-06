#include<stdio.h>
#include<stdlib.h>
int q1()
{
    int marks;
    printf("Enter obtained marks by the student\n");
    scanf("%d",&marks);
    switch (marks)
    {
    case 90 ... 100:
        printf("Grade A");
        break;
    case 80 ... 89:
        printf("Grade B");
        break;
    default:
        printf("Invalid Marks");
    }
}

int q2()
{
    int choice;
    while(1)
    {
    printf("\n1. factorial of a number\n");
    printf("2. check even and odd\n");
    printf("3. area of circle\n");
    printf("4. sum of first N natural numbers\n");
    printf("5. Exit\n");

    printf("\nenter your choice\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
    {
        int n,f=1;
        printf("enter a number\n");
        scanf("%d",&n);
        while(n)
        {
            f=f*n;
            n--;
        }
        printf("factorial is %d\n",f);
    }
    break;
    case 2:
    {
        int n;
        printf("enter a number\n");
        scanf("%d",&n);
        if(n%2==0)
        printf("Number is Even\n");
        else
        printf("Number is Odd\n");
    }
    break;
    case 3:
    {
        int r;
        float a;
        printf("enter radius of a circle\n");
        scanf("%d",&r);
        a=3.14*r*r;
        printf("Area of Circle is %f\n",a);
    }
    break;
    case 4:
    {
        int S=0,n,k;
        printf("enter a number\n");
        scanf("%d",&n);
        k=n;
        while (n)
        {
            S=S+n;
            n--;
        }
        printf("Sum of first %d natural numbers is %d",k,S);
    }
    case 5:
        exit(0);    
    default:
        printf("\nInvalid Choice, Retry\n");
    }
    }
    if(choice==5)
    printf("Exit from the Program");
}

int q3()
{
    char ch;
    printf("Enter Alphabets\n");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'A' ... 'Z':
        printf("Upper Case");
        break;
    case 'a' ... 'z':
        printf("Lower Case");
        break;  
    default:
        printf("Special Character");
    }
}

int q4()
{
    char ch;
    printf("Enter Alphabets\n");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'A': case 'E': case 'I': case 'O': case 'U':
    case 'a': case 'e': case 'i': case 'o': case 'u':
    printf("\nThis Character is a Vovwel\n");
    break;
    case 'B' ... 'D':
    case 'b' ... 'd':
    printf("\nThis Character is a Consonant\n");
    break;
    default:
    printf("\nSpecial Character\n");
    }
    return 0;
}

int main()
{
    int choice;
    while(1)
    {
    printf("\n1. LCM of two numbers\n");
    printf("2. sum of the digits of a number\n");
    printf("3. volume of a cuboid\n");
    printf("4. check whether a given number is prime or not\n");
    printf("5. Exit\n");

    printf("\nenter your choice\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
    {
        int a,b,L;
        printf("enter two numbers\n");
        scanf("%d %d",&a,&b);
        for(L=a>b?a:b ; L<=a*b ; L++)
        {
            if(L%a==0 && L%b==0)
            break;
        }
        printf("LCM is %d\n",L);
    }
    break;
    case 2:
    {
        int n;
        printf("enter a number\n");
        scanf("%d",&n);
        if(n%2==0)
        printf("Number is Even\n");
        else
        printf("Number is Odd\n");
    }
    break;
    case 3:
    {
        int r;
        float a;
        printf("enter radius of a circle\n");
        scanf("%d",&r);
        a=3.14*r*r;
        printf("Area of Circle is %f\n",a);
    }
    break;
    case 4:
    {
        int S=0,n,k;
        printf("enter a number\n");
        scanf("%d",&n);
        k=n;
        while (n)
        {
            S=S+n;
            n--;
        }
        printf("Sum of first %d natural numbers is %d",k,S);
    }
    break;
    case 5:
    break;
            
    default:
        printf("\nInvalid Choice, Retry\n");
    }
    if(choice==5)
    break;
    }
    printf("Exit from the Program");

    return 0;
}