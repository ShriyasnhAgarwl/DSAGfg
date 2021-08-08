class Solution{
    public:
    // Function to count number of Ones
    // arr: input array 
    // N: size of input array
    int countOnes(int arr[], int N)
    {
       int low=0;
int high=N-1;
int mid;
while(low<=high)
{
mid=high-low/2;
if(arr[mid]==1)
{
return mid+1;
}
else{
low=0;
high=mid-1;
}
}
        
    }
};
