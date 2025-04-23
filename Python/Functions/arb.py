def sumMultiple(*n):
  sum = 0
  for i in n:
    sum += i
  return sum

def main():
  print("Sum of multiple numbers:", sumMultiple(1, 20, -100))

if __name__ == "__main__":
  main()