num=int(input("\nEnter the number:"))

prime=True
for i in range(2,num):
    if(num % i==0):
     prime=False
     break

if (prime):
    print("\nit is prime no.\n")
else:
     print("\nit is not prime no.\n")        