f=open('SEARCH\LINEAR_SEARCH\inputs\input4.txt','r')
l=list(map(int,f.readline().split()))
n=int(f.readline())
f1=open( "SEARCH\LINEAR_SEARCH\outputs\output4.txt",'w')
for i in l:
    if i == n:
        f1.write("Element found at index ")
        f1.write(str(l.index(i)))
        f1.close()
        exit(0)
f1.write("Element not found")
