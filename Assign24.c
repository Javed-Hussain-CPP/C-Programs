#include<stdio.h>

int fact(int);
int combi(int,int);
void print_pascal(int);
void print_Nth_Pascal(int);

int q1()
{
    int n;
    //printf("enter the no. of items and r selected at a time\n");
    //scanf("%d%d",&n,&r);
   //f=fact(n);
   //printf("%d",f);
   //c=combi(n,r);
   //printf("%d",c);
   //printf("enter no. of lines\n");
   //scanf("%d",&n);
   print_Nth_Pascal(7);

}

int fact(int n)
{
    int f=1;
    while(n)
    {
        f=n*f;
        n--;
    }
    return f;
}

int combi(int n,int r)
{
    return fact(n)/fact(n-r)/fact(r);
}

void print_pascal(int lines)
{
   int i,j,status,n,r;
   for(i=1;i<=lines;i++)
   {
    status=1;
    n=i-1;
    r=0;
       for(j=1;j<=2*lines-1;j++)
       {
            if(j>=lines+1-i && j<=lines-1+i)
            {
                if(status--)
                printf("%3d",combi(n,r++));
                else
                printf("   ");
            }
            else
            printf("   ");
            status=status*status;
        }
        printf("\n");
    }
}

void print_Nth_Pascal(int line)
{
    int n=line-1,r=0;
    while(r<=n)
    {
        printf("%d ",combi(n,r++));
    }
}

/*void print_pasca(int l)
{
   int i,j,x,n,r;
   for(i=0;i<l;i++)
   {
    x=1;
    n=i;
    r=0;
      for(j=0;j<2*l-1;j++)
      {
            if(j>=l+1-i && j<=l-1+i)
            {
                if(x--)
                {
                    printf("%d",combi(n,r));
                }
                else
                printf(" ");
                r++;
            }
            else
            printf(" ");
            x=x*x;
      }
   }
}*/


void print_prime_btw_two_num(int x,int y) // question --- 1
{
    while(x<y)
    {
        printf("%d",next_prime(x));
    }
}


int next_prime(int next)
{
    while(is_prime(++next));
    return next;
}

int is_prime(int num)
{
    for(int i=2; i<=num; i++)
    {
        if(num%i==0)
        return 0;
    }
}


int main()  //  main function of question --- 1 //
{
    int x,y;
    printf("enter two numbers\n");
    scanf("%d%d",&x,&y);
    /*while (++x<y)
    {
        for (int i = 2; i <= x; i++)
        {
            if(x%i==0 && i!=x)
            break;
            if(i==x)
            printf("%d ",x);
        }
        
    }*/
   print_prime_btw_two_num(x,y);



    return 0;  
}