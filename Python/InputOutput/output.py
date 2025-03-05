def file_output():
    with open("output.txt", "w") as fp:
        fp.write("Hello, World!\n")
        fp.write("Hello, World!\n")
        fp.write('A')
        fp.write('\n')
        fp.write(chr(65))
        fp.write('\n')
        fp.write(chr(0b1000001))
        fp.write('\n')
        fp.write(chr(0o101))
        fp.write('\n')
        fp.write(chr(0x41))
        fp.write('\n')

def main():
    bin_num = 0b1000001
    oct_num = 0o101
    hex_num = 0x41
    
    # Displays string in the double quotes
    print("Hello, World!")
    
    # Print integer
    print("The number is:", 10)
    
    # Print float
    print("The number is:", 10.5)
    
    # Print character
    print("The character is:", 'A')
    print("The character is:", chr(65))
    print("The character is:", chr(bin_num))
    print("The character is:", chr(oct_num))
    print("The character is:", chr(hex_num))
    
    # More output functions
    print("\nHello, World!")
    print('A')
    print(chr(65))
    print(chr(bin_num))
    print(chr(oct_num))
    print(chr(hex_num))
    # alternative to print
    # print("\nHello, World!", 'A', chr(65), chr(bin_num), chr(oct_num), chr(hex_num), sep='\n')
    
    # Call file_output function
    file_output()


main()