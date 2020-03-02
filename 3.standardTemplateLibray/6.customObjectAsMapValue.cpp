#include <iostream>
#include <map>

using namespace std;

class Person {
  private:
    string name;
    int age;

  public:
    Person() : name(""), age(0) {}
    Person(string name, int age) : name(name), age(age) {}

    void print() {
        cout << name << ": " << age << endl;
    }
};

int main() {
    cout << endl;

    map< int, Person > people;

    people[0] = Person("Mike", 10);
    people[1] = Person("Vicky", 20);
    people[2] = Person("John", 30);

    for (map< int, Person >::iterator it = people.begin(); it != people.end(); it++) {
        cout << it->first << ". " << flush;
        it->second.print();
    }

    return 0;
}
