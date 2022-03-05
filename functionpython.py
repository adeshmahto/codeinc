def avg(x):
        p=(x[0]+x[1]+x[2])/3
        return p


x=[23,45,67]
avg1=avg(x)
#print(avg1)


def fact(n):
    if n==0 or n==1:
        return 1

    return n*fact(n-1)

#print(fact(4))  


def farh(cel):
    return (cel*(9/5)+32)

print(farh(34))    