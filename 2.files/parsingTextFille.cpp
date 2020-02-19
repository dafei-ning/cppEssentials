#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string fileName = "stats.txt";
    ifstream input;

    input.open(fileName);

    if (!input.is_open())
    {
        cout << "File " << fileName << " cannot open!" << endl;
        return 1;
    }

    while (input)
    {
        string line;

        getline(input, line, ':');

        if (!input)
        {
            break;
        }

        int consolePrice;
        input >> consolePrice; // 如果后面没有了，他就会给出最后一个可读的int，这什么鬼

        //input.get(); // 获得下一个字符，在这里就是获得了空行符.
        input >> ws; // tell the white space

        cout << "'" << line << "' -- '" << consolePrice << "'" << endl;
    }

    input.close();

    return 0;
}