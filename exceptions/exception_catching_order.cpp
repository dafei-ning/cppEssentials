#include <iostream>
#include <exception>

using namespace std;

void goesWrong()
{
    bool error1Detected = true;
    bool error2Detected = true;

    if (error1Detected)
    {
        throw bad_alloc();
    }
    if (error2Detected)
    {
        throw exception();
    }
}

int main()
{
    // 顺序应按照递增继承的顺序，exception在最上
    try
    {
        goesWrong();
    }
    catch (bad_alloc &e)
    {
        cout << "catching bad_alloc: " << e.what() << endl;
    }
    catch (exception &e)
    {
        cout << "catching exception: " << e.what() << endl;
    }
    return 0;
}