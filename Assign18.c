#include<stdio.h>
int q2()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(i==1)
                 printf("*");
            else if(i==2 && (j==2 || j==3 || j==4 || j==5 || j==6))
                 printf("*");
            else if(i==3 && (j==3 || j==4 || j==5))
                 printf("*");
            else if(i==4 && j==4)
                 printf("*");
            else
                 printf(" ");     
        }

        printf("\n");
    }

    return 0;
}

#include<stdio.h>
int q1()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(i==1)
            {
                if(j==4)
                printf("*");
                else
                printf(" ");
            }
            else if(i==2)
            {
                if(j==3 || j==4 || j==5)
                printf("*");
                else
                printf(" ");
            }
            else if(i==3)
            {
                if(j==2 || j==3 || j==4 || j==5 || j==6)
                printf("*");
                else
                printf(" ");
            }
            else if(i==4)
            {
                printf("*");
            }
        }

        printf("\n");
    }

    return 0;
}

int q11()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(i==1 && j==4)
                printf("*");
            else if(i==2 && (j==3 || j==4 || j==5))
                printf("*");
            else if(i==3 && (j==2 || j==3 || j==4 || j==5 || j==6))
                printf("*");
            else if(i==4)
                printf("*");
            else
            printf(" ");    
        }

        printf("\n");
    }

    return 0;
}

int q1st()
{
    int i,j,n;
    printf("enter a number\n");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        for(j = 1; j <= 2*n-1; j++)
        {
            if(j>=n+1-i && j<=n-1+i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}

int q2nd()
{
    int i,j,n;
    printf("enter a number\n");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        for(j = 1; j <= 2*n-1; j++)
        {
            if(j>=i && j<=2*n-i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}

// question 3 //

int q3rd()
{
    int i,j,n;
    printf("Enter number of Lines\n");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        for(j = 1; j <= 2*n-1; j++)
        {
            if (i%2!=0 && j%2==0)
            {
                if(j>=n+1-i && j<=n-1+i)
                printf("*");
            }
            else if(i%2==0 && j%2!=0)
            {
                if(j>=n+1-i && j<=n-1+i)
                printf("*");
            }

            printf(" ");
             
        }
        printf("\n");
    }
    
    return 0;
}

int q3() {
    int i,j,n;
    printf("enter the no. of lines\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n+1-i && j<=n-1+i)
            {
                if((i%2!=0 && j%2==0) || (i%2==0 && j%2!=0))
                printf("*");
                else
                printf(" ");
            }
            else
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}


int q33() {
    int i,j,x;
    //printf("enter the no. of lines\n");
    //scanf("%d",&n);
    for(i=1;i<=4;i++)
    {
        x=1;
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i)
            {
                if(x)
                printf("*");
                else
                printf(" ");
                x=1-x;
            }
            else
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}

int q4() {
    int i,j,n,x,y;
    printf("enter the no. of lines\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x=0;
        y=0;
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n+1-i && j<=n-1+i)
            {
                if(x<i)
                printf("%d",++y);
                else
                printf("%d",--y);
                x++;
            }
            else
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}

int q4th() {
    int i,j,n,k;
    printf("enter the no. of lines\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=1;
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n+1-i && j<=n-1+i)
            {
                printf("%d",k);
                j<n?k++:k--;
            }
            else
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}

int q5()
{
    int i,j,n;
    char k;
    printf("enter a number\n");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        k='A';
        for(j = 1; j <= 2*n-1; j++)
        {
            if(j>=i && j<=2*n-i)
            printf("%c",k++);
            else
            printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}

int q6()
{
    int i,j,n;
    char k;
    printf("enter a number\n");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        k='A';
        for(j = 1; j <= 2*n-1; j++)
        {
            if(j>=i && j<=2*n-i)
            {
                if(n>j) // or we can also write ((2*n-1)/2 +1)
                printf("%c",k++);
                else
                printf("%c",k--);
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}

int q6th()
{
    int i,j,n;
    char k;
    printf("enter a number\n");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        k='A';
        for(j = 1; j <= 2*n-1; j++)
        {
            if(j>=i && j<=2*n-i)
            {
                printf("%c",k);
                n>j?k++:k--;
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}


int q7() {
    int i,j,x,k,n;
    printf("enter the no. of lines\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x=1;
        k=1;
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n+1-i && j<=n-1+i)
            {
                if(x)
                {
                    printf("%d",k);
                    //j<n?k++:k--;
                }
                else
                printf(" ");
            }
            else
            {
                printf(" ");
            } 

            if(j>=n+1-i && j<=n-1+i)
            {
                if(n%2!=0)
                {
                    if((i%2!=0 && j%2!=0) && j<n)
                    k++;
                    if((j>=n && i%2!=0) && j%2!=0)
                    k--;
                    if((j<n && x==1) && i%2==0)
                    k++;
                    if((j>=n && i%2==0) && j%2!=0)
                    k--;
                    x=1-x;
                }
                if(n%2==0)
                {
                    if((i%2!=0 && j%2==0) && j<n)
                    k++;
                    if((j>=n && i%2!=0) && j%2==0)
                    k--;
                    if((j<n && x==1) && i%2==0)
                    k++;
                    if((j>=n && i%2==0) && j%2==0)
                    k--;
                    x=1-x;
                }
            }
        }
        printf("\n");
    }

    return 0;
}


int q7th() {
    int i,j,x,k,n;
    printf("enter the no. of lines\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x=1;
        k=1;
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n+1-i && j<=n-1+i)
            {
                if(x)
                {
                    printf("%d",k);
                    j<n?k++:k--;
                }
                else
                {
                    printf(" ");
                    if(j==n)
                    k--;

                }
                x=1-x;
            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }
        

    return 0;
}


int q8()
{
    int i,j,n;
    printf("enter a number\n");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        for(j = 1; j <= 2*n-1; j++)
        {
            if(j<=n+1-i || j>=n-1+i)
            printf("*");
            else
            printf(" ");

        }
        printf("\n");
    }
    
    return 0;
}

int q9()
{
    int i,j,n,x;
    printf("enter a number\n");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        x=1;
        for(j = 1; j <= 2*n-1; j++)
        {
            if(j<=n+1-i || j>=n-1+i)
            {
                printf("%d",x);
                j<n?x++:x--;
            }
            else
            {
                printf(" ");
                j<n?x++:x--;
            }

        }
        printf("\n");
    }
    
    return 0;
}

int q10()
{
    int i,j,n,x;
    printf("enter a number\n");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        x='A';
        for(j = 1; j <= 2*n-1; j++)
        {
            if(j<=n+1-i || j>=n-1+i)
            {
                printf("%c",x);
                j<n?x++:x--;
            }
            else
            {
                printf(" ");
                j<n?x++:x--;
            }

        }
        printf("\n");
    }
    
    return 0;
}

