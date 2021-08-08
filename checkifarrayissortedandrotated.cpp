class Solution{
    public:
    // arr: input array
    // num: length of array
    // This function returns true or false
    //Function to check if array is sorted and rotated.
    bool checkRotatedAndSorted(int arr[], int num){
        bool inc = true;
        if(arr[0] < arr[num - 1])
        inc = false;
        int n = num;
        if(inc){
            int i;
            for(i = 1;i < n;i++){
                if(arr[i] < arr[i - 1])
                break;
            }
            i++;
            for(;i<n;i++){
                if(arr[i] < arr[i - 1])
                break;
            }
            if(i == n)
            return true;
            
            return false;
        }else{
            int i;
            for(i = 1;i < n;i++){
                if(arr[i] > arr[i - 1])
                break;
            }
            i++;
            for(;i<n;i++){
                if(arr[i] > arr[i - 1])
                break;
            }
            if(i == n)
            return true;
            
            return false;
        }
        return false;
    }
};
