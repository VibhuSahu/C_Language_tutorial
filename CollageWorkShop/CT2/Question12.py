# # Question 12. Write a python code print all number in range (a,b) divisible by a given number (n)
# range program a,b divisible by number 
a = int(input("enter a: "))
b = int(input("enter b: "))
n = int(input("enter n: "))
for i in range( a, b+1):
    if (i % n == 0):
        print(i)