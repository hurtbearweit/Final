#include"public.h"
#include"wayad.h"

void Wayad(int *page)
{
	int tag=0;
	clrmous(MouseX,MouseY);
    delay(100);
    save_bk_mou(MouseX,MouseY);
    Draw_Wayad();
    
    while(1)
    {
    	newmouse(&MouseX,&MouseY,&press);
    	
		if(MouseX>40&&MouseX<280&&MouseY>80&&MouseY<360)
		{
			if(mouse_press(40,80,280,360)==2)
			{
				MouseS=1;
				if(tag==0)
				{
					tag=1;
					Light_Wayad(1);
				}
				continue;
			}
			else if(mouse_press(40,80,280,360)==1)
			{
				MouseS=0;
				clrmous(MouseX,MouseY);  
				*page=71;
				break;
			}
		}
		
		if(MouseX>360&&MouseX<600&&MouseY>80&&MouseY<360)
		{
			if(mouse_press(360,80,600,360)==2)
			{
				MouseS=1;
				if(tag==0)
				{
					tag=2;
					Light_Wayad(2);
				}
				continue;
			}
			else if(mouse_press(360,80,600,360)==1)
			{
				MouseS=0;
				clrmous(MouseX,MouseY);
				*page=72;
				break;
			}
		}
		
		//bar(560,380,620,420);
		if(MouseX>560&&MouseX<620&&MouseY>380&&MouseY<420)
		{
			if(mouse_press(560,380,620,420)==2)
			{
				MouseS=1;
				if(tag==0)
				{
					tag=3;
					Light_Wayad(3);
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
			Dark_Wayad(tag);
			tag=0;
		}
		if(MouseS!=0)
		{
			MouseS=0;
		}
	}
}

void Draw_Wayad()
{
	cleardevice();
	setbkcolor(8);
	
	setfillstyle(1,BLUE);
	bar(0,0,640,60);
	bar(0,440,640,480);
	puthz(240,14,"�人���ֹ�",32,32,LIGHTGRAY);

    setfillstyle(1,WHITE);
	bar(40,80,280,360);	
	setcolor(BLACK);
	setlinestyle(0,0,1);
	rectangle(40,80,280,360);
	puthz(84,308,"����·��",32,40,BLACK);
	
	bar(360,80,600,360);
	rectangle(360,80,600,360);
	puthz(384,308,"�Զ���·��",32,40,BLACK);
	
	bar(560,380,620,420);
	rectangle(560,380,620,420);
	puthz(562,388,"����",24,32,RED);
}

void Light_Wayad(int tag)
{
	clrmous(MouseX,MouseY);
	delay(10);
	
	if(tag==1)
	{
		setcolor(MAGENTA);       
		setfillstyle(1,LIGHTGRAY);
		setlinestyle(0,0,1);
		bar(40,80,280,360);
		rectangle(40,80,280,360);
		puthz(84,308,"����·��",32,40,LIGHTRED);
	}
	else if(tag==2)
	{
		setcolor(MAGENTA);
		setfillstyle(1,LIGHTGRAY);
		setlinestyle(0,0,1);
		bar(360,80,600,360);
		rectangle(360,80,600,360);
		puthz(384,308,"�Զ���·��",32,40,LIGHTRED);
	}
	else if(tag==3)
	{
		setcolor(MAGENTA);
		setfillstyle(1,LIGHTGRAY);
		setlinestyle(0,0,1);
		bar(560,380,620,420);
		rectangle(560,380,620,420);
		puthz(562,388,"����",24,32,RED);
	}
}

void Dark_Wayad(int tag)
{
	clrmous(MouseX,MouseY);
	setcolor(BLACK);
	setfillstyle(1,WHITE);
	setlinestyle(0,0,1);
	
	switch(tag)
	{
		case 1:
			bar(40,80,280,360);
			rectangle(40,80,280,360);
			puthz(84,308,"����·��",32,40,BLACK);
			
		case 2:
			bar(360,80,600,360);
			rectangle(360,80,600,360);
			puthz(384,308,"�Զ���·��",32,40,BLACK);
		case 3:
			bar(560,380,620,420);
			rectangle(560,380,620,420);
			puthz(562,388,"����",24,32,RED);
	}
}
