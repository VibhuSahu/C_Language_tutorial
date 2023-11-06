# # Question 4. Explain the looping statements (while and for loops) with an example 
"""
1. While Loop:
A while loop continues to execute a block of code as long as a given condition is True.

Example of a while loop:
"""
# Initialize a variable
count = 1

# Use a while loop to print numbers from 1 to 5
while count <= 5:
    print(count)
    count += 1  # Increment the value of count by 1 in each iteration


"""
2. For Loop:
A for loop is used to iterate over a sequence (such as a list, tuple, string, or range) and execute a block of code for each item in the sequence.
"""
# Iterate over a list of fruits and print each one
fruits = ["apple", "banana", "cherry"]
for fruit in fruits:
    print(fruit)


"""
    Both while and for loops are powerful tools for controlling the flow of 
    your program and performing repetitive tasks. You can choose the appropriate
    loop based on your specific requirements.
"""