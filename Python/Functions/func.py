import math


def lcm(a, b):
    gcd = 1.0
    for i in range(1, int(min(a, b)) + 1):
        if int(a) % i == 0 and int(b) % i == 0:
            gcd = i
    return (a * b) / gcd

def main():
    number = float(input("Enter a number: "))
    print(f"The square root of {number:.1f} is {math.sqrt(number):.1f}")  # from standard library
    result = lcm(number, 9.0)  # from user-defined function
    print(f"The lcm of {number:.1f} and 9.0 is {result:.1f}")

if __name__ == "__main__":
    main()