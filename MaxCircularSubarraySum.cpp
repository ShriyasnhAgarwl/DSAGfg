class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int circularSubarraySum(int arr[], int num){
       int max = arr[0];
       int max_1 = arr[0];
	int first_ele_pos = 0;

	for (int i = 1; i < 2 * (num - 1); i++) {
		int index = (i > num - 1) ? i % num : i;
		if (first_ele_pos == index) {
			index = first_ele_pos + 1;
			index = (index > num - 1) ? index % num : index;
			i = index;
			max_1 = arr[index];
			first_ele_pos = index;
			continue;
		}
		if (max_1 > 0)
			max_1 += arr[index];
		else {
			max_1 = arr[index];
			first_ele_pos = index;
		}
		if (max_1 > max)
			max = max_1;
	}
	return max; 
    }
};
