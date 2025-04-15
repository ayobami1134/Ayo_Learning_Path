# Function definitions
def print_sum(a, b=1):
    # This function takes two parameters and prints their sum
    sum_result = a + b
    print(f"The sum of {a} and {b} is {sum_result}")

def print_avg(a, b=1.0, c=2.5):
    # This function takes three parameters and prints their average
    avg = (a + b + c) / 3.0
    print(f"The average of {a}, {b}, and {c} is {avg}")

def main():
    # Function calls
    print_sum(5)
    print_sum(5, 10.8)
    print_avg(5)
    print_avg(1, 2.5)
    print_avg(10, 20.5, 30.5)

if __name__ == "__main__":
    main()