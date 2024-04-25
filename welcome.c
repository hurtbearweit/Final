#include"public.h"
#include"welcome.h"

 
void welcome( )
{
	int gd=VGA,gm=VGAHI;
	initgraph(&gd,&gm,"C:\\BORLANDC\\BGI");
	setbkcolor(LIGHTGRAY);
	setcolor(RED);
	setlinestyle(SOLID_LINE,USERBIT_LINE,NORM_WIDTH);
	puthz(243,100,"Îäºº»¶ÀÖ¹È",32,32,RED);
	setcolor(RED);
    settextjustify(LEFT_TEXT, TOP_TEXT);
    settextstyle(TRIPLEX_FONT, HORIZ_DIR,2);
	outtextxy(250,440,"Copyright by AIA 2023 BZX and TX");
	delay(200);
	puthz(252,200,"»¶",32,32,RED);
	delay(100);
	puthz(304,200,"Ó­",32,32,RED);
	delay(100);
	puthz(356,200,"Äú",32,32,RED); 
	delay(100);
} 

void Bye()
{
	cleardevice();
	setbkcolor(LIGHTGRAY);
	puthz(243,100,"Îäºº»¶ÀÖ¹È",32,32,RED);
	setcolor(RED);
    settextjustify(LEFT_TEXT, TOP_TEXT);
    settextstyle(TRIPLEX_FONT, HORIZ_DIR,2);
	outtextxy(250,440,"Copyright by AIA 2023 BZX and TX");
	delay(200);
	puthz(248,300,"¸Ð",24,24,4);
    delay(100);
    puthz(272,300,"Ð»",24,24,4);
    delay(100);
    puthz(296,300,"Äú",24,24,4);
    delay(100);
	puthz(320,300,"µÄ",24,24,4);
    delay(100);
    puthz(344,300,"Ê¹",24,24,4);
    delay(100);
    puthz(368,300,"ÓÃ",24,24,4);
    delay(100);
    puthz(224,350,"»¶Ó­ÄúµÄÏÂ´Î¹âÁÙ",24,24,RED);
	
} 
