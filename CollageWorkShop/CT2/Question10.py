# # Question 10: write a program in python to implement stdent grade system 


print("   enter the 3 subject marks  ")
m1 = int(input(" enter the marks : "))
m2 = int(input(" enter the marks : "))
m3 = int(input(" enter the marks : "))

tot = m1 + m2 + m3
avg = tot / 3

if (avg>=91 and avg<=100):
    print("excellent")
elif (avg>=81 and avg<91):
    print("very good")
elif (avg>=51 and avg<81):
    print("good")
elif (avg>=0 and avg<51):
    print("fail")                    
else:
    print("invalid input")