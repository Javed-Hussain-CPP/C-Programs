#include<stdio.h>
int LCM(int,int); // function declaration //
int HCF(int,int);
int min(int,int);
int prime_check(int);
int next_prime(int);
int print_prime(int);
void print_prime_between_two_numbers(int,int);
void print_fib_num(int);
void print_arm_strong_num(int,int);
void print_pascal(int);
int fact(int);

int main()
{
    int x,y;
    printf("enter two numbers\n");
    scanf("%d%d",&x,&y);
    /*L=HCF(x,y); // function calling //
    printf("HCF is %d",L);
    if(prime_check(x))
    printf("Prime\n");
    else
    printf("Not prime\n");*/
    //p=next_prime(x);
    //printf("%d",next_prime(x));
    //print_prime(x);
    //x=x<y?x:y;
    //y=y>x?y:x;
    //print_prime_between_two_numbers(x,y);
    //print_fib_num(n);
    print_arm_strong_num(x,y);
}

int LCM(int x,int y)  // funtion definition //
{
    for(int L=x>y?x:y; L<=x*y ; L++)
    {
        if(L%x==0 && L%y==0)
        return L;
    }
} // LCM Function //

int min(int x,int y)
{
    int H=x<y?x:y;
    return H;
}

int HCF(int x,int y)
{
    int H=min(x,y);
    while (H>1)
    {
        if(x%H==0 && y%H==0)
        return H;
        else
        H--;
    }
    return 1;
} // HCF Function //

int prime_check(int x)
{
    int i=2;
    for(i=2; i<x; i++)
    {
        if(x%i==0)
        return 0;
    }
    if(x==i)
    return 1;
    else
    return 0;
}

int next_prime(int num)
{
    while(!prime_check(++num));
    return num;
}

int print_prime(int x)
{
    int p=2;
    for(int i=1 ;i<=x; i++)
    {
        printf("%d ",p);
        p=next_prime(p);
    }
}

//           Assignment-24           //         

void print_prime_between_two_numbers(int s,int l)
{
    while(s<l)
    {
        s=next_prime(s);
        if(s<l)
        printf("%d ",s);
    }
}

//--------------------------------------------------------//

int next_fib_num(int P,int N,int n)
{
    int f;
    for (int i = 0; i <= n ; i++)  // i==1 bhi use kar sakte hai  //
    {
        f=P+N;
        P=N;
        N=f;
    }
    return f;
    
}

void print_fib_num(int n)
{
    int P=-1,N=1;
    for (int i = 1; i <= n; i++)
    {
        int f=next_fib_num(P,N,i);
        printf("%d ",f);   
    }

}

//--------------------------------------------------------//


int count_digits(int x)
{
    int c=0;
    while(x)
    {
        x=x/10;
        c++;
    }
    return c;
}

int sum_of_total_digits(int x,int c,int S)
{
    while (x)
    {
        int count=c;
        int D=1;
        int d=x%10;
        x=x/10;
        while (count)
        {
            D=D*d;
            count--;
        }
        S=S+D;
    }

    return S;
}

void print_arm_strong_num(int x,int y)
{
    while (x<y)
    {
        x++;
        int S=0;
        int c=count_digits(x);
        S=sum_of_total_digits(x,c,S);
        if(S==x)
        printf("%d ",x);
    } 
}



/*int main()
{
    int x,y,m,count,S,d,c,D;
    printf("enter two numbers\n");
    scanf("%d%d",&x,&y);
    while (x<y)
    {
        D=1;
        d=0;
        S=0;
        x++;
        m=x;
        c=0;
        while (m)
        {
            m=m/10;
            c++;
        }
        m=x;
        while (x)
        {
            count=c;
            d=x%10;
            x=x/10;
            while (count)
            {
                D=D*d;
                count--;
            }
            S=S+D;
            D=1;
        }
        x=m;
        if(x==S)
        printf("%d ",x);  
    }

    return 0;   
}*/


int main()
{
    int L;
    printf("enter no. of lines\n");
    scanf("%d",L);
    print_pascal(L);
    return 0;

}

int fact(int x)
{
   
}

void print_pasca(int n)
{
   int i,j,x;
   for(i=1;i<=n;i++)
   {
    x=1;
      for(j=1,j<=2*n-1;j++)
      {
            if(j>=n+1-i && j<=n-1+i)
            {
                if(x--)
                {
                    printf("%d",fact(n))
                }
                else
                printf(" ");
            }
            else
            printf(" ");
            x=x*x;
      }
   }
}