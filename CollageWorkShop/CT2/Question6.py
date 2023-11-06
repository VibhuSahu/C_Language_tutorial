# # Question 6. Whar is function? How a function is defined and called in python? Explain with a simple program
"""
You define a function in Python using the def keyword, followed by the function name and parentheses containing 
any parameters the function may take. The function code is indented under the def statement.    

def function_name(parameters):
    # Function code here
    # ...
    return result  # Optional

result = function_name(arguments)  # If the function returns a value
function_name(arguments)  # If the function doesn't return a value
"""

# Define a function that adds two numbers
def add_numbers(a, b):
    result = a + b
    return result

# Call the function and store the result in a variable
sum_result = add_numbers(5, 7)

# Display the result
print("The sum is:", sum_result)
