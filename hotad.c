#include"public.h"
#include"IMAGE.h"
#include"hotad.h"

void Hotad(int *page)
{
	int tag;
	cleardevice();
    Draw_Hotad();
    
    while(1)
	{
		newmouse(&MouseX,&MouseY,&press);
		
		if(MouseX>10&&MouseX<120&&MouseY>20&&MouseY<40)
		{
			if(mouse_press(10,20,120,40)==2)
			{
				MouseS=1;
				if(tag==0)
				{
					tag=1;
					Light_Hotad(1); 
				}
				continue;
			}
			else if(mouse_press(10,20,120,40)==1)
    		{
    			Light_Hotad(1);
    			MouseS=0;
    			tline(315,370,170,365,YELLOW);
    			delay(300);
    			tline(170,365,160,195,YELLOW);
    			delay(300);
    			tline(160,195,330,155,YELLOW);
    			delay(300);
    			tline(330,155,390,75,YELLOW);
    			delay(300);
    			continue;
    		}
		}
		//·��1
		if(MouseX>140&&MouseX<210&&MouseY>20&&MouseY<42)
    	{
    		if(mouse_press(140,20,210,42)==2)
    		{
    			MouseS=1;
    			if(tag==0)
				{
					tag=11;
					Light_Hotad(11);
				}
    			continue;
			}
			else if(mouse_press(140,20,210,42)==1);
			{
				Light_Hotad(11); 
				MouseS=0;
				clrmous(MouseX,MouseY);
				*page=711;
    			break;
			}
		}
		//·��1����
		if(MouseX>225&&MouseX<270&&MouseY>20&&MouseY<42)
		{
			if(mouse_press(225,20,270,42)==2)
			{
				MouseS=1;
    			if(tag==0)
				{
					tag=12;
					Light_Hotad(12);
				}
    			continue;
			}
			if(mouse_press(225,20,270,42)==1)
			{
				MouseS=1;
    			Draw_Hotad();
    			continue;
			}
		}
		//225,20,270,42 
		//���·��1 
		if(MouseX>10&&MouseX<120&&MouseY>50&&MouseY<70)
    	{
    		if(mouse_press(10,50,120,70)==2)
    		{
    			MouseS=1;
    			if(tag==0)
				{
					tag=2;
					Light_Hotad(2); 
				}
    			continue;
			}
			else if(mouse_press(10,50,120,70)==1);
			{
				Light_Hotad(2); 
				MouseS=0;
				tline(315,370,380,430,BLUE);
    			delay(300);
    			tline(380,430,445,385,BLUE);
    			delay(300);
    			tline(445,385,465,325,BLUE);
    			delay(300);
    			tline(465,325,520,225,BLUE);
    			delay(300);
    			continue;
			}
		}
		//·��2 
		if(MouseX>140&&MouseX<210&&MouseY>50&&MouseY<72)
    	{
    		if(mouse_press(140,50,210,72)==2)
    		{
    			MouseS=1;
    			if(tag==0)
				{
					tag=21;
					Light_Hotad(21); 
				}
    			continue;
			}
			else if(mouse_press(140,50,210,72)==1);
			{
				Light_Hotad(21); 
				MouseS=0;
				clrmous(MouseX,MouseY);
				*page=712;
    			break;
			}
		}
		//·��2���� 
		if(MouseX>225&&MouseX<270&&MouseY>50&&MouseY<72)
		{
			if(mouse_press(225,50,270,72)==2)
			{
				MouseS=1;
    			if(tag==0)
				{
					tag=22;
					Light_Hotad(22);
				}
    			continue;
			}
			if(mouse_press(225,50,270,72)==1)
			{
				MouseS=1;
    			Draw_Hotad();
    			continue;
			}
		}
		//·�߶���� 
		if(MouseX>10&&MouseX<120&&MouseY>80&&MouseY<100)
    	{
    		if(mouse_press(10,80,120,100)==2)
    		{
    			MouseS=1;
    			if(tag==0)
				{
					tag=3;
					Light_Hotad(3); 
				}
    			continue;
			}
			else if(mouse_press(10,80,120,100)==1);
			{
				Light_Hotad(3);
				MouseS=0;
				tline(315,370,520,225,BLACK);
    			delay(200);
    			tline(520,225,340,155,BLACK);
    			delay(200);
    			tline(340,155,155,200,BLACK);
    			delay(200);
    			continue;
			}
		}
		//·���� 
		if(MouseX>140&&MouseX<210&&MouseY>80&&MouseY<102)
    	{
    		if(mouse_press(140,80,210,102)==2)
    		{
    			MouseS=1;
    			if(tag==0)
				{
					tag=31;
					Light_Hotad(31); 
				}
    			continue;
			}
			else if(mouse_press(140,80,210,102)==1);
			{
				Light_Hotad(31); 
				MouseS=0;
				clrmous(MouseX,MouseY);
				*page=713;
    			break;
			}
		}
		//·������� 
		if(MouseX>225&&MouseX<270&&MouseY>80&&MouseY<102)
		{
			if(mouse_press(225,80,270,102)==2)
			{
				MouseS=1;
    			if(tag==0)
				{
					tag=32;
					Light_Hotad(32);
				}
    			continue;
			}
			if(mouse_press(225,80,270,102)==1)
			{
				MouseS=1;
    			Draw_Hotad();
    			continue;
			}
		}
		
		if(MouseX>548&&MouseX<613&&MouseY>429&&MouseY<463)//����ڷ��ؼ���
		{
	        if(mouse_press(548,429,613,463)==2)
    		{	
				MouseS=1;
    			if(tag==0)
				{
					tag=4;
					Light_Hotad(4); 
				}
    			continue;  				  							
			}
			else if(mouse_press(548,429,613,463)==1)
			{
				Light_Hotad(4);
				MouseS=0;
				*page=7;
				break;
			}
		 }
		if(tag!=0)
		{
			Dark_Hotad(tag);
			tag=0;
		}
		if(MouseS!=0)
		{
			MouseS=0;
		}
	} 
}

void Draw_Hotad()
{
	bmp_convert("C:\\CODE\\PICTURE\\hlg.bmp","C:\\CODE\\PICTURE\\hlg.dbm");
    show_dbm(0,0,"C:\\CODE\\PICTURE\\hlg.dbm");
	
	cover(0,0,280,110,LIGHTGREEN);
	setcolor(RED);
	settextjustify(LEFT_TEXT, TOP_TEXT);
    settextstyle(TRIPLEX_FONT, HORIZ_DIR,2);
	
	cover(10,20,120,40,LIGHTGRAY);
	puthz(14,22,"·��",16,18,RED);
	outtextxy(50,20,"1");
	highlight(10,20,120,40,WHITE);
	setcolor(YELLOW);
	setlinestyle(0,0,3);
	line(90,30,115,30);
	cover(140,20,210,42,LIGHTGRAY);
	puthz(143,22,"�Ƽ�����",16,18,RED);
	highlight(138,20,212,40,WHITE);
	cover(225,20,270,42,LIGHTGRAY);
	puthz(230,22,"���",16,18,RED);
	highlight(223,20,270,40,WHITE);
	
	cover(10,50,120,70,LIGHTGRAY);
	puthz(14,52,"·��",16,18,RED);
	outtextxy(50,50,"2");
	highlight(10,50,120,70,WHITE);
	setcolor(BLUE);
	setlinestyle(0,0,3);
	line(90,60,115,60);
	cover(140,50,210,72,LIGHTGRAY);
	puthz(143,52,"�Ƽ�����",16,18,RED);
	highlight(138,50,212,70,WHITE);
	cover(225,50,270,72,LIGHTGRAY);
	puthz(230,52,"���",16,18,RED);
	highlight(223,50,270,70,WHITE);
	
	cover(10,80,120,100,LIGHTGRAY);
	puthz(14,82,"·��",16,18,RED);
	outtextxy(50,80,"3");
	highlight(10,80,120,100,WHITE);
	setcolor(CYAN);
	setlinestyle(0,0,3);
	line(90,90,115,90);	
	cover(140,80,210,102,LIGHTGRAY);
	puthz(143,82,"�Ƽ�����",16,18,RED);
	highlight(138,80,212,100,WHITE);
	cover(225,80,270,102,LIGHTGRAY);
	puthz(230,82,"���",16,18,RED);
	highlight(223,80,270,100,WHITE);
}

void Light_Hotad(int tag)
{
	switch(tag)
	{
	  	case 1:
	  		highlight(10,20,120,40,YELLOW);
	  		break;
	  	case 2:
	  		highlight(10,50,120,70,YELLOW);
	  		break;
	  	case 3:
		  	highlight(10,80,120,100,YELLOW);
		  	break;
		case 4:
			highlight(548,429,613,463,YELLOW);
			break;
		case 11:
			highlight(138,20,212,40,YELLOW);
			break;
		case 12:
			highlight(223,20,270,40,YELLOW);
			break;
		case 21:
			highlight(138,50,212,70,YELLOW);
			break;
		case 22:
			highlight(223,50,270,70,YELLOW);
			break;
		case 31:
			highlight(138,80,212,100,YELLOW);
			break;
		case 32:
			highlight(223,80,270,100,YELLOW);
			break;
	}
}

void Dark_Hotad(int tag)
{
	switch(tag)
	{
	  	case 1:
	  		highlight(10,20,120,40,WHITE);
	  		break;
	  	case 2:
	  		highlight(10,50,120,70,WHITE);
	  		break;
	  	case 3:
		  	highlight(10,80,120,100,WHITE);
		  	break;
		case 4:
			highlight(548,429,613,463,WHITE);
			break;
		case 11:
			highlight(138,20,212,40,WHITE);
			break;
		case 12:
			highlight(223,20,270,40,WHITE);
			break;
		case 21:
			highlight(138,50,212,70,WHITE);
			break;
		case 22:
			highlight(223,50,270,70,WHITE);
			break;
		case 31:
			highlight(138,80,212,100,WHITE);
			break;
		case 32:
			highlight(223,80,270,100,WHITE);
			break;
	}
}

void Intro_Hot_1(int *page)
{
	cleardevice();
	bkcolor();     
    setcolor(RED);
    settextjustify(LEFT_TEXT, TOP_TEXT);
    settextstyle(TRIPLEX_FONT, HORIZ_DIR,2);
    
    puthz(220,50,"��갴���⴦��������ͼ����",16,16,RED);
    puthz(242,100,"����·��",24,24,RED);
    outtextxy(338,100,"1");
    puthz(348,100,"�Ƽ�",24,24,RED);
	
	puthz(100,150,"����·��",24,24,RED);
	puthz(250,150,"������",24,24,RED); 
	outtextxy(345,150,"->");
	puthz(370,150,"��������",24,24,RED);
	outtextxy(465,150,"->");
	puthz(490,150,"��������",24,24,RED);
	outtextxy(50,200,"->");
	puthz(75,200,"��⵺",24,24,RED);
	outtextxy(145,200,"->");
	puthz(170,200,"���ֽ���",24,24,RED);
	
	puthz(100,250,"�Ƽ�����",24,24,RED);
	outtextxy(200,250,":");
	puthz(210,250,"��·��ּ�ڴ����ο͸����ٶȵļ���",24,24,RED);
	outtextxy(594,250,",");
	puthz(50,300,"�ɰ��Ķ���",24,24,RED);
	outtextxy(170,300,",");
	puthz(180,300,"���µķ��",24,24,RED);
	outtextxy(300,300,",");
	puthz(310,300,"��·���ϲ�ͬ��ʽ������",24,24,RED);
	puthz(50,350,"���֤���Ը������������ĸ���",24,24,RED);
	outtextxy(410,350,"!");

	delay(500);
	while(1)
	{
		newmouse(&MouseX,&MouseY,&press);
		if(mouse_press(0,0,639,479)==1)
    	{   	
			clrmous(MouseX, MouseY);
	        delay(100);
			save_bk_mou(MouseX, MouseY);
			*page=71;
            break;		    
    	}	
    }
}

void Intro_Hot_2(int *page)
{
	cleardevice();
	bkcolor();     
    setcolor(RED);
    settextjustify(LEFT_TEXT, TOP_TEXT);
    settextstyle(TRIPLEX_FONT, HORIZ_DIR,2);
    
    puthz(220,50,"��갴���⴦��������ͼ����",16,16,RED);
    puthz(242,100,"����·��",24,24,RED);
    outtextxy(338,100,"2");
    puthz(348,100,"�Ƽ�",24,24,RED);
	
	puthz(100,150,"����·��",24,24,RED);
	puthz(250,150,"������",24,24,RED); 
	outtextxy(345,150,"->");
	puthz(370,150,"���ֺ���",24,24,RED);
	outtextxy(465,150,"->");
	puthz(490,150,"��ͨ����",24,24,RED);
	outtextxy(50,200,"->");
	puthz(75,200,"����ʱ��",24,24,RED);
	outtextxy(170,200,"->");
	puthz(195,200,"쫷���",24,24,RED);
	
	puthz(100,250,"�Ƽ�����",24,24,RED);
	outtextxy(200,250,":");
	puthz(210,250,"��·��·�̽϶�",24,24,RED);
	outtextxy(380,250,",");
	puthz(390,250,"�ҹ���ͯ��ˣ����",24,24,RED);
	puthz(50,300,"Ŀ�϶�",24,24,RED);
	outtextxy(122,300,",");
	puthz(130,300,"��ȫ��һ���ε���ѡ",24,24,RED); 
	delay(500);
	while(1)
	{
		newmouse(&MouseX,&MouseY,&press);
		if(mouse_press(0,0,639,479)==1)
    	{   	
			clrmous(MouseX, MouseY);
	        delay(100);
			save_bk_mou(MouseX, MouseY);
			*page=71;
            break;		    
    	}	
    }
}

void Intro_Hot_3(int *page)
{
	cleardevice();
	bkcolor();     
    setcolor(RED);
    settextjustify(LEFT_TEXT, TOP_TEXT);
    settextstyle(TRIPLEX_FONT, HORIZ_DIR,2);
    
    puthz(220,50,"��갴���⴦��������ͼ����",16,16,RED);
    puthz(242,100,"����·��",24,24,RED);
    outtextxy(338,100,"3");
    puthz(348,100,"�Ƽ�",24,24,RED);
	
	puthz(100,150,"����·��",24,24,RED);
	puthz(250,150,"������",24,24,RED);
	outtextxy(345,150,"->");
	puthz(370,150,"쫷���",24,24,RED);
	outtextxy(440,150,"->");
	puthz(465,150,"��⵺",24,24,RED);
	outtextxy(535,150,"->");
	puthz(560,150,"��",24,24,RED);
	puthz(50,200,"������",24,24,RED);
	
	puthz(100,250,"�Ƽ�����",24,24,RED);
	outtextxy(200,250,":");
	puthz(210,250,"�ش�·��",24,24,RED);
	outtextxy(310,250,",");
	puthz(320,250,"���������Ե���׳���ķ�",24,24,RED);
	puthz(50,300,"���Լ��������ֺ�������",24,24,RED);
	outtextxy(315,300,",");
	puthz(325,300,"����·��ȫ���߳̽ϳ�",24,24,RED);
	outtextxy(565,300,",");
	puthz(575,300,"��",24,24,RED); 
	puthz(50,350,"��׼�������ˮ�Լ������Ь��",24,24,RED);

	delay(500);
	while(1)
	{
		newmouse(&MouseX,&MouseY,&press);
		if(mouse_press(0,0,639,479)==1)
    	{   	
			clrmous(MouseX, MouseY);
	        delay(100);
			save_bk_mou(MouseX, MouseY);
			*page=71;
            break;		    
    	}	
    }
}

