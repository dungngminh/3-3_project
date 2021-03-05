#include <bits/stdc++.h>      																	
#include <windows.h>   											// require to beeep					
#include <stdlib.h>  																		                                                                      

using namespace std;

int timeWait = 120; 			// not be early or late																

DWORD WINAPI aThread(LPVOID lpParameter)
{
        char *msg = (char *)lpParameter;
        int i;
        for(i=0; msg[i]!='\0'; i++)														
        {
            cout << msg[i];
            cout.flush();																
            Sleep(timeWait);	
        }														
        return 0;
}
HANDLE printMess(string &msg, HANDLE h)
{
    if(h!=0)
        WaitForSingleObject(h, INFINITE); 												
    LPVOID lpString = (LPVOID)msg.c_str();
    HANDLE myHandle = CreateThread(0, 0 ,aThread, lpString, 0, 0);
    return myHandle;
}

int main()
{
    //Quang 4 va 5
    int C = 523; 
    int _C = 554; //C#
    int D = 587;
    int _D = 622; //D#
    int E = 659;
    int F = 698;
    int _F = 740; //F#
    int G = 784;
    int _G = 831; //G#
    int A = 880;
    int A1 = 1760;
    int _A = 932; //A#
    int B = 988;


    string s = "Happy Birthday To You...\n";											    
    HANDLE h = printMess(s, 0);                                                          

    //AABAD_C
    Beep(A,300);
	Beep(A,300);
	Beep(B,400);
	Beep(A,380);
	Beep(D,500);
	Beep(_C,400);


    s = "Happy Birthday To You...\n";
    h = printMess(s, h);

    //AABAED
    Beep(A,282);
	Beep(A,282);
	Beep(B,400);
	Beep(A,382);
	Beep(E,500);
	Beep(D,600);

    s = "Happy Birthday dear .....\n";
    h = printMess(s, h);

    //AAA1_FD_CB
    Beep(A,282);
	Beep(A,282);
	Beep(A1,350);
	Beep(_F,302);
	Beep(D,400);
	Beep(_C,400);
	Beep(B,500);

    s = "Happy Birthday to you\n";
    h = printMess(s, h);

    //GG_FDED
    Beep(G,340);
	Beep(G,220);
	Beep(_F,220);
	Beep(D,228);
	Beep(E,286);
	Beep(D,270);

    h = printMess(s, h);

    return 0;
}
