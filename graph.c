#include"public.h"
#include"graph.h"

void stablack(int x, int y, int r)
{
	setcolor(BLACK);
	setfillstyle(1, BLACK);
	pieslice(x, y, 0, 360, r);
	setcolor(BLACK);
	line(x, y, x + r, y);
}

void cover(int lefttop_x, int lefttop_y, int rightbottom_x, int rightbottom_y, int color)
{
	setcolor(color);
	setfillstyle(SOLID_FILL, color);
	bar(lefttop_x, lefttop_y, rightbottom_x, rightbottom_y);
}

void highlight(int lefttop_x, int lefttop_y, int rightbottom_x, int rightbottom_y, int color)//画眼颜色矩形边框
{
	setlinestyle(SOLID_LINE, 0, 3);
	setcolor(color);
	rectangle(lefttop_x, lefttop_y, rightbottom_x, rightbottom_y);
}

void tline(int lefttop_x, int lefttop_y, int rightbottom_x, int rightbottom_y,int color)//按指定颜色画粗线 
{
	setcolor(color);
	setlinestyle(0,0,3);
	line(lefttop_x-1,lefttop_y,rightbottom_x-1,rightbottom_y);
	line(lefttop_x+1,lefttop_y,rightbottom_x+1,rightbottom_y);
}

void graph(int lefttop_x, int lefttop_y, int rightbottom_x, int rightbottom_y)////画红色的表格的一个框 
{
	setlinestyle(SOLID_LINE, 0, 3);
	setcolor(RED);
	rectangle(lefttop_x, lefttop_y, rightbottom_x, rightbottom_y);
	line(lefttop_x+150,lefttop_y,lefttop_x+150,rightbottom_y);
	line(lefttop_x+300,lefttop_y,lefttop_x+300,rightbottom_y);
	line(lefttop_x+450,lefttop_y,lefttop_x+450,rightbottom_y);
}

void sgraph(int lefttop_x, int lefttop_y, int rightbottom_x, int rightbottom_y)////画红色的表格的一个框 
{
	setlinestyle(SOLID_LINE, 0, 3);
	setcolor(RED);
	rectangle(lefttop_x, lefttop_y, rightbottom_x, rightbottom_y);
	line(lefttop_x+150,lefttop_y,lefttop_x+150,rightbottom_y);
	line(lefttop_x+450,lefttop_y,lefttop_x+450,rightbottom_y);
}

void bkcolor()
{
	cover(0,0,639,479,WHITE);
}

void zline(int A,int B)
{
	if((A==0&&B==1)||(A==1&&B==0))
	{
		tline(375,400,450,375,RED);
		delay(500);
	}
	else if((A==1&&B==2)||(A==2&&B==1))
	{
		tline(450,360,460,320,RED);
		delay(500);
	}
	else if((A==2&&B==3)||(A==3&&B==2))
	{
		tline(465,320,520,215,RED);
		delay(500);
	}
	else if((A==3&&B==6)||(A==6&&B==3)) 
	{
		tline(520,215,410,165,RED);
		delay(500);
		tline(410,165,350,270,RED);
		delay(500);
		tline(350,270,300,270,RED);
		delay(500);
		tline(300,270,285,235,RED);
		delay(500);
		tline(285,235,160,200,RED);
		delay(500);
	}
	else if((A==3&&B==5)||(A==5&&B==3))
	{
		tline(520,215,410,165,RED);
		delay(500);
		tline(410,165,335,155,RED);
		delay(500);
	}
	else if((A==4&&B==5)||(A==5&&B==4))
	{
		tline(335,155,390,80,RED);
		delay(500);
	}
	else if((A==5&&B==6)||(A==6&&B==5))
	{
		tline(335,155,195,170,RED);
		delay(500);
	}
	else if((A==6&&B==7)||(A==7&&B==6))
	{
		tline(160,200,170,330,RED);
		delay(500);
	}
	else if((A==8&&B==0)||(A==0&&B==8))
	{
		tline(320,355,380,400,RED);
		delay(500);
	}
	else if((A==8&&B==1)||(A==1&&B==8))
	{
		tline(320,355,450,380,RED);
		delay(500);
	}
	else if((A==8&&B==2)||(A==2&&B==8))
	{
		tline(320,355,465,320,RED);
		delay(500);
	}
	else if((A==8&&B==7)||(A==7&&B==8))
	{
		tline(320,355,170,365,RED);
		delay(500);
	}
}

void Light(int tag)
{
	switch(tag)
	{
		case 0:
			highlight(347,394,410,425,YELLOW);
			break;
		case 1:
			highlight(415,345,476,375,YELLOW);
			break;
		case 2:
			highlight(432,286,493,314,YELLOW);
			break;
		case 3:
			highlight(491,186,554,214,YELLOW);
			break;
		case 4:
			highlight(350,43,420,70,YELLOW);
			break;
		case 5:
			highlight(305,120,366,144,YELLOW);
			break;
		case 6:
			highlight(130,155,190,185,YELLOW);
			break;
		case 7:
			highlight(137,335,200,360,YELLOW);
			break;
		case 8:
			highlight(283,325,344,351,YELLOW);
			break;
	}
}

void  draticket()
{
	            setfillstyle(SOLID_FILL, WHITE);
                bar(200,180,440,300);
                rectangle(200,180,440,300);
                setfillstyle(SOLID_FILL, WHITE);
		        puthz(274,220,"正在购票",24,24,RED);
		        stablack(282,270,3);
		        stablack(282,270,3);
		        delay(500);
		        stablack(320,270,3);
		        delay(500);
		        stablack(358,270,3);
		        delay(500);
		        setlinestyle(SOLID_LINE,0,NORM_WIDTH);
                setfillstyle(SOLID_FILL, WHITE);
                bar(200,180,440,300);
                rectangle(200,180,440,300);
                setfillstyle(SOLID_FILL, WHITE);
		        puthz(274,230,"订购成功",24,24,RED);
		        delay(3000);
}
void drajudge()
{
	                setlinestyle(0,0,1);
                    setfillstyle(1, WHITE);
                    bar(200,180,440,300);
                    rectangle(200,180,440,300);
                    setfillstyle(1, WHITE);
		            puthz(235,210,"禁止输入违法字符",24,24,RED);
					puthz(235,240,"您只能输入纯数字",24,24,RED);
					delay(2000);
}
void drainquire(int x1,int y1,DATE *b)
{
	puthz(x1,y1,"请选择日期",24,24,RED);
	setcolor(GREEN);
	outtextxy(80,y1+30,b[0].month);
	outtextxy(93,y1+30,".");
	outtextxy(100,y1+30,b[0].day);
	puthz(140,y1+30,"数量",24,24,GREEN);
	setfillstyle(1,LIGHTGRAY);
	bar(200,y1+25,400,y1+50);
	outtextxy(80,y1+60,b[1].month);
	outtextxy(93,y1+60,".");
	outtextxy(100,y1+60,b[1].day);
	puthz(140,y1+60,"数量",24,24,GREEN);
	setfillstyle(1,LIGHTGRAY);
	bar(200,y1+55,400,y1+80);
	outtextxy(80,y1+90,b[2].month);
	outtextxy(93,y1+90,".");
	outtextxy(100,y1+90,b[2].day);
	puthz(140,y1+90,"数量",24,24,GREEN);
	setfillstyle(1,LIGHTGRAY);
	bar(200,y1+85,400,y1+110);
	outtextxy(80,y1+120,b[3].month);
	outtextxy(93,y1+120,".");
	outtextxy(100,y1+120,b[3].day);
	puthz(140,y1+120,"数量",24,24,GREEN);
	setfillstyle(1,LIGHTGRAY);
	bar(200,y1+115,400,y1+140);
	outtextxy(80,y1+150,b[4].month);
	outtextxy(93,y1+150,".");
	outtextxy(100,y1+150,b[4].day);
	puthz(140,y1+150,"数量",24,24,GREEN);
	setfillstyle(1,LIGHTGRAY);
	bar(200,y1+145,400,y1+170);
	setfillstyle(1,GREEN);
	bar(250,y1+180,350,y1+210);
	puthz(252,y1+185,"确认订购",24,24,WHITE);
}
void Star(int x,int y)
{
	setcolor(WHITE);
	setlinestyle(0,0,1);
	
	line(x,y+15,x+15,y+15);
	line(x+15,y+15,x+19,y);
	line(x+19,y,x+23,y+15);
	line(x+23,y+15,x+38,y+15);
	line(x,y+15,x+13,y+22);
	line(x+13,y+22,x+9,y+37);
	line(x+9,y+37,x+19,y+27);
	line(x+19,y+27,x+29,y+37);
	line(x+29,y+37,x+25,y+27);
	line(x+25,y+27,x+38,y+15);
}

void Ystar(int x,int y)
{
	setcolor(YELLOW);
	setlinestyle(0,0,3);
	
	line(x,y+15,x+15,y+15);
	line(x+15,y+15,x+19,y);
	line(x+19,y,x+23,y+15);
	line(x+23,y+15,x+38,y+15);
	line(x,y+15,x+13,y+22);
	line(x+13,y+22,x+9,y+37);
	line(x+9,y+37,x+19,y+27);
	line(x+19,y+27,x+29,y+37);
	line(x+29,y+37,x+25,y+27);
	line(x+25,y+27,x+38,y+15);
	
	line(x+2,y+16,x+37,y+16);
	line(x+6,y+18,x+35,y+18);
	line(x+10,y+20,x+30,y+20);
	line(x+14,y+22,x+27,y+22);
	
	line(x+16,y+10,x+16,y+30);
	line(x+18,y+5,x+18,y+28);
	line(x+19,y,x+19,y+27);
	line(x+20,y+5,x+20,y+28);
	line(x+22,y+10,x+22,y+30);
	
	line(x+13,y+25,x+13,y+33);
	line(x+24,y+25,x+24,y+33);
}
