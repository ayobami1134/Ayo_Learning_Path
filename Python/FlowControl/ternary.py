def normal(x, b):
  # Greater number of 2 numbers
  print("normal function")
  if x > b:
      print(x, "is greater than", b, end="\n")
  else:
      print(b, "is greater than", x, end="\n")

def ternary(a, b):
  # Greater number of 2 numbers
  print("ternary function")
  print(a, "is greater than", b, end="\n") if a > b else print(b, "is greater than", a, end="\n") if a != b else print(a, "is equal to", b, end="\n")  # exp1 if true else exp2 if false else exp3

def main():
  a = int(input("Enter the first number: "))
  b = int(input("Enter the second number: "))
  normal(a, b)
  ternary(a, b)

main()