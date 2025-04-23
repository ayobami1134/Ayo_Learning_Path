def main():
    # Initialize a string
    str_ = "Hello"

    # Different operations similar to append(), replace(), and erase()

    print("Original string:", str_)

    # 1. Append another string
    str_ += " World"
    print(str_)  # Hello World

    # 2. Append n characters from another string starting at position pos
    str2 = "Programming"
    str_ += str2[3:8]  # Append "Prog"
    print(str_)  # Hello WorldProg

    # 3. Append n copies of a character
    str_ += "!" * 3  # Append "!!!"
    print(str_)  # Hello WorldProg!!!

    # 4. Append from char array
    cstr = " C++"
    str_ += cstr
    print(str_)  # Hello WorldProg!!! C++

    # Create a new string
    ms = ""
    ms += "".join(['a', 'b', 'c'])  # Append "abc"
    print(ms)  # abc

    ms += "xyz"[:2]  # Append first 2 characters of "xyz"
    print(ms)  # abcxy

    ms += str_[:5]  # Append first 5 characters of str_
    print(ms)  # abcxyHello

    print(ms[4])  # y
    print(ms[4])  # y (same as above)

    # Replace part of the string
    ms = ms[:3] + "def" + ms[5:]
    print(ms)  # abcdefHello

    # Replace part of the string with repeated characters
    ms = ms[:5] + "g" * 4 + ms[7:]
    print(ms)  # abcdeggggello

    # String concatenation
    na = "Ayo"
    nb = "bami"
    nc = na + nb
    print(nc)  # Ayobami

    # Replace using slicing
    nd = na
    print("Address of na:", id(na))  # Address of na
    print("Address of nd:", id(nd))  # Address of na
    nd += nb
    print(nd)  # Ayobami
    print(na)  # Ayo
    print("Address of na:", id(na))  # Address of na
    print("Address of nd:", id(nd))  # Address of na

    # Erase a character at a specific position
    ms = ms[:4] + ms[5:]
    print(ms)  # abcdggggello

    # Erase a range of characters
    ms = ms[:4] + ms[8:]
    print(ms)  # abcdello


if __name__ == "__main__":
    main()