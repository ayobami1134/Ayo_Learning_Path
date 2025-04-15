# Function definitions
def print_sum(a, b):
    # This function takes two integers as parameters and prints their sum
    sum_result = a + b
    print(f"The sum of {a} and {b} is {sum_result}")

def print_avg(a, b):
    # This function takes a float and an integer as parameters and prints their average
    avg = (a + b) / 2.0
    print(f"The average of {a:.2f} and {b} is {avg:.2f}")

def main():
    # Function calls
    print_sum(5, 10)
    # print_avg(5) # too few arguments (commented out to avoid error)
    print_avg(5.7, 10.8)

if __name__ == "__main__":
    main()