// Find size of character constant
#include<stdio.h>
/*

int main()
{
    char c='A';
    printf("Size of character constant is  %d", sizeof(c));

    return 0;
}
    
// Find size of real constant
int main()
{
    float r=1.4;
    double d = 1.5;
    printf("Size of double constant is  %d and size of float constant is %d", sizeof(d), sizeof(r));

    return 0;
}
    

// Take character type variable and assign 'A' and then change it to 'B' using increment operator
int main()
{
    char c;
    c = 'A';
    c++;
    printf("Value of character is %c", c);

    return 0;
}



// swap values of two integer variables
int main()
{
    int b=5, c=6, a;
    a = b;
    b=c;
    c=a;
    printf("Values of integer variables are is %d and %d",b, c);

    return 0;
}

// swap values of two integer variables without using third variable
int main()
{
    int b=5, c=6;
    b = b + c;//11
    c = b - c;//11-6 = 5
    b = b - c;//11-5=6
    printf("Values of integer variables are is %d and %d",b, c);

    return 0;
}


// swap values of two integer variables without using third variable and +, - operator
int main()
{
    int b=5, c=6;
    b = b * c;//30
    c = b / c;//30/6 = 5
    b = b / c;//30/5=6
    printf("Values of integer variables are is %d and %d",b, c);

    return 0;
}

// swap values of two integer variables in single line arithmatic expression
int main()
{
    int b=50, c=60;
    b = b *c, c=b/c,b=b/c;
    printf("Values of integer variables are is %d and %d",b, c);

    return 0;
}

// swap values of two integer variables in single line arithmatic operator
int main()
{
    int b=500, c=160;
    b = b + c, c=b-c,b=b-c;
    printf("Values of integer variables are is %d and %d",b, c);

    return 0;
}



// swap values of two integer variables without using third variable and arithmatic operator
int main()
{
    int a=213, b=109;
    printf("a = %d, b=%d", a, b);
    a = a^b;
    b=a^b;
    a=a^b;
    printf("a = %d, b=%d", a, b);
}

*/
// WAP to swap values in single line arithmatic expression

int main()
{
    int a=213, b=109;
    printf("a = %d, b=%d", a, b);
    a = a + b - (b=a);
    printf("a = %d, b=%d", a, b);
}