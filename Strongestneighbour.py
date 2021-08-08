def maximumAdjacent(sizeOfArray, arr):
   n = sizeOfArray
   arr1 = []
   for i in range(1,n):
       r = max(arr[i],arr[i-1])
       arr1.append(r)
   for j in arr1:
       print(j, end= " ")
