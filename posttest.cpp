#include <curses.h>
#include <windows.h>


using namespace std;
int main(){
	system("color 50");
	initscr();
	
	printw("=");
	refresh();
	Sleep(5000);
	clear();
	
	for(int i=1; i<=70; i++){
	
	mvprintw(1,1, "=");
	refresh();
	Sleep(5000);
	clear();
}
	
}
