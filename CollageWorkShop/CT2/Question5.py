# # Question 5. Write a python program to find the given number is positive, negative or zero using Nested if conditional control structure.
number = int(input("Enter a Number :  "))
if (number != 0):
    if (number < 0):
        print("Negative")
    else:
        print("Positive")
else:
    print("Zero")