#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "hello";
    int i,n;
    char temp;

    n=strlen(str);

    for(i=0;i<n/2;i++)
    {
        temp=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=temp;
    }

    printf("%s\n",str);

    return 0;
}

/*
Test Case 1:
Input: hello
Expected Output: olleh

Test Case 2:
Input: a
Expected Output: a
*/