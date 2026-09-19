#include <stdio.h>

int main()
{
    int nums[] = {-1,0,3,5,9,12};
    int target = 9;
    int n = 6;
    int left=0,right=n-1,mid;
    int result=-1;

    while(left<=right)
    {
        mid=left+(right-left)/2;

        if(nums[mid]==target)
        {
            result=mid;
            break;
        }
        else if(nums[mid]<target)
            left=mid+1;
        else
            right=mid-1;
    }

    printf("Index: %d\n",result);

    return 0;
}

/*
Test Case 1:
Input: nums = [-1,0,3,5,9,12], target = 9
Expected Output: Index: 4

Test Case 2:
Input: nums = [5], target = 5
Expected Output: Index: 0
*/