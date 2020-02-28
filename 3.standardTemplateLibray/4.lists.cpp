#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main() {

    cout << endl;

    list< int > numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_front(4);

    // 从list中 添加 的时候用insert：
    list< int >::iterator it = numbers.begin();
    cout << "Initialized: " << *it << endl;
    numbers.insert(it, 100);
    it++;
    numbers.insert(it, 200);
    for (it = numbers.begin(); it != numbers.end(); it++) {
        cout << *it << endl;
    }
    cout << endl;

    // 删除的时候：
    list< int >::iterator eraseIt = numbers.begin();
    eraseIt++;
    eraseIt++;
    cout << "want to erase: " << *eraseIt << endl;
    eraseIt = numbers.erase(
        eraseIt); // iterator会重新指向被删掉的 element 的下一个 element。
    cout << "Now the iter is: " << *eraseIt << endl;

    for(it = numbers.begin(); it != numbers.end();) {
        if (*it == 3) {
            numbers.insert(it, 1234);
        }
        if (*it == 1) {
            it = numbers.erase(it); // 会自动指向下一个。
        } else {
            it++;
        }
    } 

    for (it = numbers.begin(); it != numbers.end(); it++) {
        cout << *it << endl;
    }
    return 0;
}