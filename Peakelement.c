int peakElement(int arr[], int n)
{if(arr[0]>arr[1])
return 0;
if(arr[n-1]>arr[n-2])
return (n-1);
for(int i=1;i<=n-2;i++)
{
if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
return i;
   // Your code here
}
}
