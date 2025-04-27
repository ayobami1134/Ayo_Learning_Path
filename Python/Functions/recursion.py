# Recursive function to calculate the sum of numbers from 1 to num
def sum_recursive(num=10):
  if num == 0:
    return 0
  return num + sum_recursive(num - 1)

# Non-recursive function to calculate the sum of numbers from 1 to num
def sum_non_recursive(num=10):
  result = 0
  for i in range(num, 0, -1):
    result += i
  return result

def main():
  print(f"Sum (recursive): {sum_recursive(100)}")
  print(f"Sum (non-recursive): {sum_non_recursive()}")

if __name__ == "__main__":
  # for i in range(5, 100, 5):
    # print("i: {2} {1} {0}".format(i, i+1, i+2))
    # print(f"s: {i} {i+1} {i+2}\n")
    # print(f"i: {i}")
  main()