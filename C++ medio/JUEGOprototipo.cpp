#include <stdio.h>
#include <conio.h>
#include <windows.h>








void Gotoxy(int x, int y){
    HANDLE hCon;
     hCon= GetStdHandle(STD_OUTPUT_HANDLE);
     COORD dvPos;
    dvPos.X = x;
    dvPos.Y= y;
   
    SetConsoleCursorPosition(hCon, dvPos);
}

int main(){


int x=10, y=10;
Gotoxy(x,y); printf("*");


bool game_over=false;
while(!game_over){
   


if(_kbhit()){
    char tecla = _getch();
    Gotoxy(x,y);printf(" ");
    if(tecla == 'j')  x--;
    if(tecla == 'l') x++;
    if(tecla == 'i') y--;
    if(tecla == 'k') y++;
     Gotoxy(x,y); printf("*");

}
Sleep(30);
}



    return 0;
}