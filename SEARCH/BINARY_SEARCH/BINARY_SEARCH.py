def binarySearch (arr, low, high, x):
    if high >= low:
        mid = (low + high)//2
        if arr[mid] == x:
            return mid
        elif arr[mid] > x:
            return binarySearch(arr, low, mid-1, x)
        else:
            return binarySearch(arr, mid+1, high, x)
    else:
        return -1
f=open('SEARCH\BINARY_SEARCH\inputs\input0.txt','r')
arr=list(map(int,f.readline().split()))
x=int(f.readline())
arr.sort()
result = binarySearch(arr, 0, len(arr)-1, x)
f1=open('SEARCH\BINARY_SEARCH\outputs\OUTPUT0.txt','w')
if result != -1:
    f1.write("Element is present at index "+ str(result))
else:
    f1.write("Element is not present in array")
f1.close()
''' 
Best Case Time Complexity: O(log(n)).
Space: O(1) in case of iterative implementation. In case of recursive implementation, O(Logn) recursion call stack space.

'''
