#include <iostream>
using namespace std;

#include <Windows.h>

void doclick(int howLong)
{
    while(1)
    {
        mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

        Sleep(howLong);
        
    }
}

int main()
{

    while(1)
    {
        system("cls");
        cout << "--------------------------------------------------------" << endl <<
                "|             Welcome To Ben's Autoclicker             |" << endl <<
                "| Please set the interval in milliseconds (1/1000) for |" << endl <<
                "|  the mouse to perform a left-click programmatically: |" << endl <<
                "--------------------------------------------------------" << endl;
        int interval;
        cin >> interval;
    
        doclick(interval);
    }
    
}