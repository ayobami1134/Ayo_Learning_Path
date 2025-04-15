#include <iostream>
#include <ctime>
#include <string>

using namespace std;

// Function prototypes
void notification(const string &sender, const string &message, time_t timestamp);
void displayNum(int num);

struct Person
{
  string name;
  int age;
  string address;
  string phone;
};

void displayPerson(const Person &p)
{
  cout << "Name: " << p.name << endl;
  cout << "Age: " << p.age << endl;
  cout << "Address: " << p.address << endl;
  cout << "Phone: " << p.phone << endl;
}

int main()
{
  time_t t = 1744221516;
  struct tm dt = {45, 12, 17, 1, 9, 2023 - 1900, 0, 0, 0};
  string sender = "%s is the sender\n";
  string sen = "Ayo";
  string d = "Ayobami";

  Person p1 = {"Ayo", 25, "123 Main St, City, Country", "000000000000"};
  Person p2 = {"Ayo", 25, "123 Main St, City, Country", "000000000000"};
  Person p3 = {"Ayo", 25, "123 Main St, Man City, UK", "0123456789"};
  Person p4 = {"Tolu", 5, "123 Main St, Lagos, NG", "000000000000"};
  Person p5 = {"Ayo", 25, "123 Main St, City, Country", "000000000000"};

  cout << "Year of timestamp: " << localtime(&t)->tm_year + 1900 << endl;

  // Function calls
  displayPerson(p3);
  displayPerson(p4);

  // Print d
  cout << "d: " << d << endl;
  cout << sender << sen << endl;
  cout << sender << d << endl;

  // Function calls
  displayNum(100);                                      // No return value
  notification("Ayo", "Hello!", mktime(localtime(&t))); // Function call with arguments
  notification("Ayo", "Hello!", mktime(&dt));
  notification("Ayo", "Hello!", time(&t));

  return 0;
}

void displayNum(int num)
{
  // This function does not return any value and takes an integer argument
  cout << "Number: " << num << endl;
}

void notification(const string &sender, const string &message, time_t timestamp)
{
  // This function does not return any value and takes a string and an integer argument
  cout << "Timestamp: " << timestamp << endl;
  cout << "Sender: " << sender << endl;
  cout << "Notification: " << message << endl;
  cout << sender << "\t\t" << ctime(&timestamp);
  cout << message << endl
       << endl;
}