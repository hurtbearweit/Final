#include"bzx.h"
#include"ticket.h"
void ticket_1(int *page)
{   int tag=0;
    int pos1=0;
	int pos2=0;
	int pos3=0;
	int pos4=0;
	int pos5=0;
    DATE a[5];
    get_time(a);
    clrmous(MouseX,MouseY);
	delay(100);
	save_bk_mou(MouseX,MouseY);
	draw_ticket1(a);
      while(1)
	{
		newmouse(&MouseX,&MouseY,&press);
			if(MouseX>520&&MouseX<620&&MouseY>105&&MouseY<145)
		{           
			if(mouse_press(520,105,620,145)==2)
			{
				MouseS=1;
				continue;
			}
			else if(mouse_press(520,105,620,145)==1)
			{    
				MouseS=0;
				clrmous(MouseX,MouseY);
				 delay(100);
				 save_bk_mou(MouseX, MouseY);
				 *page=511;
				break;
			}
		}	
		
		if(MouseX>520&&MouseX<620&&MouseY>185&&MouseY<225)
		{         
			if(mouse_press(520,185,620,225)==2)
			{
				MouseS=1;
				continue;
			}
			else if(mouse_press(520,185,620,225)==1)
			{
				MouseS=0;
				clrmous(MouseX,MouseY);
				 delay(100);
				 save_bk_mou(MouseX, MouseY);
				*page=512;
				break;
			}
		}	
		
		if(MouseX>520&&MouseX<620&&MouseY>265&&MouseY<305)
		{          
			if(mouse_press(520,265,620,305)==2)
			{
				MouseS=1;
				continue;
			}
			else if(mouse_press(520,265,620,305)==1)
			{
				MouseS=0;
				clrmous(MouseX,MouseY);
				 delay(100);
				 save_bk_mou(MouseX, MouseY);
				*page=513;
				break;
			}
		}	
		
		if(MouseX>520&&MouseX<620&&MouseY>345&&MouseY<385)
		{          
			if(mouse_press(520,345,620,385)==2)
			{
				MouseS=1;
				continue;
			}
			else if(mouse_press(520,345,620,385)==1)
			{
				MouseS=0;
				clrmous(MouseX,MouseY);
				 delay(100);
				 save_bk_mou(MouseX, MouseY);
				*page=514;
				break;
			}
		}	
		
		if(MouseX>540&&MouseX<600&&MouseY>420&&MouseY<460)
		{           
			if(mouse_press(540,420,600,460)==2)
			{
				MouseS=1;
				if(tag==0&&pos5!=5)
				{   pos5=5;
				    tag=1;
					Light_ticket1(pos5);
				}
				continue;
			}
			else if(mouse_press(540,420,600,460)==1)
			{
				MouseS=0;
				clrmous(MouseX,MouseY);
				 delay(100);
				 save_bk_mou(MouseX, MouseY);
				*page=5;
				break;
			}
		}
		if(tag!=0)
		{  
			if(pos5!=0)
			{
				Dark_ticket1(pos5);
				pos5=0;
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
NMAE:draw_ticket1
FUNCTION:绘制界面
*******************/
void draw_ticket1(DATE *p)
{   
	cleardevice();
	setbkcolor(DARKGRAY);  
	setfillstyle(1,BLUE);
	bar(0,0,640,60);
	puthz(190,14,"武汉欢乐谷门票服务",32,32,LIGHTGRAY);
	
	setcolor(WHITE);
	settextjustify(LEFT_TEXT, TOP_TEXT);
    settextstyle(TRIPLEX_FONT, HORIZ_DIR,2);
	puthz(0,62,"今日是",24,24,RED);
	outtextxy(80,62,p[0].year);
	puthz(140,62,"年",24,24,RED);
	outtextxy(170,62,p[0].month);
	puthz(185,62,"月",24,24,RED);
	outtextxy(215,62,p[0].day);
	puthz(235,62,"日",24,24,RED);
	
	setfillstyle(1,WHITE);
	bar(50,100,500,150);
	setlinestyle(SOLID_LINE,0,NORM_WIDTH);
	setcolor(RED);
	line(200,100,200,150);
	puthz(80,110,"儿童票",32,32,RED);
	puthz(210,115,"无需取票",24,24,LIGHTGRAY);
	line(310,115,310,137);
	puthz(315,115,"无忧退",24,24,LIGHTGRAY);
	setcolor(GREEN);
	outtextxy(420,115,"140");
	puthz(460,115,"元",24,24,GREEN);
	setfillstyle(1,GREEN);
	bar(520,105,620,145);
	puthz(521,112,"查询订购",24,24,WHITE);
	
	setfillstyle(1,WHITE);
	bar(50,180,500,230);
	setlinestyle(SOLID_LINE,0,NORM_WIDTH);
	setcolor(RED);
	line(200,180,200,230);
	puthz(80,190,"成人票",32,32,RED);
	puthz(210,195,"无需取票",24,24,LIGHTGRAY);
	line(310,195,310,217);
	puthz(315,195,"无忧退",24,24,LIGHTGRAY);
	setcolor(GREEN);
	outtextxy(420,195,"200");
	puthz(460,195,"元",24,24,GREEN);
	setfillstyle(1,GREEN);
	bar(520,185,620,225);
	puthz(521,192,"查询订购",24,24,WHITE);
	
	setfillstyle(1,WHITE);
	bar(50,260,500,310);
	setlinestyle(SOLID_LINE,0,NORM_WIDTH);
	setcolor(RED);
	line(200,260,200,310);
	puthz(80,270,"学生票",32,32,RED);
	puthz(210,275,"无需取票",24,24,LIGHTGRAY);
	line(310,275,310,297);
	puthz(315,275,"无忧退",24,24,LIGHTGRAY);
	setcolor(GREEN);
	outtextxy(420,275,"140");
	puthz(460,275,"元",24,24,GREEN);
	setfillstyle(1,GREEN);
	bar(520,265,620,305);
	puthz(521,272,"查询订购",24,24,WHITE);
	
	setfillstyle(1,WHITE);
	bar(50,340,500,390);
	setlinestyle(SOLID_LINE,0,NORM_WIDTH);
	setcolor(RED);
	line(200,340,200,390);
	puthz(80,350,"老年票",32,32,RED);
	puthz(210,355,"无需取票",24,24,LIGHTGRAY);
	line(310,355,310,377);
	puthz(315,355,"无忧退",24,24,LIGHTGRAY);
	setcolor(GREEN);
	outtextxy(420,355,"140");
	puthz(460,355,"元",24,24,GREEN);
	setfillstyle(1,GREEN);
	bar(520,345,620,385);
	puthz(521,352,"查询订购",24,24,WHITE);
	
	setfillstyle(1,WHITE);
	bar(540,420,600,460);
	puthz(548,430,"返回",24,24,LIGHTGRAY);
}
/*******************
NAME:get_time
FUNCTION:在线门票的时间系统
*******************/
void get_time(DATE *p)    //在线门票的时间系统
{
	int i;                                             //当前日期
    int a;
	int b;
	time_t now_time;
	struct tm *local_time;
	now_time=time(NULL);
	local_time=localtime(&now_time);
	a=local_time->tm_year+1900;
	b=local_time->tm_mon+1;
	itoa(a,p[0].year,10);
	itoa(b,p[0].month,10);
	itoa(local_time->tm_mday,p[0].day,10);        

    if(b==1||b==3||b==5||b==7||b==8||b==10)           //明天、后天、三天、四天后的日期
    {   
		if(local_time->tm_mday==30)
		{   
	        itoa(a,p[1].year,10);
			itoa(b,p[1].month,10);
			itoa(31,p[1].day,10);
	        itoa(a,p[2].year,10);
	        itoa(b+1,p[2].month,10);
			itoa(1,p[2].day,10);      
			itoa(a,p[3].year,10);
	        itoa(b+1,p[3].month,10);
			itoa(2,p[3].day,10); 
		    itoa(a,p[4].year,10);
	        itoa(b+1,p[4].month,10);
			itoa(3,p[4].day,10); 
		}
		if(local_time->tm_mday==31)
		{   itoa(a,p[1].year,10);
	        itoa(b+1,p[1].month,10);
			itoa(1,p[1].day,10);
            itoa(a,p[2].year,10);
	        itoa(b+1,p[2].month,10);
			itoa(2,p[2].day,10);      
			itoa(a,p[3].year,10);
	        itoa(b+1,p[3].month,10);
			itoa(3,p[3].day,10); 
		    itoa(a,p[4].year,10);
	        itoa(b+1,p[4].month,10);
			itoa(4,p[4].day,10); 
		}
		if(local_time->tm_mday==29)
		{   itoa(a,p[1].year,10);
	        itoa(b,p[1].month,10);
			itoa(30,p[1].day,10); 
            itoa(a,p[2].year,10);
	        itoa(b,p[2].month,10);
			itoa(31,p[2].day,10);      
			itoa(a,p[3].year,10);
	        itoa(b+1,p[3].month,10);
			itoa(1,p[3].day,10); 
		    itoa(a,p[4].year,10);
	        itoa(b+1,p[4].month,10);
			itoa(2,p[4].day,10); 
		}
		if(local_time->tm_mday==28)
		{   itoa(a,p[1].year,10);
	        itoa(b,p[1].month,10);
			itoa(29,p[1].day,10);      
            itoa(a,p[2].year,10);
	        itoa(b,p[2].month,10);
			itoa(30,p[2].day,10);      
			itoa(a,p[3].year,10);
	        itoa(b,p[3].month,10);
			itoa(31,p[3].day,10); 
		    itoa(a,p[4].year,10);
	        itoa(b+1,p[4].month,10);
			itoa(1,p[4].day,10); 
		}
		else
		{   itoa(a,p[1].year,10);
	        itoa(b,p[1].month,10);
			itoa(local_time->tm_mday+1,p[1].day,10);
			itoa(a,p[2].year,10);
	        itoa(b,p[2].month,10);
			itoa(local_time->tm_mday+2,p[2].day,10);      
			itoa(a,p[3].year,10);
	        itoa(b,p[3].month,10);
			itoa(local_time->tm_mday+3,p[3].day,10); 
		    itoa(a,p[4].year,10);
	        itoa(b,p[4].month,10);
			itoa(local_time->tm_mday+4,p[4].day,10); 
		}	
	}
	if(b==12)
	{   if(local_time->tm_mday==30)
		{   itoa(a,p[1].year,10);
	        itoa(12,p[1].month,10);
			itoa(31,p[1].day,10);  
	        itoa(a+1,p[2].year,10);
	        itoa(1,p[2].month,10);
			itoa(1,p[2].day,10);      
			itoa(a+1,p[3].year,10);
	        itoa(1,p[3].month,10);
			itoa(2,p[3].day,10); 
		    itoa(a+1,p[4].year,10);
	        itoa(1,p[4].month,10);
			itoa(3,p[4].day,10); 
		}
		if(local_time->tm_mday==31)
		{
            itoa(a+1,p[1].year,10);
	        itoa(1,p[1].month,10);
			itoa(1,p[1].day,10);  
			itoa(a+1,p[2].year,10);
	        itoa(1,p[2].month,10);
			itoa(2,p[2].day,10);      
			itoa(a+1,p[3].year,10);
	        itoa(1,p[3].month,10);
			itoa(3,p[3].day,10); 
		    itoa(a+1,p[4].year,10);
	        itoa(1,p[4].month,10);
			itoa(4,p[4].day,10); 
		}
		if(local_time->tm_mday==29)
		{   itoa(a,p[1].year,10);
	        itoa(b,p[1].month,10);
			itoa(30,p[1].day,10);      
            itoa(a,p[2].year,10);
	        itoa(b,p[2].month,10);
			itoa(31,p[2].day,10);      
			itoa(a+1,p[3].year,10);
	        itoa(1,p[3].month,10);
			itoa(1,p[3].day,10); 
		    itoa(a+1,p[4].year,10);
	        itoa(1,p[4].month,10);
			itoa(2,p[4].day,10); 
		}
		if(local_time->tm_mday==28)
		{   itoa(a,p[1].year,10);
	        itoa(b,p[1].month,10);
			itoa(29,p[1].day,10);     
            itoa(a,p[2].year,10);
	        itoa(b,p[2].month,10);
			itoa(30,p[2].day,10);      
			itoa(a,p[3].year,10);
	        itoa(b,p[3].month,10);
			itoa(31,p[3].day,10); 
		    itoa(a+1,p[4].year,10);
	        itoa(1,p[4].month,10);
			itoa(1,p[4].day,10); 
		}
		else
		{   itoa(a,p[1].year,10);
	        itoa(b,p[1].month,10);
			itoa(local_time->tm_mday+1,p[1].day,10);     
			itoa(a,p[2].year,10);
	        itoa(b,p[2].month,10);
			itoa(local_time->tm_mday+2,p[2].day,10);      
			itoa(a,p[3].year,10);
	        itoa(b,p[3].month,10);
			itoa(local_time->tm_mday+3,p[3].day,10); 
		    itoa(a,p[4].year,10);
	        itoa(b,p[4].month,10);
			itoa(local_time->tm_mday+4,p[4].day,10); 
		}
	}
    else
	{
		if(local_time->tm_mday==29)
		{   itoa(a,p[1].year,10);
	        itoa(b+1,p[1].month,10);
			itoa(30,p[1].day,10);  
	        itoa(a,p[2].year,10);
	        itoa(b+1,p[2].month,10);
			itoa(1,p[2].day,10);      
			itoa(a,p[3].year,10);
	        itoa(b+1,p[3].month,10);
			itoa(2,p[3].day,10); 
		    itoa(a,p[4].year,10);
	        itoa(b+1,p[4].month,10);
			itoa(3,p[4].day,10); 
		}
		if(local_time->tm_mday==30)
		{   itoa(a,p[1].year,10);
	        itoa(b+1,p[1].month,10);
			itoa(1,p[1].day,10);      
            itoa(a,p[2].year,10);
	        itoa(b+1,p[2].month,10);
			itoa(2,p[2].day,10);      
			itoa(a,p[3].year,10);
	        itoa(b+1,p[3].month,10);
			itoa(3,p[3].day,10); 
		    itoa(a,p[4].year,10);
	        itoa(b+1,p[4].month,10);
			itoa(4,p[4].day,10); 
		}
		if(local_time->tm_mday==28)
		{   itoa(a,p[1].year,10);
	        itoa(b,p[1].month,10);
			itoa(29,p[1].day,10);  
            itoa(a,p[2].year,10);
	        itoa(b,p[2].month,10);
			itoa(30,p[2].day,10);      
			itoa(a,p[3].year,10);
	        itoa(b+1,p[3].month,10);
			itoa(1,p[3].day,10); 
		    itoa(a,p[4].year,10);
	        itoa(b+1,p[4].month,10);
			itoa(2,p[4].day,10); 
		}
		if(local_time->tm_mday==27)
		{   itoa(a,p[1].year,10);
	        itoa(b,p[1].month,10);
			itoa(28,p[1].day,10);  
            itoa(a,p[2].year,10);
	        itoa(b,p[2].month,10);
			itoa(29,p[2].day,10);      
			itoa(a,p[3].year,10);
	        itoa(b,p[3].month,10);
			itoa(30,p[3].day,10); 
		    itoa(a,p[4].year,10);
	        itoa(b+1,p[4].month,10);
			itoa(1,p[4].day,10); 
		}
		else
		{   itoa(a,p[1].year,10);
	        itoa(b,p[1].month,10);
			itoa(local_time->tm_mday+1,p[1].day,10);
			itoa(a,p[2].year,10);
	        itoa(b,p[2].month,10);
			itoa(local_time->tm_mday+2,p[2].day,10);      
			itoa(a,p[3].year,10);
	        itoa(b,p[3].month,10);
			itoa(local_time->tm_mday+3,p[3].day,10); 
		    itoa(a,p[4].year,10);
	        itoa(b,p[4].month,10);
			itoa(local_time->tm_mday+4,p[4].day,10); 
		}
		
	}
	
}

/**********************
NAME:Light_ticket1
FUNCTION:点亮按钮
**********************/
void Light_ticket1(int pos)
{     clrmous(MouseX,MouseY);
	  delay(10);
	  switch(pos)
	{
	   /* case 1:
             setfillstyle(1,CYAN);
	         bar(520,105,620,145);
	         puthz(521,112,"查询订购",24,24,LIGHTCYAN);
             break;			 
	    case 2:
	         setfillstyle(1,CYAN);
	         bar(520,185,620,225);
	         puthz(521,192,"查询订购",24,24,LIGHTCYAN);
			  break;	
		case 3:
		     setfillstyle(1,CYAN);
	         bar(520,265,620,305);
	         puthz(521,272,"查询订购",24,24,LIGHTCYAN);
			  break;	
			  
	    case 4:
		     setfillstyle(1,CYAN);
	         bar(520,345,620,385);
	         puthz(521,352,"查询订购",24,24,LIGHTCYAN);
			  break;*/	
		case 5:
		     setfillstyle(1,CYAN);
	         bar(540,420,600,460);
	         puthz(548,430,"返回",24,24,LIGHTCYAN);
			  break;	
		case 6:
		     setfillstyle(1,CYAN);
	         bar(250,360,350,390);
	         puthz(252,365,"确认订购",24,24,LIGHTCYAN);
			 break;
	    case 7:
		     setfillstyle(1,CYAN);
	         bar(250,375,350,400);
	         puthz(252,376,"确认订购",24,24,LIGHTCYAN);
			 break;                                           //学生票
	}
	
	
	
}

/**********************
NAME:Dark_ticket1
FUNCTION:恢复按钮
**********************/
void Dark_ticket1(int pos)
{   clrmous(MouseX, MouseY);
	delay(10);
	switch(pos)
	{
		/*case 1:
		       setfillstyle(1,GREEN);
	           bar(520,105,620,145);
	           puthz(521,112,"查询订购",24,24,WHITE);
		       break;
	    case 2:
		      setfillstyle(1,GREEN);
	          bar(520,185,620,225);
	          puthz(521,192,"查询订购",24,24,WHITE);
			  break;
	    case 3:
		     setfillstyle(1,GREEN);
	         bar(520,265,620,305);
	         puthz(521,272,"查询订购",24,24,WHITE);
			 break;
		case 4:
		     setfillstyle(1,GREEN);
	         bar(520,345,620,385);
	         puthz(521,352,"查询订购",24,24,WHITE);
			 break;*/
		case 5:
		      setfillstyle(1,WHITE);
	          bar(540,420,600,460);
	          puthz(548,430,"返回",24,24,LIGHTGRAY);
		      break;
		case 6:
		      setfillstyle(1,GREEN);
	          bar(250,360,350,390);
	          puthz(252,365,"确认订购",24,24,WHITE);
			  break;                                    
		case 7:
		      setfillstyle(1,GREEN);
	          bar(250,375,350,400);
	          puthz(252,376,"确认订购",24,24,WHITE);
		      break;                                         //学生票
	}
}
