/**
 * Note: The returned array must be malloced, assume caller calls free().
 */    
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(numsSize * sizeof(int));
    
    int left = 0;
    int right = numsSize - 1;
    int pos = numsSize - 1;

    while (left <= right) {
        if (abs(nums[left]) > abs(nums[right])) {
            result[pos] = nums[left] * nums[left];
            left++;
        } else {
            result[pos] = nums[right] * nums[right];
            right--;
        }
        pos--;
    }

    *returnSize = numsSize;
    return result;
}
