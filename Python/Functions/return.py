# Function definitions
def display1():
    # Function with no return value
    print("This is a function with no return value.")

def display2():
    # Function with return value
    return 42  # Return value

def display3():
    # Function with return value
    return 'A'  # Return value

def display4():
    # Function with return value
    return 3.14  # Return value

def display5():
    # Function with return value
    return 2.718281828459045  # Return value

def main():
    # Function call
    display1()  # No return value

    result = display2()  # Return value stored in result
    print(f"The return value of display2() is: {result}")
    print(f"The return value of display2() is: {display2()}")

    ch = display3()  # Return value stored in ch
    print(f"The return value of display3() is: {ch}")

    f = display4()  # Return value stored in f
    print(f"The return value of display4() is: {f:.2f}")

    d = display5()  # Return value stored in d
    print(f"The return value of display5() is: {d:.10f}")

if __name__ == "__main__":
    main()