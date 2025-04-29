#include<stdio.h>
//1) Takes Nothing, Returns Nothing
// void add(); //Function declaration
// int main()
// {
//     add(); //Function call
//     printf("\n");
//     return 0;
// }
// void add() //Function definition
// {
//     int a,b,c;
//     printf("Enter two numbers");
//     scanf("%d%d",&a,&b);
//     c=a+b;
//     printf("Sum is %d",c);
// }

//2) Take Something, Returns Nothing
// void add(int, int);
// int main()
// {
//     int x=3,y=4;
//     add(x,y); //actual arguments
//     printf("\n");
//     return 0;
// }
// void add(int a, int b) //Formal arguments
// {
//     int c;
//     c=a+b;
//     printf("Sum is %d",c);
// }

//3) Takes Nothing, Return Something
// int add();
// int main()
// {
//     int s;
//     s=add();
//     printf("Sum is %d",s);
// }
// int add()
// {
//     int a,b,c;
//     printf("Enter two numebrs");
//     scanf("%d%d",&a,&b);
//     c=a+b;
//     return c;
    
// }

//4) Take Something, Return Something

int add(int,int);
int main()
{
    int x,y,s;
    printf("Enter two numbers");
    scanf("%d%d",&x,&y);
    s=add(x,y);
    printf("Sum is %d",s);
    printf("\n");
    return 0;
}
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
