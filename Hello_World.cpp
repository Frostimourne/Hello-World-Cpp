#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    fstream script;
    script.open("B.txt", fstream::in);
    cout << "Hello World" << "\n\n" << "Press Enter to Continue\n";
    cin.get();
    
    string line;
    if(script.is_open())
    {
        float n = 1000;
        while(getline(script, line))
        {
            cout << line << '\n';
            Sleep(n);
            if(n > 0)
            {
                n -= n/10;
            }
        }
    }

    return 0;
}