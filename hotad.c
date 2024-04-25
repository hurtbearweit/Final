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
		//路线1
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
		//路线1介绍
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
		//清除路线1 
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
		//路线2 
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
		//路线2介绍 
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
		//路线二清除 
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
		//路线三 
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
		//路线三简介 
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
		
		if(MouseX>548&&MouseX<613&&MouseY>429&&MouseY<463)//如果在返回键上
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
	puthz(14,22,"路线",16,18,RED);
	outtextxy(50,20,"1");
	highlight(10,20,120,40,WHITE);
	setcolor(YELLOW);
	setlinestyle(0,0,3);
	line(90,30,115,30);
	cover(140,20,210,42,LIGHTGRAY);
	puthz(143,22,"推荐理由",16,18,RED);
	highlight(138,20,212,40,WHITE);
	cover(225,20,270,42,LIGHTGRAY);
	puthz(230,22,"清除",16,18,RED);
	highlight(223,20,270,40,WHITE);
	
	cover(10,50,120,70,LIGHTGRAY);
	puthz(14,52,"路线",16,18,RED);
	outtextxy(50,50,"2");
	highlight(10,50,120,70,WHITE);
	setcolor(BLUE);
	setlinestyle(0,0,3);
	line(90,60,115,60);
	cover(140,50,210,72,LIGHTGRAY);
	puthz(143,52,"推荐理由",16,18,RED);
	highlight(138,50,212,70,WHITE);
	cover(225,50,270,72,LIGHTGRAY);
	puthz(230,52,"清除",16,18,RED);
	highlight(223,50,270,70,WHITE);
	
	cover(10,80,120,100,LIGHTGRAY);
	puthz(14,82,"路线",16,18,RED);
	outtextxy(50,80,"3");
	highlight(10,80,120,100,WHITE);
	setcolor(CYAN);
	setlinestyle(0,0,3);
	line(90,90,115,90);	
	cover(140,80,210,102,LIGHTGRAY);
	puthz(143,82,"推荐理由",16,18,RED);
	highlight(138,80,212,100,WHITE);
	cover(225,80,270,102,LIGHTGRAY);
	puthz(230,82,"清除",16,18,RED);
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
    
    puthz(220,50,"鼠标按任意处返回至地图界面",16,16,RED);
    puthz(242,100,"热门路线",24,24,RED);
    outtextxy(338,100,"1");
    puthz(348,100,"推荐",24,24,RED);
	
	puthz(100,150,"游玩路线",24,24,RED);
	puthz(250,150,"梦想大道",24,24,RED); 
	outtextxy(345,150,"->");
	puthz(370,150,"极速世界",24,24,RED);
	outtextxy(465,150,"->");
	puthz(490,150,"雨落天堂",24,24,RED);
	outtextxy(50,200,"->");
	puthz(75,200,"渔光岛",24,24,RED);
	outtextxy(145,200,"->");
	puthz(170,200,"欢乐江城",24,24,RED);
	
	puthz(100,250,"推荐理由",24,24,RED);
	outtextxy(200,250,":");
	puthz(210,250,"此路线旨在带领游客感受速度的激情",24,24,RED);
	outtextxy(594,250,",");
	puthz(50,300,"可爱的动物",24,24,RED);
	outtextxy(170,300,",");
	puthz(180,300,"极致的风光",24,24,RED);
	outtextxy(300,300,",");
	puthz(310,300,"此路线上不同形式的娱乐",24,24,RED);
	puthz(50,350,"活动保证可以给你留下难忘的感受",24,24,RED);
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
    
    puthz(220,50,"鼠标按任意处返回至地图界面",16,16,RED);
    puthz(242,100,"热门路线",24,24,RED);
    outtextxy(338,100,"2");
    puthz(348,100,"推荐",24,24,RED);
	
	puthz(100,150,"游玩路线",24,24,RED);
	puthz(250,150,"梦想大道",24,24,RED); 
	outtextxy(345,150,"->");
	puthz(370,150,"欢乐海洋",24,24,RED);
	outtextxy(465,150,"->");
	puthz(490,150,"卡通工厂",24,24,RED);
	outtextxy(50,200,"->");
	puthz(75,200,"欢乐时光",24,24,RED);
	outtextxy(170,200,"->");
	puthz(195,200,"飓风湾",24,24,RED);
	
	puthz(100,250,"推荐理由",24,24,RED);
	outtextxy(200,250,":");
	puthz(210,250,"此路线路程较短",24,24,RED);
	outtextxy(380,250,",");
	puthz(390,250,"且供孩童玩耍的项",24,24,RED);
	puthz(50,300,"目较多",24,24,RED);
	outtextxy(122,300,",");
	puthz(130,300,"是全家一日游的首选",24,24,RED); 
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
    
    puthz(220,50,"鼠标按任意处返回至地图界面",16,16,RED);
    puthz(242,100,"热门路线",24,24,RED);
    outtextxy(338,100,"3");
    puthz(348,100,"推荐",24,24,RED);
	
	puthz(100,150,"游玩路线",24,24,RED);
	puthz(250,150,"梦想大道",24,24,RED);
	outtextxy(345,150,"->");
	puthz(370,150,"飓风湾",24,24,RED);
	outtextxy(440,150,"->");
	puthz(465,150,"渔光岛",24,24,RED);
	outtextxy(535,150,"->");
	puthz(560,150,"羽",24,24,RED);
	puthz(50,200,"落天堂",24,24,RED);
	
	puthz(100,250,"推荐理由",24,24,RED);
	outtextxy(200,250,":");
	puthz(210,250,"沿此路线",24,24,RED);
	outtextxy(310,250,",");
	puthz(320,250,"您可以领略到最壮美的风",24,24,RED);
	puthz(50,300,"光以及整个欢乐湖的美景",24,24,RED);
	outtextxy(315,300,",");
	puthz(325,300,"但此路线全程线程较长",24,24,RED);
	outtextxy(565,300,",");
	puthz(575,300,"建",24,24,RED); 
	puthz(50,350,"议准备充足的水以及舒服的鞋子",24,24,RED);

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

