

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i,j;
    int *out;
    *returnSize =2;
    for(i=0;i<numsSize;i++){
        for(j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                out = (int *)malloc(2*sizeof(int));
                *out = i;
                *(out+1) =j;
                return out;
            }
        }
    }
    return 0;
}