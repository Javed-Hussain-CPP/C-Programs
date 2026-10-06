// Q1. WAP to print all Prime numbers under 100. //

#include<stdio.h>
int q1()
{
  int i,x;
  for ( x = 2; x < 100; x++)
  {
    for ( i = 2; i < x; i++)
    {
      if( x % i == 0)
      break;
    }
    
    if(i == x)
    printf("%d ",x);

  }

  return 0;
  
}

// Q2. WAP to print all Prime numbers between two given numbers.

int q2()
{
  int i,x,y;
  printf("enter two numbers\n");
  scanf("%d %d",&x,&y);
  x++;
  for (; x < y; x++)
  {
    for ( i = 2; i < x; i++)
    {
      if( x % i == 0)
      break;
    }
    
    if(i == x)
    printf("%d ",x);

  }

  return 0;
  
}

// Q3. WAP to find next Prime number of a given number. //

int q3()
{
  int i,x;
  printf("enter a number\n");
  scanf("%d",&x);
  for (x++ ;; x++)
  {
     for ( i = 2; i < x; i++)
     {
      if(x % i == 0);
      break;
     }

     if(i == x);
     break;
  }
  
  printf("Next Prime Number is %d",x);
  return 0;
  
}

// Q4. WAP to calculate HCF of two numbers.  //

int q4()
{
  int x,y,i,j,HCF;
  printf("enter two values\n");
  scanf("%d %d",&x,&y);
  HCF=1;
  for ( i=2; (i<x || i<y) ;i++)
  {
    for (j=2; x%i == 0 && y%i == 0; j++)
    {
      x=x/i;
      y=y/i;
      HCF=HCF*i;
    }
  }
  
  printf("HCF is %d",HCF);
  return 0;

}

/*int main()
{
  int i,x;
  printf("enter a number: ");
  scanf("%d",&x);

  for (x++; ;x++)
  {
    for ( i = 2; i <= x-1; i++)
        if(x%i==0)
        break;


    if(i==x)
    {
      printf("%d",x);
      break;
    }
    
  }

  return 0;
  
}
*/

// correct code for HCF //

int q5()
{
  int x,y,i,HCF;
  printf("enter two values\n");
  scanf("%d %d",&x,&y);
  HCF=1;
  for ( i=2; i<=x || i<=y ;i++)
  {
    while ( x%i == 0 && y%i == 0)
    {
      x=x/i;
      y=y/i;
      HCF=HCF*i;
    }
  }
  
  printf("HCF is %d",HCF);
  return 0;

}

// Q5. WAP to check whether two given numbers are co-prime number or not. //

int main()
{
  int x,y,i,HCF;
  printf("enter two values\n");
  scanf("%d %d",&x,&y);
  HCF=1;
  for ( i=2; i<=x || i<=y ;i++)
  {
    while ( x%i == 0 && y%i == 0)
    {
      x=x/i;
      y=y/i;
      HCF=HCF*i;
    }
  }
  
  if(HCF==1)
  printf("Number is Co-Prime");
  else
  printf("Number is not Co-Prime");

  return 0;

}


int q7()  // count total number of prime numbers under n and print prime numbers under n //
{
    int i,j,n,c=0;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0 && i!=j)
            break;
            if(i==j)
            {
                printf("%d ",i);
                c++;
            }    
        }
    }
    printf("\n");
    printf("Total number of Prime Numbers under %d is %d",n,c);
}