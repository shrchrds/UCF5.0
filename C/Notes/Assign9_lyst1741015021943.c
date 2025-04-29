#include<stdio.h>
//Q1
int main()
{
    float cp,sp,per;

    printf("Enter CP and SP of a product: ");
    scanf("%f%f",&cp,&sp);
    if(cp<sp)
    {
        //profit
        per=(sp-cp)/cp*100;
        printf("Profit percentage: %0.2f%%",per);
    }
    else
    {
        //Loss
        per=(cp-sp)/cp*100;
        printf("Loss percentage: %0.2f%%",per);
    }

    printf("\n");
    return 0;
}

//Q2
int main()
{
    int m1,m2,m3,m4,m5;

    printf("Enter marks of 5 subjects: ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    if(m1>=33 && m2>=33 && m3>=33 && m4>=33 && m5>=33)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    

    printf("\n");
    return 0;
}
//Q3
int main()
{
    char ch;
    printf("Enter a character");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("Uppercase character");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("Lowercase character");
    }

    printf("\n");
    return 0;
}
//Q4
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);

    if(x%3==0 && x%2==0)
        printf("Yes it is divisible by 2 and 3");
    else
        printf("No it is not divisible by 2 and 3  both");
    return 0;
}
//Q5
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);

    if(x%7==0 || x%3==0)
        printf("Yes it is divisible by 7 or 3");
    else
        printf("No, it is not divisible by 7 and 3  both");
    return 0;
}
