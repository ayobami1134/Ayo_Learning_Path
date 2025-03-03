# Define constants
VARNUM = 10
VARFLOAT = 20.456
VARCHAR = 'A'
VARSTRING = "Constants"

def main():
    # Define mutable variables
    a = 10
    b = 20
    c = -25
    d = 30
    e = -35

    f = 40
    g = 50
    h = 60
    i = 70.0

    j = 80.012345
    k = 90.012345

    l = 'a'
    m = "Hello World"

    # Define immutable variables
    n = 100
    o = 110.0
    p = 'b'
    q = "Ola Mundo"

    # Print variables
    print(f"a: {a}")
    print(f"b: {b}")
    print(f"c: {c}")
    print(f"d: {d}")
    print(f"e: {e}")
    print(f"f: {f}")
    print(f"g: {g}")
    print(f"h: {h}")
    print(f"i: {i}")
    print(f"j: {j}")
    print(f"k: {k}")
    print(f"l: {l}")
    print(f"m: {m}\n")
    print(VARSTRING)
    print(f"VARNUM: {VARNUM}")
    print(f"VARFLOAT: {VARFLOAT}")
    print(f"VARCHAR: {VARCHAR}")
    print(f"VARSTRING: {VARSTRING}")
    print(f"n: {n}")
    print(f"o: {o}")
    print(f"p: {p}")
    print(f"q: {q}\n")

    # Variables re-initialization
    a = 15E5
    j = 85.012345
    l = 'b'
    m = "Bonjour le monde"
    # VARCHAR = 'B'  # error: assignment of read-only variable 'VARCHAR'

    # Print re-initialized variables
    print(f"a: {a}")
    print(f"j: {j}")
    print(f"l: {l}")
    print(f"m: {m}\n")

    # Print size of variables
    print(f"Size of int: {a.__sizeof__()} bytes")
    print(f"Size of char: {l.__sizeof__()} bytes")
    print(f"Size of short: {f.__sizeof__()} bytes")
    print(f"Size of long: {g.__sizeof__()} bytes")
    print(f"Size of long long: {h.__sizeof__()} bytes")
    print(f"Size of long double: {i.__sizeof__()} bytes")
    print(f"Size of float: {j.__sizeof__()} bytes")
    print(f"Size of double: {k.__sizeof__()} bytes")

if __name__ == "__main__":
    main()

# Equation Terms
# operand1 operator operand2 = result
# 10 + 20 = 30
# lvalue = rvalue
# a = 10

# Variable naming samples
# totalNumberOfCats is recommended
# total_number_of_cats is recommended
# totalnumberofcats is not recommended
# totalCats is recommended
# total_cats is recommended
# totalcats is not recommended
# _sum is not recommended
# sum is recommended
# var1 is not recommended
# var_1 is recommended