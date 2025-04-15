import time


# Function definitions
def display_num(num):
    # This function does not return any value and takes an integer argument
    print(f"Number: {num}")

def display_person(person):
    print(f"Name: {person['name']}")
    print(f"Age: {person['age']}")
    print(f"Address: {person['address']}")
    print(f"Phone: {person['phone']}")

def notification(sender, message, timestamp):
    # This function does not return any value and takes a string and an integer argument
    print(f"Timestamp: {timestamp}")
    print(f"Sender: {sender}")
    print(f"Notification: {message}")
    print(f"{sender}\t\t{time.ctime(timestamp)}")
    print(f"{message}\n\n")

def main():
    t = 1744221516
    dt = time.struct_time((2023, 10, 1, 17, 12, 45, 0, 0, 0))
    sender = "%s is the sender\n"
    sen = "Ayo"
    d = "Ayobami"

    p1 = {"name": "Ayo", "age": 25, "address": "123 Main St, City, Country", "phone": "000000000000"}
    p2 = {"name": "Ayo", "age": 25, "address": "123 Main St, City, Country", "phone": "000000000000"}
    p3 = {"name": "Ayo", "age": 25, "address": "123 Main St, Man City, UK", "phone": "0123456789"}
    p4 = {"name": "Tolu", "age": 5, "address": "123 Main St, Lagos, NG", "phone": "000000000000"}
    p5 = {"name": "Ayo", "age": 25, "address": "123 Main St, City, Country", "phone": "000000000000"}

    print(f"Year of timestamp: {time.localtime(t).tm_year}")

    # Function calls
    display_person(p3)
    display_person(p4)

    # Print d
    print(f"d: {d}")
    print(sender % sen)
    print(sender % d)

    # Function calls
    display_num(100)  # No return value
    notification("Ayo", "Hello!", time.mktime(time.localtime(t)))  # Function call with arguments
    notification("Ayo", "Hello!", time.mktime(dt))
    notification("Ayo", "Hello!", time.time())

if __name__ == "__main__":
    main()