 vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
       int max = INT_MIN, max2= INT_MIN;
int n = sizeOfArray;
vector<int> v;
max = arr[0];
for (int i = 1; i < n; i++) {
if (arr[i] > max) {
max = arr[i];
}
}
v.push_back(max);
for (int i = 1; i < n; i++) {
if (arr[i] > max2 && arr[i] < max)
{
max2 = arr[i];
}
}
if(max2==INT_MIN)
{
v.push_back(-1);
}
v.push_back(max2);
return v;
    }
        
    
};
