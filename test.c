#include <stdio.h>
#include <conio.h>
#include <windows.h>

void gotoxy(short x, short y);

void main(){
	int n,i,j;
	
	printf("Year:\n");
	
	gotoxy(15,0);
	printf("Is it a leap year?\n");
	for (i=1;i<=7;++i){
		scanf("%d", &n);
		
		j=i;
		gotoxy(21,j);
		if ((n%4==0 && n%100==0 && n%400==0) || (n%4==0 && n%100!=0)){
			printf("Yes\n");
		} else {
			printf("No\n");
		}
		++j;
	}
}

void gotoxy(short x, short y) {
	COORD pos ={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}