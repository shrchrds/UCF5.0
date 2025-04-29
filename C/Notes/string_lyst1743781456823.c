/*string is a sequence of characters terminated at null character

word vs string
word:  Hello
string: Hello students of C language

In C language, strings are handled using char array
*/
#include<stdio.h>
void ex1()
{
    char str[10]={'B','H','O','P','A','L'};
    int i;
    for(i=0;i<=9;i++)
        printf("%d",str[i]);
}

// ASCII Code      : 65  48  64   0
// ASCII Character : 'A' '0' '@' '\0'
// print           :  A   0   @  
void ex2()
{
    char str[10]={'B','H','O','P','A','L'};
    int i;
    for(i=0;i<=9;i++)
        printf("%c",str[i]);
}
void ex3()
{
    char str[10]={'B','H','O','P','A','L'};
    int i;
    for(i=0;i<=5;i++)
        printf("%c",str[i]);
}
void ex4()
{
    char str[10]={'B','H','O','P','A','L'};
    int i;
    for(i=0;str[i]!='\0';i++)
        printf("%c",str[i]);
}
void ex5()
{
    char str[10]={'B','H','O','P','A','L'};
    int i;
    for(i=0;str[i]!=0;i++)
        printf("%c",str[i]);
}
void ex6()
{
    char str[10]={'B','H','O','P','A','L'};
    int i;
    for(i=0;str[i];i++)
        printf("%c",str[i]);
}
void ex7()
{
    char str[10]={'B','H','O','P','A','L'};
    printf("%s",str);
}
void ex8()
{
    char str[10]={'B','H','O','P','A','L'};
    puts(str);
    //printf("%s",str);
}

//String Literal == String Constant 
// For Example: "BHOPAL"
void ex9()
{
    char str[10]="BHOPAL";
    printf("%s",str);
}
void ex10()
{
    char str[10]="BHOPAL";
    printf(str);
}
//Below code is not the correct way to take user input
void ex11()
{
    char str[20];
    int i;
    printf("Enter your name");
    for(i=0;i<=19;i++)
        scanf("%c",&str[i]);
    printf("Name: %s",str);
}
//Below code is not the correct way to take user input
void ex12()
{
    char str[20];
    int i;
    printf("Enter your name");
    for(i=0;str[i];i++)
        scanf("%c",&str[i]);
    printf("Name: %s",str);
}
//scanf can input only one word string 
void ex13()
{
    char str[20];
    
    printf("Enter your name");
    scanf("%s",str);
    printf("Name: %s",str);
}
//use of gets is unsafe
void ex14()
{
    char str[20];
    
    printf("Enter your name");
    gets(str);
    printf("Name: %s",str);
}
void ex15()
{
    char str[20];
    
    printf("Enter your name");
    fgets(str,20,stdin);
    printf("Name: %s",str);
}
int main()
{
    ex15();
    printf("\n");
    return 0;
}