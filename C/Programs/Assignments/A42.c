#include<stdio.h>
#include<string.h>

// Q.1 WAF to swap two int variables

void swap(int *p, int *q)
    {
        int t;
        t = *p;
        *p = *q;
        *q = t;
    }

// Q. 2 WAF to search of occurrences of given character. Result of search is a list of indices to be stored in given array.

int search_all_occurrences(char *str, char ch, int *arr)
{
    int i, j;
    for (i=0, j=0;str[i];i++)
        {
            if (str[i] == ch)
                {
                    arr[j] = i;
                    j++;
                }
        }
    return j;
}

// Q. 3 WAF to convert a given string into uppercase
char * upper(char *str)
    {
        int i;
        for (i=0;str[i];i++)
            {
                if (str[i]>='a'&&str[i]<='z')
                    str[i] = str[i] - 32;
            }
        return str;
    }
// Q. 4 WAF to convert a given string into lowercase
char * lower(char *str)
    {
        int i;
        for (i=0;str[i];i++)
            {
                if (str[i]>='A'&&str[i]<='Z')
                    str[i] = str[i] + 32;
            }
        return str;
    }

// Q. 5 WAF to extract a sbustring from given string and store in another array

void extract_string(char *str, int start, int end, char *result)
{
    int i, j;
    for (j=0, i=start;i < end;i++, j++)
        result[j] = str[i];
    result[j] = '\0';
}

int main()
{
    char s1[] = "Shri Krishna Govind Hare Murari!";
    int i, j, l;
    l = strlen(s1);
    int arr[l];
    j = search_all_occurrences(s1, 'i', arr);
    for (i=0;i<j;i++)
        printf("%d ", arr[i]);
}