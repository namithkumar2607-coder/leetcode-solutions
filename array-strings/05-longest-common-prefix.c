#include <stdio.h>
#include <string.h>

int main()
{
    char *strs[] = {"flower","flow","flight"};
    int n = 3;
    int i,j;
    char prefix[100];

    strcpy(prefix,strs[0]);

    for(i=1;i<n;i++)
    {
        j=0;

        while(prefix[j]!='\0' && strs[i][j]!='\0' && prefix[j]==strs[i][j])
            j++;

        prefix[j]='\0';
    }

    printf("Longest Common Prefix: %s\n",prefix);

    return 0;
}

/*
Test Case 1:
Input: ["flower","flow","flight"]
Expected Output: fl

Test Case 2:
Input: ["dog","racecar","car"]
Expected Output: No common prefix
*/