// Q1. WAP to calculate facorial of a number.

#include<stdio.h>
int q1()
{
    int i,f,n;
    printf("enter a number\n");
    scanf("%d",&n);
    for ( i = 1, f = 1; i <= n; i++)
    {
        f=f*i;
    }
    
    printf("Factorial of %d is %d",n,f);
    return 0;
}

// or the other way to solve the above Program.

int q11()
{
    int f,n;
    printf("enter a number\n");
    scanf("%d",&n);
    for (f = 1; n ; n--) // we also use while(n>0) or while(n) //
    {
        f=f*n;
    }
    
    printf("Factorial is %d",f);
    return 0;
}

// Q2. WAP to count digits in a given number.

int q2()
{
    int i,n,d;
    printf("enter a number\n");
    scanf("%d",&n);
    for ( i = 1; n ; i++)                // This is done by me.
    {
        d=i;
        n=n/10;
    }
    
    printf("Number of digits is %d",d);
    return 0;
}

//  or the other way to solve the above Program.

int q12()
{
    int x,count=0;
    printf("enter a number\n");
    scanf("%d",&x);
    while(x)
    {
        x=x/10;
        count++;
    }
    
    printf("Number of digits is %d",count);
    return 0;
}

// Q3. WAP to check whether a number is prime or not.

int q3()
{
    int x,i=2;
    printf("enter a number\n");
    scanf("%d",&x);
    while (i<=x-1)
    {
        if (x%i==0)
        break;
        i++;   
    }
    if(i==x)
    printf("number is prime");
    else
    printf("number is not prime");

    return 0;
}

// or by using for loop.

int q13()
{
    int x,i;
    printf("enter a number\n");
    scanf("%d",&x);
    for (i=2;i<=x;i++)
    {
        if (x%i==0)
        break;  
    }
    if(i==x)
    printf("number is prime");
    else
    printf("number is not prime");

    return 0;
}

int q4()
{
    int a,b,L;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    for (L=a>b?a:b;L<=L<=a*b;L++)
    {
        if (L%a==0 && L%b==0)
        break;  
    }

    printf("LCM is %d",L);

    return 0;
}

// Q5. WAP to reverse a given number.

int q5()
{
    int x,r,y=0;
    printf("enter a number\n");
    scanf("%d",&x);
    while(x)
    {
       r = x%10;
       x = x/10;
       y = y*10 + r;
    }

    printf("Reverse number is %d",y);

    return 0;
}

int main()
{
  int x,y,i,LCM = 1;
  printf("enter two numbers\n");               // LCM Program done by me //
  scanf("%d %d",&x,&y);
  for ( i = 2; x>1 || y>1; i++)
  {
    while (x%i==0 || y%i==0)
    {
      if (x%i==0)
      {
        x/=i;
      }
      if (y%i==0)
      {
        y/=i;
      }
      
      LCM*=i;
      
    }
    
  }

  printf("LCM is %d",LCM);

  return 0;

}


/*int main()  //        prime number program        //
{
  int i=2;
  int N;
  printf("enter a number\n");
  scanf("%d",&N);
  while (N%i !=0 )
  {
    if(N==1)
    break;
    i++;
  }
  if(i==N)
  printf("Number is prime");
  else
  printf("Number is not Prime");
  return 0;
}
*/



// program to print first n prime numbers //

int main() 
{
    int i,j,n,x=1;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        x++;
        for(j=2; j<=x; j++)
        {
            if(x==j)
            printf("%d ",x);
            if(x%j==0)
            break;
        }
        if(x!=j)
        i--;
    }

    return 0;
}