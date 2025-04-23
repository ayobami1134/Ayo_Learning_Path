#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str = "Hello";

  // Different overloads of append()

  cout << "Original string: " << str << endl;

  // 1. Append another string
  str.append(" World");
  cout << str << endl; // Hello World

  // 2. Append n characters from another string starting at position pos
  string str2 = "Programming";
  str.append(str2, 3, 5); // Append "Prog"
  cout << str << endl;    // Hello WorldProg

  // 3. Append n copies of a character
  str.append(3, '!');  // Append "!!!"
  cout << str << endl; // Hello WorldProg!!!

  // 4. Append from char array
  const char *cstr = " C++";
  str.append(cstr);
  cout << str << endl; // Hello WorldProg!!! C++

  string ms = "";
  ms.append({'a', 'b', 'c'}); // Append "abc"
  cout << ms << endl;         // abc

  ms.append("xyz", 2);
  cout << ms << endl; // abcxy

  ms.append<string::iterator>(str.begin(), str.begin() + 5);
  cout << ms << endl; // abcxyHello

  cout << ms.at(4) << endl; // y
  cout << ms[4] << endl;    // y
  ms.replace(3, 2, "def");
  cout << ms << endl; // abcdefHello

  ms.replace(5, 2, 4, 'g');
  cout << ms << endl; // abcdeggggello

  string na = "Ayo";
  string nb = "bami";
  string nc = na + nb;
  cout << nc << endl; // Ayobami
  string nd = na;
  nd.replace<string::iterator>(nd.end(), nd.end(), nb.begin(), nb.end());
  cout << nd << endl; // Ayobami

  ms.erase(ms.begin() + 4);
  cout << ms << endl; // abcdggggello

  ms.erase(ms.begin() + 4, ms.begin() + 8);
  cout << ms << endl; // abcdello

  return 0;
}
