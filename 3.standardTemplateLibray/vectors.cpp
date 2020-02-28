#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<string> strings(5); // 也可以 vector<string> 不定义起始size

  strings[3] = "Geralt";
  strings[0] = "Yennifer";
  strings[1] = "Ciri";
  strings[2] = "Tris";
  cout << strings[3] << endl;
  cout << strings.size() << endl;

  strings.push_back("one"); // 从最后push进去
  strings.push_back("two");
  strings.push_back("three");

  cout << strings[2] << endl;
  cout << strings[3] << endl;
  cout << strings.size() << endl;
  cout << strings[20] << endl; // 并不会报错，但是避免，没有意义

  cout << "for loop to iterate: " << endl;
  for (int i = 0; i < strings.size(); i++) {
    cout << strings[i] << endl;
  }
  cout << endl;

  // 创建一个iterator，strings.begin()就是一个iterator
  vector<string>::iterator it;
  cout << "iterator goes: " << endl;

  for (it = strings.begin(); it != strings.end(); it++) {
    cout << *it << endl;
  }

  return 0;
}