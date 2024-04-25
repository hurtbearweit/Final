#include"bzx.h"

void ticket(int *page)
{   int tag;
    int pos1;
	int pos2;
	int pos3;
	int pos4;
	clrmous(MouseX,MouseY);
	delay(100);
	save_bk_mou(MouseX,MouseY);
	draw_ticket();
	while(1)
	{
		newmouse(&MouseX,&MouseY,&press);
		 if(MouseX>40&&MouseX<600&&MouseY>80&&MouseY<150)
		{           
			if(mouse_press(40,80,600,150)==2)
			{
				MouseS=1;
				if(tag==0&&pos1!=1)
				{   pos1=1;
				    tag=1;
					light_ticket(pos1);
				}
				continue;
			}
			else if(mouse_press(40,80,600,150)==1)
			{
				MouseS=0;
				clrmous(MouseX,MouseY);
				 delay(100);
				 save_bk_mou(MouseX, MouseY);
				 *page=51;
				break;
			}
		}
		 if(MouseX>40&&MouseX<600&&MouseY>180&&MouseY<250)
		{           
			if(mouse_press(40,180,600,250)==2)
			{
				MouseS=1;
				if(tag==0&&pos2!=2)
				{   pos2=2;
				    tag=1;
					light_ticket(pos2);
				}
				continue;
			}
			else if(mouse_press(40,180,600,250)==1)
			{
				MouseS=0;
				clrmous(MouseX,MouseY);
				 delay(100);
				 save_bk_mou(MouseX, MouseY);
				 *page=52;
				break;
			}
		}
		 if(MouseX>500&&MouseX<600&&MouseY>380&&MouseY<420)
		{           
			if(mouse_press(500,380,600,420)==2)
			{
				MouseS=1;
				if(tag==0&&pos3!=3)
				{   pos3=3;
				    tag=1;
					light_ticket(pos3);
				}
				continue;
			}
			else if(mouse_press(500,380,600,420)==1)
			{
				MouseS=0;
				clrmous(MouseX,MouseY);
				 delay(100);
				 save_bk_mou(MouseX, MouseY);
				 *page=3;
				break;
			}
		}   //返回键
		if(MouseX>40&&MouseX<600&&MouseY>280&&MouseY<350)
		{           
			if(mouse_press(40,280,600,350)==2)
			{
				MouseS=1;
				if(tag==0&&pos4!=4)
				{   pos4=4;
				    tag=1;
					light_ticket(pos4);
				}
				continue;
			}
			else if(mouse_press(40,280,600,350)==1)
			{
				MouseS=0;
				clrmous(MouseX,MouseY);
				delay(100);
				save_bk_mou(MouseX, MouseY);
				*page=53;
				break;
			}
		}
		if(tag!=0)
		{  if(pos1!=0)
			{
				dark_ticket(pos1);
				pos1=0;
			}
			if(pos2!=0)
			{
				dark_ticket(pos2);
				pos2=0;
			}
			if(pos3!=0)
			{
				dark_ticket(pos3);
				pos3=0;
			}
			if(pos4!=0)
			{
				dark_ticket(pos4);
				pos4=0;
			}
			tag=0;
		} 
	      if(MouseS!=0)
	    {
		    MouseS=0;
	    }
	}
	
}
/*******************
NAME：draw_ticket
FUNCTION：绘制界面
*******************/

void  draw_ticket()
{
	cleardevice();
	setbkcolor(DARKGRAY);   
	
	setfillstyle(1,BLUE);
	bar(0,0,640,60);
	bar(0,440,640,480);
	puthz(190,14,"武汉欢乐谷门票服务",32,32,LIGHTGRAY);
	
	setfillstyle(1,WHITE);
	bar(40,80,600,150);	
	setcolor(BLACK);
	setlinestyle(0,0,1);
	rectangle(40,80,600,150);
	puthz(260,100,"门票查询",32,40,BLACK);
	
	setfillstyle(1,WHITE);
	bar(40,180,600,250);	
	setcolor(BLACK);
	setlinestyle(0,0,1);
	rectangle(40,180,600,250);
	puthz(260,200,"我的订单",32,40,BLACK);
	
	setfillstyle(1,WHITE);
	bar(40,280,600,350);	
	setcolor(BLACK);
	setlinestyle(0,0,1);
	rectangle(40,280,600,350);
	puthz(260,300,"我要退票",32,40,BLACK);
	
	setfillstyle(1,WHITE);
	bar(500,380,600,420);	
	setcolor(BLACK);
	setlinestyle(0,0,1);
	rectangle(500,380,600,420);
	puthz(515,385,"返回",32,40,BLACK);
}
/*************************
NAME：light_ticket
FUNCTION：点亮按钮
*************************/
void  light_ticket(int pos)
{    clrmous(MouseX,MouseY);
	  delay(10);
	switch(pos)
	{
		case 1:
		        setfillstyle(1,LIGHTGRAY);
	            bar(40,80,600,150);	
	            setcolor(WHITE);
	            setlinestyle(0,0,1);
	            rectangle(40,80,600,150);
	            puthz(260,100,"门票查询",32,40,LIGHTCYAN);
				break;
		case 2:
		        setfillstyle(1,LIGHTGRAY);
	            bar(40,180,600,250);	
	            setcolor(WHITE);
	            setlinestyle(0,0,1);
	            rectangle(40,180,600,250);
	            puthz(260,200,"我的订单",32,40,LIGHTCYAN);
				break;
		case 3:
	            setfillstyle(1,LIGHTGRAY);
	            bar(500,380,600,420);	
	            setcolor(WHITE);
	            setlinestyle(0,0,1);
	            rectangle(500,380,600,420);
	            puthz(515,385,"返回",32,40,LIGHTCYAN);
				break;
		case 4:
		      setfillstyle(1,LIGHTGRAY);
	          bar(40,280,600,350);	
	          setcolor(WHITE);
	          setlinestyle(0,0,1);
	          rectangle(40,280,600,350);
	          puthz(260,300,"我要退票",32,40,LIGHTCYAN);
			  break;
	}
	
	
	
}
/**********************
**********************/
void   dark_ticket(int pos)
{    clrmous(MouseX,MouseY);
	  delay(10);
	switch(pos)
	{
		case 1:
		      setfillstyle(1,WHITE);
	          bar(40,80,600,150);	
	          setcolor(BLACK);
	          setlinestyle(0,0,1);
	          rectangle(40,80,600,150);
	          puthz(260,100,"门票查询",32,40,BLACK);
			  break;
		case 2:
              setfillstyle(1,WHITE);
	          bar(40,180,600,250);	
	          setcolor(BLACK);
	          setlinestyle(0,0,1);
	          rectangle(40,180,600,250);
	          puthz(260,200,"我的订单",32,40,BLACK);
              break;			  
		case 3:
		      setfillstyle(1,WHITE);
	          bar(500,380,600,420);	
	          setcolor(BLACK);
	          setlinestyle(0,0,1);
	          rectangle(500,380,600,420);
	          puthz(515,385,"返回",32,40,BLACK);
			  break;
		case 4:
		      setfillstyle(1,WHITE);
	          bar(40,280,600,350);	
	          setcolor(BLACK);
	          setlinestyle(0,0,1);
	          rectangle(40,280,600,350);
	          puthz(260,300,"我要退票",32,40,BLACK);
			  break;
	} 
}