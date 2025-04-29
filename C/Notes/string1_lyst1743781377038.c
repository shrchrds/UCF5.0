#include<stdio.h>
#include<string.h>
/*
    int strlen(char *);
    char* strcpy(char*,char*);
    int strcmp(char*,char*);
        -1 strings are in dictionary order
        0  both strings are same
        1  strings are not in dictionary order
    char* strcat(char*,char*);
*/
int main()
{
    char str[20]="computer";
    char temp[20];
    printf("%s\n",str);

    //Calculate length of the string
    printf("Length = %d",strlen(str));
    strcpy(temp,str);

    printf("\n");
    return 0;
}

//Multiple Strings

void p1()
{
    int i;
    char s[3][20]={"Bhopal","Pune","Jaipur"};
    for(i=0;i<=2;i++)
        printf("%s",s[i])
}
void p2()
{
    int i;
    char s[3][20];
    printf("Enter 3 strings");
    for(i=0;i<=2;i++)
        fgets(s[i],20,stdin);
        
}