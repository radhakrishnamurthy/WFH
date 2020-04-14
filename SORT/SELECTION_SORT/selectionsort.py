def selectionSort(arr):
    for i in range(len(arr)):
        k=i
        for j in range(i+1, len(arr)):
            if arr[k] > arr[j]:
                k=j
        arr[i], arr[k] = arr[k], arr[i]
f=open('SORT\SELECTION_SORT\inputs\input0.txt','r')
arr=list(map(int,f.readline().split()))
selectionSort(arr)
f1=open('SORT\SELECTION_SORT\outputs\OUTPUT0.txt','w')
f1.write(" ".join([str(i) for i in arr]))
'''
Time complexity: O(n^2)
Space complexity: O(1)
'''
