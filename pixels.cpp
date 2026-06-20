#include <iostream>
#include <windows.h>
#include <vector>
#include <cmath>
#include <algorithm>
#include <ctime>
#include <conio.h>

using namespace std;

const int W = 160;
const int H = 30;

// 🎨 Color
void setColor(int c){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

// Cursor hide
void hideCursor(){
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.bVisible = FALSE;
    info.dwSize = 1;
    SetConsoleCursorInfo(h, &info);
}

// Cursor move
void gotoxy(int x,int y){
    COORD c={(SHORT)x,(SHORT)y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

// Canvas
vector<vector<char>> create(){
    return vector<vector<char>>(H, vector<char>(W,' '));
}

// Distance
double dist(double px,double py,double x1,double y1,double x2,double y2){
    double dx=x2-x1, dy=y2-y1;
    if(dx==0 && dy==0) return hypot(px-x1,py-y1);

    double t=((px-x1)*dx+(py-y1)*dy)/(dx*dx+dy*dy);
    t=max(0.0,min(1.0,t));

    double lx=x1+t*dx, ly=y1+t*dy;
    return hypot(px-lx,py-ly);
}

// Stroke
void stroke(vector<vector<char>>&m,double x1,double y1,double x2,double y2,double r){
    for(int y=0;y<H;y++){
        for(int x=0;x<W;x++){
            if(dist(x,y,x1,y1,x2,y2)<=r){
                m[y][x]='#';
            }
        }
    }
}

// FULL ASCII CHAR
void draw_char(vector<vector<char>>&m,char ch,int ox){
    double r=1.5;
    int L=ox+2, R=ox+12;
    int T=2, B=25;
    int M=(T+B)/2;
    int C=(L+R)/2;

    switch(ch){
        case 'A': stroke(m,L,B,C,T,r); stroke(m,C,T,R,B,r); stroke(m,L+2,M,R-2,M,r); break;
        case 'B': stroke(m,L,T,L,B,r); stroke(m,L,T,R-2,T+2,r); stroke(m,L,M,R-2,M,r); stroke(m,L,B,R-2,B-2,r); break;
        case 'C': stroke(m,R,T,L,T,r); stroke(m,L,T,L,B,r); stroke(m,L,B,R,B,r); break;
        case 'D': stroke(m,L,T,L,B,r); stroke(m,L,T,R,M,r); stroke(m,R,M,L,B,r); break;
        case 'E': stroke(m,L,T,L,B,r); stroke(m,L,T,R,T,r); stroke(m,L,M,R-2,M,r); stroke(m,L,B,R,B,r); break;
        case 'F': stroke(m,L,T,L,B,r); stroke(m,L,T,R,T,r); stroke(m,L,M,R-2,M,r); break;
        case 'G': stroke(m,L,T,R,T,r); stroke(m,L,T,L,B,r); stroke(m,L,B,R,B,r); stroke(m,R,B,R,M,r); stroke(m,R,M,C,M,r); break;
        case 'H': stroke(m,L,T,L,B,r); stroke(m,R,T,R,B,r); stroke(m,L,M,R,M,r); break;
        case 'I': stroke(m,C,T,C,B,r); break;
        case 'J': stroke(m,R,T,R,B-3,r); stroke(m,R,B-3,C,B,r); stroke(m,C,B,L+2,B-3,r); break;
        case 'K': stroke(m,L,T,L,B,r); stroke(m,L,M,R,T,r); stroke(m,L,M,R,B,r); break;
        case 'L': stroke(m,L,T,L,B,r); stroke(m,L,B,R,B,r); break;
        case 'M': stroke(m,L,B,L,T,r); stroke(m,R,B,R,T,r); stroke(m,L,T,C,M,r); stroke(m,C,M,R,T,r); break;
        case 'N': stroke(m,L,B,L,T,r); stroke(m,R,B,R,T,r); stroke(m,L,T,R,B,r); break;
        case 'O': stroke(m,L,T,R,T,r); stroke(m,L,B,R,B,r); stroke(m,L,T,L,B,r); stroke(m,R,T,R,B,r); break;
        case 'P': stroke(m,L,T,L,B,r); stroke(m,L,T,R,T,r); stroke(m,L,M,R,M,r); break;
        case 'Q': stroke(m,L,T,R,T,r); stroke(m,L,B,R,B,r); stroke(m,L,T,L,B,r); stroke(m,R,T,R,B,r); stroke(m,R-2,B-2,R+2,B+2,r); break;
        case 'R': stroke(m,L,T,L,B,r); stroke(m,L,T,R,T,r); stroke(m,L,M,R,M,r); stroke(m,L,M,R,B,r); break;
        case 'S': stroke(m,L,T,R,T,r); stroke(m,L,T,L,M,r); stroke(m,L,M,R,M,r); stroke(m,R,M,R,B,r); stroke(m,L,B,R,B,r); break;
        case 'T': stroke(m,L,T,R,T,r); stroke(m,C,T,C,B,r); break;
        case 'U': stroke(m,L,T,L,B,r); stroke(m,R,T,R,B,r); stroke(m,L,B,R,B,r); break;
        case 'V': stroke(m,L,T,C,B,r); stroke(m,R,T,C,B,r); break;
        case 'W': stroke(m,L,T,L,B,r); stroke(m,R,T,R,B,r); stroke(m,L,B,C,M,r); stroke(m,C,M,R,B,r); break;
        case 'X': stroke(m,L,T,R,B,r); stroke(m,R,T,L,B,r); break;
        case 'Y': stroke(m,L,T,C,M,r); stroke(m,R,T,C,M,r); stroke(m,C,M,C,B,r); break;
        case 'Z': stroke(m,L,T,R,T,r); stroke(m,R,T,L,B,r); stroke(m,L,B,R,B,r); break;

        case '0': stroke(m,L,T,R,T,r); stroke(m,L,B,R,B,r); stroke(m,L,T,L,B,r); stroke(m,R,T,R,B,r); break;
        case '1': stroke(m,C,T,C,B,r); break;
        case '2': stroke(m,L,T,R,T,r); stroke(m,R,T,L,B,r); stroke(m,L,B,R,B,r); break;
        case '3': stroke(m,L,T,R,T,r); stroke(m,R,T,R,B,r); stroke(m,L,M,R,M,r); stroke(m,L,B,R,B,r); break;
        case '4': stroke(m,L,T,L,M,r); stroke(m,L,M,R,M,r); stroke(m,R,T,R,B,r); break;
        case '5': stroke(m,L,T,R,T,r); stroke(m,L,T,L,M,r); stroke(m,L,M,R,M,r); stroke(m,R,M,R,B,r); stroke(m,L,B,R,B,r); break;
        case '6': stroke(m,L,T,R,T,r); stroke(m,L,T,L,B,r); stroke(m,L,M,R,M,r); stroke(m,R,M,R,B,r); stroke(m,L,B,R,B,r); break;
        case '7': stroke(m,L,T,R,T,r); stroke(m,R,T,C,B,r); break;
        case '8': stroke(m,L,T,R,T,r); stroke(m,L,B,R,B,r); stroke(m,L,T,L,B,r); stroke(m,R,T,R,B,r); stroke(m,L,M,R,M,r); break;
        case '9': stroke(m,L,T,R,T,r); stroke(m,L,T,L,M,r); stroke(m,L,M,R,M,r); stroke(m,R,T,R,B,r); stroke(m,L,B,R,B,r); break;
    }
}

// MATRIX
void matrixRain(){
    system("cls");
    srand(time(0));

    for(int i=0;i<300;i++){
        int x=rand()%120;
        int y=rand()%30;

        gotoxy(x,y);
        setColor(10);
        cout<<(char)(33+rand()%94);
        Sleep(5);
    }
    getch();
}

// ASCII MODE
void asciiMode(){
    system("cls");

    setColor(14);
    cout<<"=== ASCII SOFTWARE ===\n\n";

    setColor(7);
    cout<<"Enter text: ";
    string input;
    cin>>input;

    for(char &c:input) c=toupper(c);

    vector<vector<char>> m=create();
    int offset=0;

    for(char c:input){
        draw_char(m,c,offset);
        offset+=16;
    }

    setColor(10);
    for(auto &row:m){
        for(char c:row) cout<<c;
        cout<<"\n";
    }

    cout<<"\nPress key...";
    getch();
}

// MOUSE MODE
void mouseMode(){
    system("cls");

    HANDLE hIn=GetStdHandle(STD_INPUT_HANDLE);
    DWORD mode;
    GetConsoleMode(hIn,&mode);
    SetConsoleMode(hIn,mode|ENABLE_MOUSE_INPUT);

    INPUT_RECORD rec;
    DWORD read;

    cout<<"Click anywhere (ESC to exit)\n";

    while(true){
        ReadConsoleInput(hIn,&rec,1,&read);

        if(rec.EventType==MOUSE_EVENT){
            if(rec.Event.MouseEvent.dwButtonState==FROM_LEFT_1ST_BUTTON_PRESSED){
                int x=rec.Event.MouseEvent.dwMousePosition.X;
                int y=rec.Event.MouseEvent.dwMousePosition.Y;

                gotoxy(0,5);
                setColor(10);
                cout<<"Clicked: "<<x<<","<<y<<"     ";
            }
        }

        if(GetAsyncKeyState(VK_ESCAPE)) break;
    }
}

// MENU
void menu(){
    system("cls");

    setColor(11);
    cout<<"========================================\n";
    setColor(14);
    cout<<"      FINAL PRO ASCII SOFTWARE          \n";
    setColor(11);
    cout<<"========================================\n";

    setColor(10);
    cout<<"\n1. Matrix Animation\n";
    cout<<"2. ASCII Text (A-Z 0-9)\n";
    cout<<"3. Mouse Mode\n";
    cout<<"4. Exit\n";

    setColor(7);
    cout<<"\nChoose: ";
}

// MAIN
int main(){
    system("mode con: cols=170 lines=45");
    hideCursor();

    while(true){
        menu();

        int ch;
        cin>>ch;

        if(ch==1) matrixRain();
        else if(ch==2) asciiMode();
        else if(ch==3) mouseMode();
        else if(ch==4) break;
        else{
            cout<<"Invalid!";
            Sleep(1000);
        }
    }
}
