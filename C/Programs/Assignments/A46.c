#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// Q.1 Define a function to input variable length string and store it in an array without memory wastage.

char* VariableLenghtString(char s[])
    {
        int i, l;
        char *p;
        l = strlen(s);
        p = (char*)calloc(l, 1); 
        for (i=0;i<l;i++)
            printf("%c",*(p+ i));
        return p;
    }


int main()
{
    char s[50], *p;
    printf("Enter a string: ");
    fgets(s, 50, stdin);
    p = VariableLenghtString(s);
    printf("%s", p);
    return 0;
}