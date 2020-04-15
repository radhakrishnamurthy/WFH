def bubbleSort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1] :
                arr[j], arr[j+1] = arr[j+1], arr[j]
f=open('SORT\BUBBLE_SORT\inputs\input3.txt','r')
arr=list(map(int,f.readline().split()))
bubbleSort(arr)
f1=open('SORT\BUBBLE_SORT\outputs\OUTPUT3.txt','w')
f1.write(" ".join([str(i) for i in arr]))

'''Worst and Average Case Time Complexity: O(n^2). Worst case occurs when array is reverse sorted.

Best Case Time Complexity: O(n). Best case occurs when array is already sorted.

space complexity: O(1)'''
