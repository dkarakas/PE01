#include "answer01.h"
#include <stdio.h>

/* Return the largest partial sum of the array */
/* int array[] = { 1, 4, -1, 6, -5, 4} */
/* the (i,j)-th partial sum is the sum from array[i] through array[j], i<=j */
/* the (0,0)-(0,5)-th partial sums are 1, 5, 4, 10, 5, 9 */
/* the (1,1)-(1,5)-th partial sums are 4, 3, 9, 4, 8 */
/* the (2,2)-(2,5)-th partial sums are -1, 5, 0, 4 */
/* the (3,3)-(3,5)-th partial sums are 6, 1, 5 */
/* the (4,4)-(4,5)-th partial sums are -5, -1 */
/* the (5,5)-th partial sum is 4 */
/* the largest partial sum of the array is therefore 10 */
/* if the len is 0, the largest partial sum is 0 */
/* you may assume that array is NULL when len is 0 */
/* but is non-NULL and correct when len is > 0 */
/* you may also assume that none of the partial sums will cause an overflow */

int largest_partial_sum(int * array, int len)
{
	int largest_sum = array[0]; // a variable storing largest_sum
	int sum = 0; //storing current sum
	int start_num = 0; //ith term in the partial sum
	int end_num = 0; //jth term in the partial sum
	if(len != 0){//checks if the array is empty
		for(start_num = 0; start_num < len;++start_num){
			for(end_num = start_num; end_num < len;++end_num){
				sum = sum + array[end_num];//caluclates the partial sum
				if(largest_sum < sum)
					largest_sum = sum; //change the sum if the value is bigger
			}
		sum = 0;//reset the value of the sum
		}
	}
	else{
		largest_sum=0;
	}
   return largest_sum;
}

/* Return the largest difference of the array */
/* int array[] = { 1, 4, -1, 6, -5, 4} */
/* the largest difference is 6 - (-5) = 11 */
/* if the len is 0, the largest difference is 0 */
/* if the len is 1, the largest difference is also 0 */
/* you may assume that array is NULL when len is 0 */
/* but is non-NULL and correct when len is > 0 */
/* you may assume that the largest difference will not cause an overflow */

int largest_difference(int * array, int len)
{
   return 0;
}
