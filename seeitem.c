#include"public.h"
#include"seeitem.h"

void Seeitem(int *page,int *jun,int *num)
{  
	int tag;
	int pos1=0;
	int pos2=0;   //pos1与pos2用来监测消息提醒按钮
	int pos3=0;
	int pos4=0;
	int pos5=0;
	int pos6=0;
	int pos7=0;
	clrmous(MouseX,MouseY);
    delay(100);
    save_bk_mou(MouseX,MouseY);
    Draw_Sitem();
	while(1)
	{
		newmouse(&MouseX,&MouseY,&press);
		if(*jun==1&&pos1==0)
		{     setcolor(RED);
		      circle(115,385,5);
			  setfillstyle(1,RED);
			  floodfill(115,385,RED);
			  pos1=1;
			  pos2=0;
		}
		if(*jun==0&&pos2==0)
		{
			  setcolor(DARKGRAY);
		      circle(115,385,5);
			  setfillstyle(1,DARKGRAY);
			  floodfill(115,385,DARKGRAY);
			  pos2=1;
			  pos1=0;
		}
		if(MouseX>60&&MouseX<240&&MouseY>100&&MouseY<200)
		{
			if(mouse_press(60,100,240,200)==2)
			{
				MouseS=1;
				if(tag==0&&pos3==0)
				{
					tag=1;
					pos3=1;
					Light_Seeitem(pos3);
				}
				continue;
			}
			else if(mouse_press(60,100,240,200)==1)
			{
				MouseS=0;
				clrmous(MouseX,MouseY); 
				*page=4;
				break;
			}
		}   //查看游乐项目
		
		if(MouseX>60&&MouseX<240&&MouseY>260&&MouseY<360)
		{
			if(mouse_press(60,260,240,360)==2)
			{
				MouseS=1;
				if(tag==0&&pos4==0)
				{
					tag=1;
					pos4=2;
					Light_Seeitem(pos4);
				}
				continue;
			}
			else if(mouse_press(60,260,240,360)==1)
			{
				MouseS=0;
				clrmous(MouseX,MouseY);
				*page=5;
				break;
			}
		}    //在线门票
		
		if(MouseX>400&&MouseX<580&&MouseY>100&&MouseY<200)
		{
			if(mouse_press(400,100,580,200)==2)
			{
				MouseS=1;
				if(tag==0&&pos5==0)
				{
					tag=1;
					pos5=3;
					Light_Seeitem(pos5);
				}
				continue;
			}
			else if(mouse_press(400,100,580,200)==1)
			{
				MouseS=0;
				clrmous(MouseX,MouseY);
				*page=6;
				break;
			}
		}   //项目预约
		
		if(MouseX>400&&MouseX<580&&MouseY>260&&MouseY<360)
		{
			if(mouse_press(400,260,580,360)==2)
			{
				MouseS=1;
				if(tag==0&&pos6==0)
				{
					tag=1;
					pos6=4;
					Light_Seeitem(pos6);
				}
				continue;
			}
			else if(mouse_press(400,260,580,360)==1)
			{
				MouseS=0;
				clrmous(MouseX,MouseY);
				*page=7;
				break;
			}
		}   //路线推荐
		
		if(MouseX>560&&MouseX<620&&MouseY>380&&MouseY<420)
		{
			if(mouse_press(560,380,620,420)==2)
			{
				MouseS=1;
				if(tag==0&&pos7==0)
				{
					tag=1;
					pos7=5;
					Light_Seeitem(pos7);
				}
				continue;
			}
			else if(mouse_press(560,380,620,420)==1)
			{
				MouseS=0;
				clrmous(MouseX,MouseY);
				*page=11;
				break;
			}
		}   //返回键
		
		if(MouseX>70&&MouseX<110&&MouseY>390&&MouseY<415)
		{
			if(mouse_press(70,390,110,415)==2)
			{
				MouseS=1;
				continue;
			}
			else if(mouse_press(70,390,110,415)==1)
			{
				MouseS=0;
				clrmous(MouseX,MouseY);
				*page=31;
				break;
			}
		}  //消息提醒
	
		if(tag!=0)
		{   
	         if(pos3!=0)
			{	
			Dark_Seeitem(pos3);
			pos3=0;
			}
			if(pos4!=0)
			{	
			Dark_Seeitem(pos4);
			pos4=0;
			}
			if(pos5!=0)
			{	
			Dark_Seeitem(pos5);
			pos5=0;
			}
			if(pos6!=0)
			{	
			Dark_Seeitem(pos6);
			pos6=0;
			}
			if(pos7!=0)
			{	
			Dark_Seeitem(pos7);
			pos7=0;
			}
			tag=0;
		}
		
		if(MouseS!=0)
		{
			MouseS=0;
		}
	} 
}


void Draw_Sitem()
{
	cleardevice();
	setbkcolor(DARKGRAY);     //背景 
	
	setfillstyle(1,BLUE);
	bar(0,0,640,60);
	bar(0,440,640,480);
	puthz(240,14,"武汉欢乐谷",32,32,LIGHTGRAY);
	
	setfillstyle(1,WHITE);
	setcolor(BLACK);
	setlinestyle(0,0,1);
	bar(60,100,240,200);
	rectangle(60,100,240,200);
	puthz(78,138,"查看游乐项目",24,24,BLACK);
	
	bar(60,260,240,360);
	rectangle(60,260,240,360);
	puthz(102,298,"在线门票",24,24,BLACK);
	
	bar(400,100,580,200);
	rectangle(400,100,580,200);
	puthz(442,126,"特殊项目",24,24,BLACK);
	puthz(442,150,"在线预约",24,24,BLACK);
	
	bar(400,260,580,360);
	rectangle(400,260,580,360);
	puthz(442,298,"路线推荐",24,24,BLACK);
	
	setfillstyle(1,YELLOW);
	bar(70,390,110,415);
	rectangle(70,390,110,415);
	setlinestyle(SOLID_LINE,0,THICK_WIDTH);
	setcolor(BLACK);
	line(70,390,110,390);
	line(70,390,90,405);
	line(90,405,110,390);
	line(70,390,70,415);
	line(70,415,110,415);
	line(110,415,110,390);
    
	setfillstyle(1,WHITE);
	setcolor(BLACK);
	setlinestyle(0,0,1);
	bar(560,380,620,420);
	rectangle(560,380,620,420);
	puthz(562,388,"返回",24,32,RED);
	
}


int Light_Seeitem(int tag)
{
	clrmous(MouseX,MouseY);
	delay(10);
	
	if(tag==1)
	{
		setcolor(WHITE);
		setlinestyle(0,0,1);
		rectangle(60,100,240,200);
		setfillstyle(1,LIGHTGRAY);
		bar(60,100,240,200);
		puthz(78,138,"查看游乐项目",24,24,LIGHTCYAN);	
	}
	else if(tag==2)
	{
		setcolor(WHITE);
		setlinestyle(0,0,1);
		rectangle(60,260,240,360);
		setfillstyle(1,LIGHTGRAY);
		bar(60,260,240,360);
		puthz(102,298,"在线门票",24,24,LIGHTCYAN);	
	}
	else if(tag==3)
	{
		setcolor(WHITE);
		setlinestyle(0,0,1);
		rectangle(400,100,580,200);
		setfillstyle(1,LIGHTGRAY);
		bar(400,100,580,200);
		puthz(442,126,"特殊服务",24,24,LIGHTCYAN);
		puthz(442,150,"在线预约",24,24,LIGHTCYAN);	
	}
	else if(tag==4)
	{
		setcolor(WHITE);
		setlinestyle(0,0,1);
		rectangle(400,260,580,360);
		setfillstyle(1,LIGHTGRAY);
		bar(400,260,580,360);
		puthz(442,298,"路线推荐",24,24,LIGHTCYAN);	
	}
	else if(tag==5)
	{
		setfillstyle(1,LIGHTGRAY);
		bar(560,380,620,420);
		puthz(562,388,"返回",24,32,LIGHTCYAN);
	}
}

int Dark_Seeitem(int tag)
{
	clrmous(MouseX,MouseY);
	delay(10);
	setcolor(BLACK);
	setfillstyle(1,WHITE);
	setlinestyle(0,0,BLACK);
	
	switch(tag)
	{
		case 1:
			bar(60,100,240,200);
	        rectangle(60,100,240,200);
	        puthz(78,138,"查看游乐项目",24,24,BLACK);
	    
	    case 2:
	    	bar(60,260,240,360);
			rectangle(60,260,240,360);
			puthz(102,298,"在线门票",24,24,BLACK);
			
		case 3:
			bar(400,100,580,200);
	        rectangle(400,100,580,200);
			puthz(442,126,"特殊项目",24,24,BLACK);
			puthz(442,150,"在线预约",24,24,BLACK);
	    
	    case 4:
	    	bar(400,260,580,360);
			rectangle(400,260,580,360);
			puthz(442,298,"路线推荐",24,24,BLACK);
			
		case 5:
			bar(560,380,620,420);
			rectangle(560,380,620,420);
			puthz(562,388,"返回",24,32,RED);
	}	
}
