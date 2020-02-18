#include <iostream>
#include <exception>

using namespace std;

class MyException : public exception
{
public:
    virtual const char *what() const throw()
    {
        return "try something wrong!";
    }
};

class Test
{
public:
    void goesWrong()
    {
        throw MyException();
    }
};

int main()
{
    try
    {
        Test test;
        test.goesWrong();
    }
    catch (MyException &e)
    {
        cout << e.what() << endl;
    }
}