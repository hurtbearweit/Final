#include"public.h"
#include"welcome.h"

 
void welcome( )
{
	int gd=VGA,gm=VGAHI;
	initgraph(&gd,&gm,"C:\\BORLANDC\\BGI");
	setbkcolor(LIGHTGRAY);
	setcolor(RED);
	setlinestyle(SOLID_LINE,USERBIT_LINE,NORM_WIDTH);
	puthz(243,100,"�人���ֹ�",32,32,RED);
	setcolor(RED);
    settextjustify(LEFT_TEXT, TOP_TEXT);
    settextstyle(TRIPLEX_FONT, HORIZ_DIR,2);
	outtextxy(250,440,"Copyright by AIA 2023 BZX and TX");
	delay(200);
	puthz(252,200,"��",32,32,RED);
	delay(100);
	puthz(304,200,"ӭ",32,32,RED);
	delay(100);
	puthz(356,200,"��",32,32,RED); 
	delay(100);
} 

void Bye()
{
	cleardevice();
	setbkcolor(LIGHTGRAY);
	puthz(243,100,"�人���ֹ�",32,32,RED);
	setcolor(RED);
    settextjustify(LEFT_TEXT, TOP_TEXT);
    settextstyle(TRIPLEX_FONT, HORIZ_DIR,2);
	outtextxy(250,440,"Copyright by AIA 2023 BZX and TX");
	delay(200);
	puthz(248,300,"��",24,24,4);
    delay(100);
    puthz(272,300,"л",24,24,4);
    delay(100);
    puthz(296,300,"��",24,24,4);
    delay(100);
	puthz(320,300,"��",24,24,4);
    delay(100);
    puthz(344,300,"ʹ",24,24,4);
    delay(100);
    puthz(368,300,"��",24,24,4);
    delay(100);
    puthz(224,350,"��ӭ�����´ι���",24,24,RED);
	
} 
