def print_sum(a, b, c=None):
    """
    Function to calculate and print the sum of numbers.
    Handles different parameter types and counts.
    """
    if c is not None:
        # If three arguments are provided
        sum_result = a + b + c
        print(f"The sum of {a}, {b}, and {c}: {sum_result}")
    elif isinstance(a, int) and isinstance(b, int):
        # If two integers are provided
        sum_result = a + b
        print(f"The sum of {a} and {b}: {sum_result}")
    elif isinstance(a, int) and isinstance(b, float):
        # If an integer and a float are provided
        sum_result = a + b
        print(f"The sum of {a} and {b:.2f}: {sum_result:.2f}")
    elif isinstance(a, float) and isinstance(b, float):
        # If two floats are provided
        sum_result = a + b
        print(f"The sum of {a:.2f} and {b:.2f}: {sum_result:.2f}")
    else:
        print("Invalid argument types provided.")

# No need to overload the function for different types,
    # def printSum(a: int, b: int) -> None: 
    #     """
    #     Function to calculate and print the sum of two integers.
    #     """
    #     sum_result = a + b
    #     print(f"The sum of {a} and {b}: {sum_result}")
    
    # def printSum(a: int, b: int, c: int) -> None:
    #     """
    #     Function to calculate and print the sum of three integers.
    #     """
    #     sum_result = a + b + c
    #     print(f"The sum of {a}, {b}, and {c}: {sum_result}")
    
    # def printSum(a: int, b: float) -> None:
    #     """
    #     Function to calculate and print the sum of an integer and a float.
    #     """
    #     sum_result = a + b
    #     print(f"The sum of {a} and {b:.2f}: {sum_result:.2f}")
    
    # def printSum(a: float, b: float) -> None:
    #     """
    #     Function to calculate and print the sum of two floats.
    #     """
    #     sum_result = a + b
    #     print(f"The sum of {a:.2f} and {b:.2f}: {sum_result:.2f}")

def main():
    a, b, c = 5, 7, 10
    x, y = 5.5, 7.5

    # Function calls
    print_sum(a, b)       # Two integers
    print_sum(a, b, c)    # Three integers
    print_sum(a, x)       # Integer and float
    print_sum(x, y)       # Two floats
    print_sum(x, b)     # Uncomment to test invalid argument types

if __name__ == "__main__":
    main()