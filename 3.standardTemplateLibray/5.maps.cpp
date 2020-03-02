#include <iostream>
#include <map>

using namespace std;

int main() {
    cout << endl;

    map< string, int > ages;

    ages["mike"] = 40;
    ages["Raj"] = 20;
    ages["Vicky"] = 30;

    cout << ages["Raj"] << endl;
    cout << ages.size() << endl;
    cout << ages["Hi"] << endl; // 这样默认添加了一项
    cout << ages.size() << endl;

    // 1
    pair<string, int> addToMap("Peter", 50);
    ages.insert(addToMap);
    // 2
    ages.insert(pair<string, int>("John", 10));
    // 3
    ages.insert(make_pair("Hanz", 60));

    /*
     * 遍历 map 
     */
    map< string, int >::iterator it;
    for (it = ages.begin(); it != ages.end(); it++) {
        cout << it->first << ": " << it->second << endl;
    }
    cout << endl;
    for (it = ages.begin(); it != ages.end(); it++) {
        pair< string, int > age = *it;
        cout << age.first << ": " << age.second << endl;
    }

    // 如果想测试某 key 是否在map里，find 会返回一个iterator
    // 当数据出现时，它返回数据所在位置的iterator
    if (ages.find("Raj") != ages.end()) { //返回一个iterator
        cout << "Found key." << endl;
    } else {
        cout << "Key not Fount." << endl;
    }

    return 0;
}