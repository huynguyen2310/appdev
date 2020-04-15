// Usually in header file, following information ar included
// 1. function declarations
// 2. constant definitions
// 3. conditional compilation (will be discussed later)

//constant definitions
#define  ESC 27
//#define BLACK 30, instead of using #define, it's better to use enumeration
enum FG{BLACK=30,RED,GREEN,YELLOW,BLUE,MAGENTA,CYAN,WHITE};
#define bg(c) (c+10)		//this is callef maro definition

#define UNICODE		// for contitional compilation
#define BAR "\u2590"
#define BOX "\u25A0"

//#define DEBUG		// for onfitional compilaation

typedef struct{		// this struct will define a compound data, which consists
	int row;		// of the number of rows and the number of columns of our
	int col;		// screen
}Position;

// function declarations
void clearscreen(void);
void setbgcolor(int);
void setcolors(int, int);
void setfgcolor(int);
void resetcolors(void);
void gotoXY(int, int);
void drawbar(int, int);
void drawrect(int, int, int, int);
Position getscreensize(void);
