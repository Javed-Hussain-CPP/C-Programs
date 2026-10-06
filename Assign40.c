#include<stdio.h>
#include<string.h>

// question 1.

void store_strings(int r,int c,char str[][c])
{
    //printf("Enter rows\n");
    //scanf("%d",&r);
    //printf("Enter Columns\n");
    //scanf("%d",&c);
    printf("Enter the strings to the 2D char Array\n");
    getchar(); // because of r and c variable input last \n character stoarage removal
    for(int i=0;i<r;i++)
    {
        fgets(str[i],c,stdin);
        if(str[i][strlen(str[i])-1]=='\n')
        str[i][strlen(str[i])-1]='\0';
    }
    printf("\n");

    //for(int i=0;i<r;i++)
    //printf("%s\n",str[i]);
}

// question 2.

void find_a(int r,int c,char str[][c])
{
    printf("Enter the %d strings\n",r);
    getchar();
    printf("\n");
    for(int i=0;i<r;i++)
    {
        fgets(str[i],c,stdin);
        if(str[i][strlen(str[i])-1]=='\n')
        str[i][strlen(str[i])-1]='\0';
    }
    printf("\n");

    int count=0;

    for(int i=0;i<r;i++)
    {
        int c=0;
        for(int j=0;str[i][j];j++)
        {
            if(str[i][j]=='a')
            {
                count++;
                c++;
            }
        }
        printf("Total no. of 'a' in %d array is %d\n",i,c);
    }
    printf("\n");
    printf("Total no. of 'a' in 2d array is %d",count);
}

// question 2.

void find_vowels(int r,int c,char str[][c])
{
    char vowels[]="aeiou";
    printf("Enter the %d strings\n",r);
    getchar();
    printf("\n");
    for(int i=0;i<r;i++)
    {
        fgets(str[i],c,stdin);
        if(str[i][strlen(str[i])-1]=='\n')
        str[i][strlen(str[i])-1]='\0';
    }
    printf("\n");

    int count=0;

    for(int i=0;i<r;i++)
    {
        int c=0;
        for(int j=0;str[i][j];j++)
        {
            int k=0;
            while(vowels[k])
            {
                if(str[i][j]==vowels[k])
                {
                count++; // used for total no. of vowels // 
                c++;     // used for each array string vowels //
                }
                k++;
            }
        }
        printf("Total no. of vowels in %s array is %d\n",str[i],c);
    }
    printf("\n");
    printf("Total no. of vowels in 2d array is %d",count);
}

// question 3.

int total_words(char str[])
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

void sort_city_names(int rows,int columns,char str[][columns])
{
    printf("Enter the City Names to the 2D char Array\n");
    getchar();

    // store 10 city names to 2d array //

    int i,j;

    for(i=0; i<rows ;i++)
    {
        fgets(str[i],columns,stdin);
        if(str[i][strlen(str[i])-1]=='\n')
        str[i][strlen(str[i])-1]='\0';
    }
    printf("\n");

    // copy 2d array strings to 1d array //

    char string[rows*columns];
    /*for(int i=0;i<columns;i++)
    {
        string[i]=0;
    }*/

    int k=0;

    for(i=0;i<rows;i++)
    {
        for(j=0;str[i][j]!='\0';j++,k++)
        {
            string[k]=str[i][j];
        }
        string[k]=' ';
        k++;
    }
    string[k]='\0';

    int compare=0,count=total_words(string);

    k=0;
    while(count)
    {
        i=compare;
        for(int j=1; string[j] ;j++)
        {
            if(string[j-1]==' ' && string[j]!='0')
            {
                if(string[i]<string[j])
                i;
                else
                i=j;
            }
        }
        int l=0,index=i;

        while(string[i] && string[i]!=' ')
        {
            str[k][l]=string[i];
            l++;
            i++;
        }
        str[k][l]='\0';
        k++;
        string[index]='0';
        count--;

        for(i=1; string[0]=='0' && string[i] ;i++)
        {
            if(string[i]!='0' && string[i-1]==' ')
            {
                compare=i;
            }
        }
    }
    for(int i=0; i<rows ;i++)
    {
        printf("%s\n",str[i]);
    }
}

void input_strings_to_2d_char_array()
{
    int rows,cols;

    printf("Enter column size\n");
    scanf("%d",&cols);

    char str[cols];
    getchar();

    fgets(str,cols,stdin);
    if(str[strlen(str)-1]=='\n')
    str[strlen(str)-1]='\0';

    rows=total_words(str);
    char string[rows][cols];

    int i,j,k=0;
    
    for(i=0; i<rows; i++)
    {
        for(j=0; str[k] && str[k]!=' ';j++,k++)
        {
            string[i][j]=str[k];
        }
        string[i][j]='\0';
        k++;
    }
    for(i=0; i<rows ;i++)
    {
        printf("%s\n",string[i]);
    }
}

void remove_duplicate(int cols,char str[][cols],int rows)
{
    int round,comp,k;
    for(round=1; round<=rows-1; round++)
    {
        for(comp=1; comp<=rows-round ;comp++)
        {
            for(k=0; str[round-1][k]==str[round-1 + comp][k] ;k++)
            {
                if(str[round-1][k]=='\0' && str[round-1 + comp][k]=='\0')
                str[round-1 + comp][0]='\0';
                else
                continue;
                
                if(str[round-1][k]=='\0' && str[round-1 + comp][k]=='\0')
                break;
            }
        }
    }
    for(int i=0; i<rows; i++)
    printf("%s\n",str[i]);
}

int main()
{
    int rows,cols;
    printf("Enter rows\n");
    scanf("%d",&rows);
    printf("Enter column size\n");
    scanf("%d",&cols);
    char str[rows][cols];
    //input_strings_to_2d_char_array();
    store_strings(rows,cols,str);
    //find_a(r,c,str);
    //find_vowels(r,c,str);
    //sort_city_names(r,c,str);

    remove_duplicate(cols,str,rows);
    return 0; 
}



// this below program is just for my practise //

/*int find_word(char str[],char word[])    
{
    int i=0,j,l=strlen(word);

    while(str[i])
    {
        for(j=0 ;   j<=l-1 && word[j]==str[i]   ; i++,j++);

        i++;

        if(l==j)
        return 1;
        else
        continue;
    }
    return 0;
}

int main()
{
    char str[30],word[30];
    printf("Enter the string\n");
    fgets(str,30,stdin);

    printf("Enter the word\n");
    fgets(word,30,stdin);

    if(str[strlen(str)-1]=='\n')
    str[strlen(str)-1]='\0';

    if(word[strlen(word)-1]=='\n')
    word[strlen(word)-1]='\0';

    if(find_word(str,word))
    printf("Yes,\"%s\" word is a part of the \"%s\" string\n",word,str);
    else
    printf("No,\"%s\" word is not a part of the \"%s\" string\n",word,str);
}*/