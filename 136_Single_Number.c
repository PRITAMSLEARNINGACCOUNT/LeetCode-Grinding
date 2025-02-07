#include<stdio.h>
int singleNumber(int* nums, int numsSize) {
    int arr[numsSize];
    for (int i = 0; i < numsSize; i++)
    {
        arr[i]=0;
    }
    
    for (int i = 0; i < numsSize; i++)
    {
        int Temp=nums[i];
        for (int j = i+1; j < numsSize; j++)
        {
            if (Temp==nums[j])
            {
                arr[i]=1;
                arr[j]=1;
            }
            
        }
        
    }
    for (int i = 0; i < numsSize; i++)
    {
        if (arr[i]==0)
        {
            return nums[i];
        }
        
    }
    return -1;
}

void main(){
    int MyArray[5]={4,1,2,1,2};
    printf("%d\n",singleNumber(MyArray,5));
}