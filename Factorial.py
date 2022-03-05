
l1=[1,2,3,4,5,6]
prime=True
count=0
for i in l1:
    for j in range(2,i):
        if(i%j==0):
            prime=False
            count=count+1
            break

print(count)
    



