// Input 3 digit number and display  the sum of digits

#include<stdio.h>
/*

int main()
{
    printf("Enter a 3 digit number: \n");
    int a, b;
    scanf("%d", &a);
    int first, last, mid;
    last = a%10;
    b = a/10;
    mid = b%10;
    first = b/10;
    printf("Sum of digits of number %d is %d",a,first+mid+last);
}

// WAP to find ASCII code of the character '+'
int main()
{
    char c;
    c = '+';
    printf("ASCII Code of the character %c is %d",c,c);
}


// print size of int, float, char and double type variable
int main()
{
    int a;
    float f;
    double d;
    char c;
    printf("Size of int varibale is %d, \nsize of float variable is %d,\nsize of double type variable is %d, \nsize of char type variable is %d",sizeof(a), sizeof(f), sizeof(d), sizeof(c));
}

// WAP to make last digit of number stored in a variable as zero. ex 1234 to 1230
int main()
{
    int a=1234;
    a = a/10*10;
    printf("Value of interget a is: %d", a);
}
    
// WAP to input number from user and also digit. append digit in nuber and print. ex. number 123, digit=1, new number = 1231

int main()
{
    int a,d;
    printf("Enter a number and digit: \n");
    scanf("%d%d",&a,&d);
    printf("New number is: %d", a*10+d);
}

*/

int main()
{
    printf("Enter a 3 digit number: \n");
    int a;
    scanf("%d", &a);
    printf("Sum of digits of number %d is %d",a,a/100+a/10%10+a%10);
    return 0;
}