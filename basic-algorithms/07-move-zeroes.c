#include <stdio.h>

int main()
{
    int nums[] = {0,1,0,3,12};
    int n = 5;
    int i,j=0,temp;

    for(i=0;i<n;i++)
    {
        if(nums[i]!=0)
        {
            temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            j++;
        }
    }

    printf("Array after moving zeroes: ");

    for(i=0;i<n;i++)
        printf("%d ",nums[i]);

    printf("\n");

    return 0;
}

/*
Test Case 1:
Input: [0,1,0,3,12]
Expected Output: [1,3,12,0,0]

Test Case 2:
Input: [0,0,1]
Expected Output: [1,0,0]
*/