class Solution{
    public:
    //Function to find minimum adjacent difference in a circular array.
    // arr[]: input array
    // n: size of array
    int minAdjDiff(int arr[], int n){    
       int d=2;
int min=abs(arr[0]-arr[1]);
for(int i=1;i<n-1;i++){ 
    int sum=0;
    sum=abs(arr[i]-arr[i+1]);
    if(min>=sum){
min=sum;
}
}
int diff=abs(arr[n-1]-arr[0]);
if(min>diff){
min=diff;
return diff;
}else{
return min; // Your code here
        
    }
    }
};
