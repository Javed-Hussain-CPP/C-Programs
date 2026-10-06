// Q1. WAP which takes cp & sp from user. Now calculate and print profit or loss percentage.

#include<stdio.h>
int q1()
{
    int cp,sp;
    float profit,loss;
    printf("enter cp & sp\n");
    scanf("%d%d",&cp,&sp);
    profit=sp-cp;
    loss=cp-sp;
    if (sp>cp)
    {
        printf("profit percent is %f",profit/cp*100);
    }
    else if (cp>sp)
    {
        printf("loss percent is %f",loss/cp*100);
    }
    else
    printf("no profit & no loss");
    return 0;
    
}

// Q2. WAP to take marks of 5 subjects from the user. Now display whether the candidate passed the
//     examination or failed.

int q2()
{
    int a,b,c,d,e;
    printf("enter marks of 5 subjects\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a>=33 && b>=33 && c>=33 && d>=33 && e>=33)
    printf("student is passed");
    else
    printf("student is failed");
    return 0;
}

// Q3.  WAP to check whether a given alphabet is in uppercase or lowercase.

int q3()
{
    char ch;
    printf("enter an alphabet\n");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
    printf("alphabet is in UPPERCASE");
    else if(ch>=97 && ch<=122)
    printf("alphabet is in LOWERCASE");
    return 0;
}

// Q4. WAP to check whether a given number is divisible by 3 and 2.

int Q4()
{
    int x;
    printf("enter a number\n");
    scanf("%d",&x);
    if(x%3==0 && x%2==0)
    printf(" divisible by 3 and 2");
    else
    printf("not divisible by 3 and 2");
    return 0;
}

// Q5. WAP to check whether a given number is divisible by 7 or divisible by 3.

int q5()
{
    int x;
    printf("enter a number\n");
    scanf("%d",&x);
    if(x%7==0)
    printf(" divisible by 7");
    else if(x%3==0)
    printf("divisible by 3");
    else
    printf("not divisible by both");
    return 0;
}

int main() {
    int cp,sp;
    float p,l;
    printf("enter the cp & sp\n");
    scanf("%d %d",&cp,&sp);
    p=sp-cp;
    l=cp-sp;
    if(cp>sp)
    printf("Loss is %f",(l/cp*100));
    else
    {
        if(sp>=cp)
        printf("Profit is %f",(p/cp*100));
    }
    return 0;
}