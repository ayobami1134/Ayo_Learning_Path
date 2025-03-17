def main():
    a = 21
    c = a
    print(f"Line 1 - =  Operator Example, Value of c = {c}")

    c += a  # c = c + a
    print(f"Line 2 - += Operator Example, Value of c = {c}")

    c -= a  # c = c - a
    print(f"Line 3 - -= Operator Example, Value of c = {c}")

    c *= a  # c = c * a
    print(f"Line 4 - *= Operator Example, Value of c = {c}")

    c /= a  # c = c / a
    print(f"Line 5 - /= Operator Example, Value of c = {c}")

    c = 200
    c %= a  # c = c % a
    print(f"Line 6 - %= Operator Example, Value of c = {c}")

    c <<= 2  # c = c << 2
    print(f"Line 7 - <<= Operator Example, Value of c = {c}")

    c >>= 2  # c = c >> 2
    print(f"Line 8 - >>= Operator Example, Value of c = {c}")

    c &= 2  # c = c & 2
    print(f"Line 9 - &= Operator Example, Value of c = {c}")

    c ^= 2  # c = c ^ 2
    print(f"Line 10 - ^= Operator Example, Value of c = {c}")

    c |= 2  # c = c | 2
    print(f"Line 11 - |= Operator Example, Value of c = {c}")

    c **= 2  # c = c ** 2
    print(f"Line 12 - **= Operator Example, Value of c = {c}")

if __name__ == "__main__":
    main()