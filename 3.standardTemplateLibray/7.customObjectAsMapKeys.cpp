#include <iostream>
#include <map>

using namespace std;

class Person {
  private:
    string name;
    int age;

  public:
    // default
    Person() : name(""), age(0) {}
    // Copy
    Person(const Person &other) {
        cout << "Copy the person: " << other.name << endl;
        name = other.name;
        name = other.age;
    }
    // Custom
    Person(string name, int age) : name(name), age(age) {}

    void print() const{
        cout << name << ": " << age << endl;
    }

    bool operator<(const Person &other) const {
        return name < other.name;
    }
};

int main() {
    cout << endl;

    map< Person, int > people;

    people[Person("Mike", 10)] = 1;
    people[Person("Vicky", 20)] = 2;
    people[Person("John", 30)] = 3;
    people[Person("Jack", 40)] = 4;

    people.insert(make_pair(Person("Bob", 45), 5));
    //people.insert(make_pair(3, Person("Sue", 40)));

    for (map< Person, int >::iterator it = people.begin(); it != people.end(); it++) {
        
        cout << it->second << ": " << flush;
        it->first.print();
    }

    return 0;
}
