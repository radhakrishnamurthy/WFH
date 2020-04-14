# Python program for implementation of MergeSort
def mergeSort(arr):
    if len(arr) >1:
        mid = len(arr)//2
        left = arr[:mid]
        right = arr[mid:]
        mergeSort(left)
        mergeSort(right)
        i = j = k = 0
        while i < len(left) and j < len(right):
            if left[i] < right[j]:
                arr[k] = left[i]
                i+=1
            else:
                arr[k] = right[j]
                j+=1
            k+=1
        while i < len(left):
            arr[k] = left[i]
            i+=1
            k+=1
        while j < len(right):
            arr[k] = right[j]
            j+=1
            k+=1
f=open('SORT\MERGE_SORT\inputs\input3.txt','r')
arr=list(map(int,f.readline().split()))
mergeSort(arr)
f1=open('SORT\MERGE_SORT\outputs\OUTPUT3.txt','w')
f1.write(" ".join([str(i) for i in arr]))
