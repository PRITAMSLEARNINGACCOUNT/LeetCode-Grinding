int CalculateSum(int num){
    int temp=num;
    int sum=0;
    while (temp!=0)
    {
        sum+=temp%10;
        temp/=10;
    }
    return sum;
}
int maximumSum(int* nums, int numsSize) {
    int max=0;
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i+1; j < numsSize; j++)
        {
            if(CalculateSum(nums[i])==CalculateSum(nums[j])){
                int temp=nums[i]+nums[j];
                max>temp?max=temp:max;
            }
        }
        
    }
    if (max==0)
    {
        return -1;
    }
    return max;
}