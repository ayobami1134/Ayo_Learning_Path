def main():
    a = 60  # 60 = 0011 1100
    b = 13  # 13 = 0000 1101

    c = a & b  # 12 = 0000 1100
    print(f"Line 1 - Value of c is {c}")

    c = a | b  # 61 = 0011 1101
    print(f"Line 2 - Value of c is {c}")

    c = a ^ b  # 49 = 0011 0001
    print(f"Line 3 - Value of c is {c}")

    c = ~a  # -61 = 1100 0011 (in 2's complement form)
    print(f"Line 4 - Value of c is {c}")

    c = a << 2  # 240 = 1111 0000
    print(f"Line 5 - Value of c is {c}")

    c = a >> 2  # 15 = 0000 1111
    print(f"Line 6 - Value of c is {c}")

if __name__ == "__main__":
    main()