#include<stdio.h>
int factorial(int);
int q1()
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    printf("%d",factorial(n));
    return 0;
}
int factorial(int n)
{
    int f=1;
    while (n)
    {
        f=f*n;
        n--;
    }
    return f;
}


int q23()
{
    int n,r,c=1,d=1,e=1;
    printf("enter a number of items\n");
    scanf("%d",&n);
    printf("enter number of selected items\n");
    scanf("%d",&r);
    int nr=n-r;
    while (n||r||nr)
    {
        c=c*n;
        n--;
        if(r>0)
        {
            d=d*r;
            r--;
        }
        if(nr>0)
        {
            e=e*nr;
            nr--;
        }
    }

    printf("%d",c/(d*e));
    return 0;
}


int check(int,int);
int check2(int,int);
int q4()
{
    int n,d,result;
    printf("enter a number\n");
    scanf("%d",&n);
    printf("enter a digit\n");
    scanf("%d",&d);
    printf("%d",check(n,d));
    /*while (n)
    {
        c=n%10;
        if(c==d)
        break;
        n=n/10;
    }

    if(c==d)
    printf("Yes, the digit exist in a number\n");
    else
    printf("No, the digit doesnot exist in a number\n");*/
    
    return 0;
}

int check(int n,int d)
{
    int c;
    while(n)
    {
        c=n%10;
        n=n/10;
        if(c==d)
        break;
    }
    return c==d?printf("yes, number exist\n"):printf("no, number doesnot exist\n");
}

int check2(int n,int d)
{
    while(n)
    {
        
        if(n%10==d)
        return 1;
        n/=10;
    }
    return 0;
}

int q5()
{
    int n,i,p;
    printf("enter a number\n");
    scanf("%d",&n);
    int m=n;
    for(i=2;n>1;i++)
    {
        for(p=2;i>=p;p++)
        {
            if(i%p==0 && i!=p)
            break;
            while (n%i==0)
            {
                n=n/i;
                printf("%d ",i);
            }
            
        }
    }

    if(m==1)
    printf("1 is neither prime nor composite\n");

    return 0;
}

int is_prime(int);
int next_prime(int);
void print_all_prime_factors(int);  // function declaration
int q5th()
{
    /*printf("%d",printf("hello world"));
    printf("%c",'hello world');
    printf("%d"hello world);
    printf("%d",'hello world');*/
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    print_all_prime_factors(n); // function call by passing argument(value)
}

void print_all_prime_factors(int n)
{
    int i=2;
    while(n>1)
    {
        while(n%i==0)
        {
            printf("%d ",i);
            n/=i;
        }

        i=next_prime(i);   
    }
}

int next_prime(int num)
{
    while(!is_prime(++num));
    return num;
}

int is_prime(int n)
{
    for(int i=2;n>=i;i++)
    {
        if(n%i==0 && n==i)
        return n;
    }
}

int qmain()
{
    int x,i;
    printf("enter a number\n");
    scanf("%d",&x);
    while(++x)
    {
        for(i=2; i<x; i++)
        {
            if(x%i==0 && x!=i)
            break;
        }
        if(x==i)
        break;
    }
    printf("Next Prime number is %d",x);
    return 0;
}

int qtmain()
{
    int x,i;
    printf("enter a number\n");
    scanf("%d",&x);
    for(i=2; i<=x; i++)
    {
        if(x%i==0)
        break;
    }
    if(x!=i || x<1)
    printf("Not Prime\n");
    else
    printf("Prime\n");
    return 0;
}

int two_numbers_between_main()
{
    int x,y,g,s;
    printf("enter two numbers\n");
    scanf("%d %d",&x,&y);
    s=x<y?x:y;
    g=y>x?y:x;
    while(s<g)
    {
        int i;
        s++;
        for(i=2; i<s ; i++)
        {
            if(s%i==0)
            break;
        }
        if(s==i)
        printf("%d ",s);
    }

    return 0;
}

int fibo_main()
{
    int n,f,P=-1,N=1;
    printf("enter a number\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        f=P+N;
        P=N;
        N=f;
        if(f==n || f>n)
        break;
        /*printf("%d ",f);*/   // print first n terms of fibonacci series 
    }
    if(f==n)
    printf("Yes, it is a part of Fibonacci Series\n");
    else
    printf("No, it is not a part of Fibonacci Series\n");
    /*printf("%dth term is %d\n",n,f);*/   // print nth term of fibonacci series 
}

int arm_main()
{
    int x,y,S,p=1,i,c,d;
    printf("enter a number\n");
    scanf("%d",&x);
        y=x;
        S=0;
        d=0;
        c=0;
        p=1;
        while(x)
        {
            x=x/10;
            c++;
        }
        x=y;
        while (y)
        {
            d=y%10;
            y=y/10;
            p=1;
            for(i=1; i<=c ; i++)
            {
                p=p*d;
            }
            S=S+p;
        }
        if(S==x)
        printf("yes\n");
        else
        printf("NO\n");

    return 0;
}

int arm_under_main()
{
    int n,x,y,S,p,i,c,d;
    printf("enter a number\n");
    scanf("%d",&n);
    for(x=1;x<=1000;x++)
    {
        y=x;
        S=0;
        d=0;
        c=0;
        p=1;
        while(x)
        {
            x=x/10;
            c++;
        }
        x=y;
        while(y)
        {
            d=y%10;
            y=y/10;
            p=1;
            for(i=1; i<=c ; i++)
            {
                p=p*d;
            }
            S=S+p;
        }
        if(S==x)
        printf("%d ",S);
    }

    return 0;
}

int main()
{
    int n,x=0,y,S,p,i,c,d,j;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;)
    {
        y=x;
        S=0;
        d=0;
        c=0;
        p=1;
        while(x)
        {
            x=x/10;
            c++;
        }
        x=y;
        while(y)
        {
            d=y%10;
            y=y/10;
            p=1;
            for(j=1; j<=c ; j++)
            {
                p=p*d;
            }
            S=S+p;
        }
        if(S==x)
        {
            printf("%d ",S);
            i++;
        }
        x++;
    }

    return 0;
}