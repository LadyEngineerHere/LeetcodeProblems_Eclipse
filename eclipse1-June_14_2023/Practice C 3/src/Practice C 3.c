/*
 ============================================================================
 Name        : Practice.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Leetcode Problem "Two Sums"
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){

	int i, j;
int *ret_arr =(int*)malloc(2 * sizeof(int));

if(ret_arr == NULL) {
	*returnSize = 0;
	return NULL;
}

for(i = 0; i < numsSize; i++) {
		for(j = i+1; j < numsSize; j++) {
			if(nums[i] + nums[j] == target) {
				*returnSize = 2;
				ret_arr[0] =i;
				ret_arr[1] = j;
				return ret_arr;

			}
		}
	}
		*returnSize = 0;
		free(ret_arr);
		return NULL;

}
 int main(){
	 int a[] = {2,7,11,15};
	 int rs;
	 int *p = NULL;

	 rs = 0;

	 p = twoSum(a, sizeof(a) / sizeof(a[0]), 9, &rs);

		if(rs ==0){
			printf("Target not found\n)");

		}else{
			printf("target found at indices %d and %d\n", p[0], p[1]);
		}
	 return 0;
 }


