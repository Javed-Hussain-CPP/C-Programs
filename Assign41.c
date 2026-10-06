#include<stdio.h>
#include<string.h>

int count_words(char str[])
{
    int count=1;
    for(int i=0;str[i];i++)
    {
        if(str[i]==' ')
        count++;
    }
    if(str[0]=='\n')
    return 0;
    else
    return count;
}

int get_index(char str[],int index)
{
    for(;str[index]!=' ';index--);
    return index+1;
}

void store_word(char str[],int cols,char string[][cols],int rows)
{
    for(int i=0; i<rows ; i++)
    {
        string[i][0]='\0';
    }
    int k,j=0;
    for(int i=0; str[i] ;i++)
    {
        if((str[i+1]==' ' || str[i+1]=='\0') && str[i]=='s')
        {
            int index=get_index(str,i);

            for(k=0; str[index]!=' ' && str[index] ;k++)
            {
                string[j][k]=str[index++];
            }
            string[j][k]='\0';
            j++;
        }
        else if(str[i]=='s' && i==0)
        {
            for(k=0; str[i]!=' ' && str[i] ;k++)
            {
                string[j][k]=str[i++];
            }
            string[j][k]='\0';
            j++;
        }
    }
    for(int i=0; i<rows ;i++)
    printf("[%s]\n",string[i]);
}

int q1()
{
    int cols;
    printf("Enter the size of 1d char array\n");
    scanf("%d",&cols);
    char str[cols];

    getchar();

    fgets(str,cols,stdin);
    if(str[strlen(str)-1]=='\n')
    str[strlen(str)-1]='\0';

    int rows=count_words(str);
    char string[rows][cols];
    store_word(str,cols,string,rows);
    return 0;
}

// question. 2 //

void store_2d_char_array_to_1d_char_array(char temp[],int cols,char str[][cols],int rows)
{
    int j=0;
    for(int i=0; i<rows ;i++)
    {
        for(int k=0; str[i][k] ;k++,j++)
        {
            temp[j]=str[i][k];
        }
    }
    temp[j]='\0';
}

void sort(char str[])
{
    int temp=0;
    for(int r=1; r<=strlen(str)-1 ;r++)
    {
        for(int j=r; str[j] ;j++)
        {
            if(str[r-1]>str[j])
            {
                temp=str[r-1];
                str[r-1]=str[j];
                str[j]=temp;
            }
        }
    }
}

int count_each_character(char temp[],int index)
{
    int count=1;
    for(;temp[index];index++)
    {
        if(temp[index]==temp[index+1])
        count++;
        else
        return count;
    }
}

int most_repeated_character(int cols,char str[][cols],int rows)
{
    char temp[rows*cols];
    store_2d_char_array_to_1d_char_array(temp,cols,str,rows);
    sort(temp);

    char ch=0;
    int max_count=1,count=0;
    for(int i=0; temp[i] ;i++)
    {
        max_count=count_each_character(temp,i);
        if(count<max_count)
        {
            count=max_count;
            ch=temp[i];
        }
    }
    return ch;
}

int q2()
{
    int rows,cols;
    printf("Enter the rows of 2d char array\n");
    scanf("%d",&rows);
    printf("Enter the cols of 2d char array\n");
    scanf("%d",&cols);
    char str[rows][cols];
    getchar();
    printf("Enter the Strings in 2d Char array\n");
    for(int i=0; i<rows ;i++)
    {
        fgets(str[i],cols,stdin);
        if(str[i][strlen(str[i])-1]=='\n')
        str[i][strlen(str[i])-1]='\0';
    }

    char ch=most_repeated_character(cols,str,rows);
    printf("Most Repeated Character is %c",ch);

    return 0;
}

// question 3 //

void sort_2d_array(char str[][30],int rows)
{
    int temp=0,k;
    for(int i=1; i<=rows; i++)
    {
        for(int r=1; r<=strlen(str[i-1])-1 ;r++)
        {
            for(k=r; str[i-1][k] ;k++)
            {
                if(str[i-1][r-1]>str[i-1][k])
                {
                    temp=str[i-1][k];
                    str[i-1][k]=str[i-1][r-1];
                    str[i-1][r-1]=temp;
                }
            }
        }   
    }
}

int count_total_words(char str[][30],int rows)
{
    int count=1;
    for(int i=0; str[rows-1][i]; i++)
    {
        if(str[rows-1][i]==' ')
        count++;
    }
    return count;
}

//int temp=str[rows-1][j];
  //                  str[rows-1][j]=str[rows-1][j+1];
    //                str[rows-1][j+1]=temp;

void trim_spaces(char str[][30],int size)
{
    int r,i,j;
    for(r=0; r<size ; r++)
    {
        int count=count_total_words(str,r+1);
        if(count==1)
        continue;
        else  // trim the spaces of more than two words //
        {
            for( i=1; str[r][i]; i++)
            {
                if(str[r][i]==' ')
                {
                    for(j=i; str[r][j]; j++)
                    {
                        if(str[r][j]!=' ')
                        {
                            int temp=str[r][i];
                            str[r][i]=str[r][j];
                            str[r][j]=temp;
                        }
                        if(str[r][i]!=' ')
                        break;
                    }
                    if(str[r][j+1]=='\0')
                    {
                        str[r][i+1]='\0';
                        str[r][j+1]=' ';
                    }
                }
            }
        }
    }
}

int check_anagram_or_not(char str[][30],int rows)
{
    trim_spaces(str,rows);
    sort_2d_array(str,rows);
    int i,k;
    for(i=0,k=0; str[i][k]; k++)
    {
        if(str[i][k]==str[i+1][k])
        continue;
        else
        return 0;
    }
    return 1;
}

int q3()
{
    char str[2][30];
    for(int i=0; i<2; i++)
    {
        fgets(str[i],30,stdin);
        if(str[i][strlen(str[i])-1]=='\n')
        str[i][strlen(str[i])-1]='\0';
    }
    if(check_anagram_or_not(str,2))
    printf("Given Pairs is Anagram\n");
    else
    printf("Given pairs is not Aagram\n");
}

void store_words_which_start_from_A_letter_to_2d_char_array(char str[],char string[][50])
{
    int rows=-1;
    for(int i=0; str[i] ; i++)
    {
        if(str[i]=='a' && (str[i-1]==' ' || i==0))
        {
            rows++;
            int col=0;
            for(int cols=i; str[cols]!=' ' && str[cols]; cols++,col++)
            {
                string[rows][col]=str[cols];
            }
            string[rows][col]='\0';
        }
    }
}

int q4()
{
    char str[50];
    printf("Enter the string in 1d Char Array\n");
    fgets(str,50,stdin);
    if(str[strlen(str)-1]=='\n')
    str[strlen(str)-1]='\0';

    int count=count_words(str);
    char string[count][50];
    for(int i=0; i<count; i++)
    {
        string[i][0]='\0';       // for memset function alternative //
    }
    store_words_which_start_from_A_letter_to_2d_char_array(str,string);
    for(int i=0; i<count; i++)
    {
        printf("[%s]\n",string[i]);
    }
    return 0;
}

int find_gmail_ID(char str[][30])
{
    char string[]="gmail.com";
    int count=0;
    for(int i=0; i<10; i++)
    { 
        for(int j=0; str[i][j]; j++)
        {
            if(str[i][j]=='g' && str[i][j-1]=='@')
            {
                int k=j,l=0;
                for(k=j; str[i][k]==string[l]; k++,l++);

                if(string[l]=='\0')
                count++;
            }
        }
    }
    printf("\n");
    return count;
}

int main()
{
    char str[10][30];
    for(int i=0; i<10; i++)
    {
        fgets(str[i],30,stdin);
        if(str[i][strlen(str[i])-1]=='\n')
        str[i][strlen(str[i])-1]='\0';
    }
    int id=find_gmail_ID(str);
    printf("Total no. of Gmail ID's are %d",id);
    return 0;
}

//                               Assignment - 40                         //

// question 3. Sort City Names stored in a 1d char array without using 2d char array

void sort_words(char str[])
{
    char string[100]={0};
    int compare=0,i,k=0,count=count_words(str);

    while(count)
    {
        i=compare;
        for(int j=1; str[j] ;j++)
        {
            //if(count==1)
            //break;
            if(str[j-1]==' ' && str[j]!='0')
            {
                if(str[i]<str[j])
                i;
                else
                i=j;
            }
        }
        int index=i;

        while(str[i] && str[i]!=' ')
        {
            string[k]=str[i];
            k++;
            i++;
        }
        string[k]=' ';
        k++;
        str[index]='0';
        count--;

        for(i=1; str[0]=='0' && str[i] ;i++)
        {
            if(str[i]!='0' && str[i-1]==' ')
            {
                compare=i;
            }
        }
    }
    string[k]='\0';
    printf("%s",string);
}



int q11()
{
    char str_1[50];
    printf("Enter the String\n");
    fgets(str_1,50,stdin);
    if(str_1[strlen(str_1)-1]=='\n')
    str_1[strlen(str_1)-1]='\0';

    sort_words(str_1);
}




// just for practise 2d char arrays concept //

/*int q1()
{
    char str[10]={'w','s','t'};
    for(int i=0;str[i]!='\0';i++)
    {
        printf(" String is %c\n",str[i]);
    }
} 

int q2()
{
    int arr[2][4]={{1,2},{3,4}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        printf("%d",arr[i][j]);
        printf("\n");
    }
}

int q3()
{
    char str[2][4]={{'w','s'},{'t','w'}};
    for(int i=0;i<2;i++)
    {
        printf(" String is %s\n",str[i]);
    }
} 

int main()
{
    char str[4][10];
    for(int i=0;i<4;i++)
    {
        fgets(str[i],10,stdin);
        if(str[i][strlen(str[i])-1]=='\n')
        str[i][strlen(str[i])-1]='\0';
    }
    for(int i=0;str[i][strlen(str[i]-1)];i++) // only prints first array because of '\0' character
    printf("%s\n",str[i]);
}*/ 