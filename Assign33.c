#include<stdio.h>
int q1()
{
    int i,j,c[3][3],a[3][3],b[3][3];
    printf("Enter 1st Matrix elements\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    }

    printf("Enter 2nd Matrix elements\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&b[i][j]);
    }

    printf("Sum of both Matrix are\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j] + b[i][j];
            //printf("%d ",c[i][j]);
        }
        //printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
          printf("%d ",c[i][j]);
        printf("\n");  
    }

    return 0;
}

int q2()
{
    int i,j,k,a[3][3],b[3][3],c[3][3];
    printf("Enter 9 elements of first Matrix\n");
    for(i=0;i<3;i++)
     for(j=0;j<3;j++)
      scanf("%d",&a[i][j]);

    printf("Enter 9 elements of second Matrix\n");  
    for(i=0;i<3;i++)
     for(j=0;j<3;j++)
      scanf("%d",&b[i][j]);

    int sum=0;
    printf("Matrix Multiplication of both Matrix is\n");
    
    i=0;
    k=0;

    while(i<3)
    {
        for(j=0;j<3;j++)
        {
            sum=a[i][j]*b[j][k] + sum;
        }
        printf("%d ",sum);
        c[i][k]=sum;

        if(k==2)
        {
            i++;
            k=0;
            printf("\n");
        }
        else
        {
            k++;
        }
        sum=0;
    }

    printf("Calculated Matrix\n");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
      
    return 0;  
        
}

/*int q3()
{
    //int x,y,temp=0;
    //printf("enter Dimension of the Matrix\n");
   //scanf("%d%d",&x,&y);
    int i,j,k,temp,A[3][3];
    //printf("Enter the %d elements of the Matrix\n",x*y);
    
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&A[i][j]);

    for(i=0;j=1,k=1;k<=3;k++)
    {

        temp=A[i][j];
        A[i][j]=A[j][i];
        A[j][i]=temp;
        if(j-i==1)
            j++;
        else
            i++; 
    }        
    
    /*for(i=0;i<y;i++)
    {    for(j=0;j<x;j++)
           //B[j][i]=A[i][j]; // iske liye bhi sahi kaam karega//
           A[i][j]=A[j][i];     // because of same Array //
        // isme value overwrite hojaegi//
        // ye code A' m value change karne ke liye sahi nhi hi //
        // isko normal print karwa sakte hai tab sahi hai //
           //printf("%d ",A[j][i]);
        //printf("\n");   
    }*/
    
    /*for(i=0;i<y;i++)
    {
        for(j=0;j<x;j++)
            printf("%d ",A[i][j]);
        printf("\n");    
    }*/
    /*for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",B[i][j]);
        printf("\n");
    }*/
    
    /*for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
      
    return 0;   
}*/

void display_score_board(int A[][4])
{
    int i,j;
    printf("\n----[Score-Board]----\n");
    printf("\n");
    //printf("     P1   P2   P3   P4\n");
    
    for(i=0;i<4;i++)
    {
        printf("P%d ",i+1);
        for(j=0;j<4;j++)
            printf("  %d  ",A[i][j]);
        printf("\n");    
    }

}

void update_score_board(int p1,int p2,int A[][4])
{
    int score1,score2;
    printf("Enter Match Score\n");
    scanf("%d%d",&score1,&score2);
    A[p1-1][p2-1]=score1;
    A[p2-1][p1-1]=score2;
    
}

int return_score(int player,int A[][4])
{
    int i,j,sum=0;
    for(i=player-1;i<=player-1;i++)
    {
        for(j=0;j<=3;j++)
        sum=sum + A[i][j];
    }
    return sum;
}

int max_score(int size,int b[])
{
    int i, largest=b[0], player=0;
    for(i=0;i<size;i++)
    {
        largest = largest > b[i] ? largest : b[i];
        if(largest==b[i])
        player=i+1;
    }

    return player;        
}

int return_rank(int size,int b[])
{
    int i, largest=b[0], player=0;
    for(i=0;i<size;i++)
    {
        largest = largest > b[i] ? largest : b[i];
        if(largest==b[i])
        player=i+1;
    }

    b[player-1]=0;

    /*temp=b[player-1];  // swapping use nhi karenge
    b[player-1]=b[i-1];  kyuki last element ka index
    b[i-1]=temp;*/ // repeat ho rha hai, means same player ki rank 2 baar aaegi.  //

    return player;        
}

void winner(int total_players,int A[][4])
{
    int i, j, sum, winner, B[total_players];
    for( i=0 ; i<=total_players-1 ; i++ )
    {
        sum=0;
        for( j=0 ; j<=total_players-1 ; j++ )
        {
            sum = sum + A[i][j];
        }
        B[i]=sum;    
    }
    winner=max_score(i,B);
    printf("winner of the tournament is player %d\n",winner);
    
}

void rank(int total_players,int A[][4])
{
    int i,j,r,b[total_players],sum;
    for(i=1;i<total_players;i++)
    {
        sum=0;
        for(j=0;j<total_players;j++)
        {
            sum=sum+A[i][j];
        }
        b[i]=sum;
    }

    for(i=1;i<=4;i++)
    {
        int rank=return_rank(total_players,b); 
        printf("%d rank of player %d\n",i,rank);
        total_players--;
    }
}

int main()
{
    int A[4][4]={0},matches=6;
    int a=1,b=1,c=1,d=1,e=1,f=1;
    int total_players=4;
    while(matches)
    {

    printf("\nEnter the players\n");
    int p1,p2,valid=1;
    scanf("%d%d",&p1,&p2);
    if(p1==1 && p2==2 || p2==1 && p1==2)
    {
        if(a!=0)
        {
            update_score_board(p1,p2,A);
            a--;
            valid--;
        }
        else
        printf("Already Played\n");
    }

    if(p1==1 && p2==3 || p2==1 && p1==3)
    {
        if(b!=0)
        {
            update_score_board(p1,p2,A);
            b--;
            valid--;
        }
        else
        printf("Already Played\n");

    }

    if(p1==1 && p2==4 || p2==1 && p1==4)
    {
        if(c!=0)
        {
            update_score_board(p1,p2,A);
            c--;
            valid--;
        }
        else
        printf("Already Played\n");
    }

    if(p1==2 && p2==3 || p2==2 && p1==3)
    {
        if(d!=0)
        {
            update_score_board(p1,p2,A);
            d--;
            valid--;
        }
        else
        printf("Already Played\n");

    }

    if(p1==2 && p2==4 || p2==2 && p1==4)
    {
        if(e!=0)
        {
            update_score_board(p1,p2,A);
            e--;
            valid--;
        }
        else
        printf("Already Played\n");
    }

    if(p1==3 && p2==4 || p2==3 && p1==4)
    {
        if(f!=0)
        {
            update_score_board(p1,p2,A);
            f--;
            valid--;
        }
        else
        printf("Already Played\n");
    }

    if(valid==0)
    {
        display_score_board(A);
        matches--;
    }
    else
    {
        printf("Already Happened the Match,Enter different players\n");
    }

    }

    int player;
    printf("Enter the Specific Player to know Score\n");
    scanf("%d",&player);

    int score=return_score(player,A);
    printf("Total Score of %d player is %d\n",player,score);

    int option;
    printf("If you want to know the winner of the Tournament\n");
    printf("Then Press 1 if not then 0\n");
    scanf("%d",&option);
    if(option)
    winner(total_players,A);
    else
    printf("Tournament is Over\n");

    rank(total_players,A);

    printf("Program is Over, Start New Tournament\n");

    return 0;        
}         

/*for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            scanf("%d",&A[i][j]);
    
    printf("P1 P2 p3 P4\n");*/