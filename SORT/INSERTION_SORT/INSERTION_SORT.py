
def insertionSort(arr):
    for i in range(1, len(arr)):
        key=arr[i]
        j=i-1
        while j>=0 and key<arr[j] :
                arr[j + 1]=arr[j]
                j-=1
        arr[j+1]=key

f=open('SORT\INSERTION_SORT\inputs\input0.txt','r')
arr=list(map(int,f.readline().split()))
insertionSort(arr)
f1=open('SORT\INSERTION_SORT\outputs\OUTPUT0.txt','w')
f1.write(" ".join([str(i) for i in arr]))
