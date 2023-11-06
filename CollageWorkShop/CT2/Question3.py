# # Question 3. Using a python program, analyse the different logic behind swapping the values between variables
## Approach 1: Using a Temporary Variable
# Initialize two variables
a = 5
b = 10

# Create a temporary variable to hold the value of 'a'
temp = a

# Swap the values of 'a' and 'b'
a = b
b = temp

# Now, 'a' contains the value of 'b' and 'b' contains the initial value of 'a'
print("After swapping, a =", a)
print("After swapping, b =", b)



## Approach 2: Using Tuple Unpacking
# Initialize two variables
a = 5
b = 10

# Swap the values of 'a' and 'b' using tuple unpacking
a, b = b, a

# Now, 'a' contains the value of 'b' and 'b' contains the initial value of 'a'
print("After swapping, a =", a)
print("After swapping, b =", b)
