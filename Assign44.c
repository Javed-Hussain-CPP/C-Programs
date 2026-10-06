#include<stdio.h>
#include<string.h>

struct Employee         // q1. define Employee Data Type //
{
    int id;
    char name[30];
    float salary;
};

struct Employee input_employee() // takes nothing //
{                                // returns something function //
    struct Employee b2;          // q2. function to take input //
    printf("Enter Employee Data\n"); // from the user //
    scanf("%d",&b2.id);
    fflush(stdin);
    fgets(b2.name,30,stdin);
    b2.name[strlen(b2.name)-1]='\0';
    scanf("%f",&b2.salary);

    return b2;
}

//q3. function to display employee data //

void display_Employee_Data(struct Employee b3)
{
    // Takes Something Returns Nothing //
    printf("%d %s %f",b3.id,b3.name,b3.salary);
}

int q23()
{
    // function call to take input from the user //
    struct Employee b1=input_employee(); // without passing variable //
    
    display_Employee_Data(b1); // by passing variable //

    return 0;
}

// q4. function to find highest salary employee //

void input_employee_array(struct Employee emp[],int i)
{                                 
    scanf("%d",&emp[i].id);
    fflush(stdin);
    fgets(emp[i].name,30,stdin);
    emp[i].name[strlen(emp[i].name)-1]='\0';
    scanf("%f",&emp[i].salary);
}

int Highest_Salary(struct Employee emp[],int size)
{
    int highest,Max=emp[0].salary;
    for(int i=0; i<size; i++)
    {
        if(Max<emp[i].salary)
        {
            Max=emp[i].salary;
            highest=i;
        }
    }
    return highest;
}

void sort_Employee_Salary(struct Employee emp[],int size)
{
    char str[30];
    for(int r=1; r<size; r++)
    {
        for(int i=0; i<size-r; i++)
        {
            if(emp[i].salary<emp[i+1].salary)
            {
                strcpy(str,emp[i].name);
                strcpy(emp[i].name,emp[i+1].name);
                strcpy(emp[i+1].name,str);

                int temp=emp[i].salary;
                emp[i].salary=emp[i+1].salary;
                emp[i+1].salary=temp;
            }
        }
    }
}

void sort_Employee_Name(struct Employee E[],int size)
{
    struct Employee temp;
    for(int r=1; r<size; r++)
    {
        for(int i=0; i<size-r; i++)
        {
            if(strcmp(E[i].name,E[i+1].name)!=-1)
            {
                temp=E[i];
                E[i]=E[i+1];
                E[i+1]=temp;
            }
        }
    }
}

int main()
{
    struct Employee emp[5];
    printf("Enter Employee Data\n");
    for(int i=0; i<5; i++)
    input_employee_array(emp,i);
    //int Highest=Highest_Salary(emp,5);
    //printf("%s has highest salary which is %f",emp[Highest].name,emp[Highest].salary);
    //sort_Employee_Salary(emp,5);
    sort_Employee_Name(emp,5);
    for(int i=0;i<5;i++)
    {
        printf("%d Employee Details\n%d %s %.2f\n",i+1,emp[i].id,emp[i].name,emp[i].salary);
    }
}



// Find Max without Sorting Algorithm //

int q1()
{
    int arr[]={10,20,15,5,8};
    int found,max;  // found ko initialize nhi kara kyuki negative numbers ko handle karna hai //
    
    for(int i=0; i<2; i++)
    {
        max=arr[0];
        for(int j=0; j<5; j++)            // youyobe 10 LPA question // find max value without sorting //
        {
            if(arr[j]!=found)
            max=max<arr[j]?arr[j]:max;
        }
        found=max;
    }
    printf("Second Largest number is %d",max);
}