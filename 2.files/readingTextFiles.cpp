#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    string inFileName = "text1.txt";

    ifstream inFile;

    inFile.open(inFileName, ios::in); // input the file for reading.

    if (inFile.is_open())
    {
        // 只 read 第一行第一个
        string line;
        inFile >> line;
        cout << "Line1 read: " << line << endl;

        // read 整个一条line，之前 inFile 给到 line 的 read 完所以不 read
        string line2;
        getline(inFile, line2);
        cout << "Line2 read: " << line2 << endl;

        // read 其他所有.
        string line3;
        while (inFile)
        {
            getline(inFile, line3);
            cout << "Line3 read: " << line3 << endl;
        }

        inFile.close();
    }
    else
    {
        cout << "Cannot open file for input reading: " << inFileName << endl;
    }

    return 0;
}