#include<stdio.h>
/*int isEvent(int n)
{
    return n%2==0;
}
void Num(int n)
{
    int i=1;
    while(i<=n)
    {
        printf("%d ",i);
        i++;
    }
}
int isEven(int n)
{
    if(n%2==0)
    return 1;
    else
    return 0;
}
int main()
{
    int n,result;
    printf("enter a number\n");
    scanf("%d",&n);
    result=isEvent(n);
    printf("%d",result);
    
    return 0;

}*/
float circle(int);
float simpleinterest(int,float,int);
int check(int);
int q1()
{
    int r,P,T,n;
    float R;
    printf("Enter the value of radius\n");
   scanf("%d",&r);
  //  printf("Enter the principle, rate & time\n");
  //  scanf("%d%f%d",&P,&R,&T);
   //   printf("Enter the number\n");
    //  scanf("%d",&n);
  //  float area;
   // float si;
   // area=circle(r);
  //  si=simpleinterest(P,R,T);
  /*  if(check(n))
    printf("even\n");
    else
    printf("odd\n");*/

}
float circle(int r)
{
    //int a;// wrong answer of a batch student
    //a=3.14*r*r;// wrong of a batch student
    return 3.14*r*r;
}
float simpleinterest(int p, float r, int t)
{
    return p*r*t/100;
}
int check(int n)
{
    return n%2==0;
}
void printN(int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
}
/*int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    printN(n);
    printf("%d",printN(n));
}*/

int HCF(int,int);
int min(int,int);

int main()
{
    int x,y,L;
    printf("enter two numbers\n");
    scanf("%d%d",&x,&y);
    L=HCF(x,y); // function calling //
    printf("HCF is %d",L);
}

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
}