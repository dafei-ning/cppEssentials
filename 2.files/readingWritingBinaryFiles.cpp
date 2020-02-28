#include <fstream>
#include <iostream>

using namespace std;

struct Person {
    char name[50];
    int age;
    double weight;
};

int main() {

    Person someone = {"Geralt", 110, 5.6};

    string fileName = "test.bin";

    /*
     * write binary file
     */
    ofstream outputFile;
    outputFile.open(fileName, ios::binary); // default: | ios::out

    if (outputFile.is_open()) {
        // (char *)&someone == reinterpret_cast<char *>(&someone)
        outputFile.write((char *)&someone, sizeof(someone));
        outputFile.close();
    } else {
        cout << "Could not create file: " + fileName << endl;
    }

    /*
     * read binary file
     */

    Person someoneElse = {};

    ifstream inputFile;
    inputFile.open(fileName, ios::binary); // default: | ios::out

    if (inputFile.is_open()) {
        // (char *)&someone == reinterpret_cast<char *>(&someone)
        inputFile.read((char *)&someoneElse, sizeof(someoneElse));
        inputFile.close();
    } else {
        cout << "Could not read file: " + fileName << endl;
    }
    cout << someoneElse.name << ", " << someoneElse.age << ", "
         << someoneElse.weight << endl;

    return 0;
}