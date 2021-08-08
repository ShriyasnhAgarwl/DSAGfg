class Solution
{
    public:
    //Function to find the minimum element in sorted and rotated array.
    int minNumber(int arr[], int low, int high)
    {
        while(low<=high){
			if(low==high)
				return arr[(int)low];
			long mid=  (low+high)/2;
			if(mid<high && arr[(int)mid+1]<arr[(int)mid])
				return arr[(int)mid+1];
			if(mid>low && arr[(int)mid-1]>arr[(int)mid])
				return arr[(int)mid];
			if(arr[(int) high]>arr[(int)mid])
				high=mid-1;
			else
				low = mid+1;
		}
		return arr[0];// Your code here
        
    }
};
