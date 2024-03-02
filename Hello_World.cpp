#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    //Create Filestream object, open joke file read-only
    fstream script;
    script.open("B.txt", fstream::in);

    //Print Hello World, wait for user input before joke
    cout << "Hello World" << "\n\n" << "Press Enter to Continue\n";
    cin.get();
    
    //Create line object, then iterate through text file and output text to console
    string line;
    if(script.is_open())
    {
        //Delay variable used in sleep function
        float n = 1000;

        //Iterate through file as long as there are more lines to grab
        while(getline(script, line))
        {
            //Output line to console
            cout << line << '\n';

            //Start slow, increase speed with each line until no sleep
            Sleep(n);
            if(n > 0)
            {
                //Subtract percentage of n, gives feeling of ramping up speed
                n -= n/10;
            }
        }
    }

    return 0;
}