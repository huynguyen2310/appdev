
// this file will be used to test functions in screen.c

#include <stdio.h>
#include <unistd.h>
#include "screen.h"
#include "comm.h"
#include <time.h>
#include <stdlib.h>
/*//int main(void) {
	Position cur = getscreensize(); 	//get screen size
	char postdata[100];
	sprintf(postdata, "row=%d&col=%d&id=e1900322", cur.row, cur.col);
	sendpost(URL, postdata);
	gotoXY(1,1);
	printf("Screen size: row=%d, col=%d\n", cur.row, cur.col);
	printf("Press any key to continue\n");
	getchar();	// wait for the user to press a key
	getchar();
	int ff, bb;
	float step = (float)cur.col/cur.row;
	for(int i=1; i<=cur.row; i++){
		ff = (i+1)%8+BLACK;
		bb = (i+2)%8+BLACK;
		setcolors(ff, bg(bb));
		clearscreen();
		drawrect(10, 10, 5, 30);
		gotoXY(cur.row-i, (i-1)*step+1);
		printf("HELLO\n");
		usleep(250000);//sleep(1);
	}

setfgcolor(MAGENTA);
    gotoXY(14,35);
    printf("E1900322\n");
    //getchar();  // wait for the user to press a key
    drawbar(30, 30);
    drawbar(50,30);
	getchar();	// after drawing bars, wait for a key
	resetcolors();
	clearscreen();
	printf("This text is displayed in default color\n");
	getchar();
}*/
//#include <stdio.h>	//for printf(), scanf() functions include <stdlib.h>	//for rand(), srand() functions include <time.h>	//for time() 
//#include "screen.h"
int main(void) {
	printf("We will generate a number of random numbers\n");
	printf("Press any key to continue...\n");
	getchar();
    
    clearscreen();
    
	srand(time(NULL));
	
	for(int i=0; i<100; i++)
	{
		int a = rand()%40; //rand function gives us pseudo-random numbers. If we want to get "real" random numbers from this function, we need to 
//change the SEED before we use this function. //To change the SEED, you need to call srand();
		int b = rand()%80;
        if (a%2==0)
		//printf("%d %d\n", a, b);
        {
            setfgcolor(YELLOW);
            printf("%c[%d;%dH", 0x1B, a, b);
            printf("%s\n", BAR);
        }
        else
        {
            setfgcolor(MAGENTA);
            printf("%c[%d;%dH", 0x1B, a, b);
            printf("%s\n", BAR);
        }
    }
	return 0;
}
