#include"public.h"
#include"bzx.h"
void Inbook(int *page,int num)
{   int t;
	int tag=0;
	clrmous(MouseX,MouseY);
    delay(100);
    save_bk_mou(MouseX,MouseY);
    Draw_Inbook();
    t=countticket(num);                     //countticket函数在myticket.c里
    while(1)
    {
    	newmouse(&MouseX,&MouseY,&press);
    	
		if(MouseX>40&&MouseX<600&&MouseY>80&&MouseY<150)
		{
			if(mouse_press(40,80,600,150)==2)
			{
				MouseS=1;
				if(tag==0)
				{
					tag=1;
					Light_Inbook(1);
				}
				continue;
			}
			else if(mouse_press(40,80,600,150)==1)
			{
				MouseS=0;
                if(t==0)
                {
					    setfillstyle(SOLID_FILL, WHITE);
                        bar(200,180,440,300);
                        rectangle(200,180,440,300);
                        setfillstyle(SOLID_FILL, WHITE);
		                puthz(226,200,"您未订购今日的票",24,24,RED);
						puthz(274,240,"请先订票",24,24,RED);
						delay(3000);
						clrmous(MouseX,MouseY);
				        delay(100);
				        save_bk_mou(MouseX, MouseY);
						*page=6;
						break;
				}	
               if(t!=0)			
			   {         clrmous(MouseX,MouseY);
				        delay(100);
				        save_bk_mou(MouseX, MouseY);
				        *page=61;
				         break;
			   }
			}
		}
		
		if(MouseX>40&&MouseX<600&&MouseY>280&&MouseY<350)
		{
			if(mouse_press(40,280,600,350)==2)
			{
				MouseS=1;
				if(tag==0)
				{
					tag=2;
					Light_Inbook(2);
				}
				continue;
			}
			else if(mouse_press(40,280,600,350)==1)
			{
				MouseS=0;
				clrmous(MouseX,MouseY);
				*page=63;
				break;
			}
		}
		
		if(MouseX>40&&MouseX<600&&MouseY>180&&MouseY<250)
		{
			if(mouse_press(40,180,600,250)==2)
			{
				MouseS=1;
				if(tag==0)
				{
					tag=4;
					Light_Inbook(4);
				}
				continue;
			}
			else if(mouse_press(40,180,600,250)==1)
			{
				MouseS=0;
				clrmous(MouseX,MouseY);
				*page=64;
				break;
			}
		}   //特殊服务预约
		if(MouseX>560&&MouseX<620&&MouseY>380&&MouseY<420)
		{
			if(mouse_press(560,380,620,420)==2)
			{
				MouseS=1;
				if(tag==0)
				{
					tag=3;
					Light_Inbook(3);
				}
				continue;
			}
			else if(mouse_press(560,380,620,420)==1)
			{
				MouseS=0;
				clrmous(MouseX,MouseY);
				*page=3;
				break;
			}
		}
		if(tag!=0)
		{
			Dark_Inbook(tag);
			tag=0;
		}
		if(MouseS!=0)
		{
			MouseS=0;
		}
	}
}

void Draw_Inbook()
{
	cleardevice();
	setbkcolor(8);
	
	setfillstyle(1,BLUE);
	bar(0,0,640,60);
	bar(0,440,640,480);
	puthz(240,14,"武汉欢乐谷",32,32,LIGHTGRAY);

    setfillstyle(1,WHITE);
	bar(40,80,600,150);	
	setcolor(BLACK);
	setlinestyle(0,0,1);
	rectangle(40,80,600,150);
	puthz(260,100,"线上排队",32,40,BLACK);
	
	bar(40,180,600,250);
	rectangle(40,180,600,250);
	puthz(238,200,"特殊服务预约",32,40,BLACK);
	
	bar(40,280,600,350);
	rectangle(40,280,600,350);
	puthz(260,300,"我的预约",32,40,BLACK);
	
	bar(560,380,620,420);
	rectangle(560,380,620,420);
	puthz(562,388,"返回",24,32,RED);
}

void Light_Inbook(int tag)
{
	clrmous(MouseX,MouseY);
	delay(10);
	
	if(tag==1)
	{
		        setfillstyle(1,LIGHTGRAY);
	            bar(40,80,600,150);	
	            setcolor(WHITE);
	            setlinestyle(0,0,1);
	            rectangle(40,80,600,150);
	            puthz(260,100,"线上排队",32,40,LIGHTCYAN);
	}
	else if(tag==2)
	{
		setfillstyle(1,LIGHTGRAY);
		setcolor(WHITE);
		setlinestyle(0,0,1);
		bar(40,280,600,350);
	    rectangle(40,280,600,350);
	    puthz(260,300,"我的预约",32,40,LIGHTCYAN);
	}
	else if(tag==3)
	{
		setcolor(MAGENTA);
		setfillstyle(1,LIGHTGRAY);
		setlinestyle(0,0,1);
		bar(560,380,620,420);
		rectangle(560,380,620,420);
		puthz(562,388,"返回",24,32,RED);
	}
	else if(tag==4)
	{
		setfillstyle(1,LIGHTGRAY);
		setcolor(WHITE);
		setlinestyle(0,0,1);
		bar(40,180,600,250);
	    rectangle(40,180,600,250);
	    puthz(238,200,"特殊服务预约",32,40,LIGHTCYAN);
	}
}

void Dark_Inbook(int tag)
{
	clrmous(MouseX,MouseY);
	setcolor(BLACK);
	setfillstyle(1,WHITE);
	setlinestyle(0,0,1);
	
	switch(tag)
	{
		case 1:
			 setfillstyle(1,WHITE);
	         bar(40,80,600,150);	
	         setcolor(BLACK);
	         setlinestyle(0,0,1);
	         rectangle(40,80,600,150);
	         puthz(260,100,"线上排队",32,40,BLACK);
			 break;
		case 2:
		    setfillstyle(1,WHITE);
			bar(40,280,600,350);
			setlinestyle(0,0,1);
	        rectangle(40,280,600,350);
	        puthz(260,300,"我的预约",32,40,BLACK);
			break;
		case 3:
			bar(560,380,620,420);
			rectangle(560,380,620,420);
			puthz(562,388,"返回",24,32,RED);
			break;
		case 4:
		    bar(40,180,600,250);
	        rectangle(40,180,600,250);
	        puthz(238,200,"特殊服务预约",32,40,BLACK);
			break;
	}
}
