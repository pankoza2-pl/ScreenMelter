#include <windows.h>
#include <time.h>

int main() {
	time_t t;
	srand((unsigned) time(&t));
	
	HDC screenDC = GetDC(NULL);
	
	int scrWidth = GetDeviceCaps(screenDC, HORZRES);
	int scrHeight = GetDeviceCaps(screenDC, VERTRES);
	
	int x;
	while(1){
		HDC screenDC = GetDC(NULL);
		x = rand() % scrWidth;
		BitBlt(screenDC, x, 1, 10, scrHeight, screenDC, x, 0, SRCCOPY);
		Sleep(2);
	}
}
