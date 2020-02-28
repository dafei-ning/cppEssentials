#include <iostream>
#include <vector>

using namespace std;

int main() {
  cout << endl;
  // capacity is the internal array size the vector reserved.
  // size is the actual number of elements added.

  vector<string> strings;

  strings.push_back("1 Geralt");
  strings.push_back("2 Yennifer");
  strings.push_back("3 Ciri");

  cout << "Size of strings: " << strings.size() << endl;

  vector<double> numbers(3);

  cout << "Size of numbers: " << numbers.size() << endl;
  cout << "Capacity of numbers initialized: " << numbers.capacity() << endl;

  // numbers.capacity 快用完的时候会 2倍增长
  // for (int i = 0; i < 50; i++)
  // {
  //     numbers.push_back(i);
  //     cout << "Capacity of numbers now: " << numbers.capacity() << endl;
  // }

  //观察capacity 增长规律：
  cout << endl;
  int cap = numbers.capacity();
  for (int i = 0; i < 10000; i++) {
    if (numbers.capacity() != cap) {
      cap = numbers.capacity();
      cout << "Capacity of numbers changed to: " << numbers.capacity() << endl;
    }
    numbers.push_back(i);
  }

  // size can be cleared, while capacity cannot
  // resize() 也不行
  cout << endl;
  cout << "Size of numbers before cleared: " << numbers.size() << endl;
  cout << "Capacity of numbers before cleared:" << numbers.capacity() << endl;
  numbers.clear();
  cout << "Size of numbers AFTER cleared: " << numbers.size() << endl;
  cout << "Capacity of numbers AFTER cleared:" << numbers.capacity() << endl;
  numbers.resize(200);
  cout << "Size AFTER resized: " << numbers.size() << endl;
  cout << "Capacity AFTER resized:" << numbers.capacity() << endl;

  return 0;
}