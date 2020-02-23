#include <iostream>

using namespace std;

#pragma pack(push, 1)

struct Person
{
    char name[50];
    int age;
    double weight;
};

#pragma pack(pop)

int main()
{

    cout << "" << endl;
    
    Person person;

    cout << "object size: " << sizeof(person) << endl;
    cout << "name size: " << sizeof(person.name) << endl;
    cout << "age size: " << sizeof(person.age) << endl;
    cout << "weight size: " << sizeof(person.weight) << endl;

    return 0;
}