#include"bzx.h"
#include"public.h"
/**************************
NAME:it_1~it_8
FUNCTION:�˸���Ŀ����Ϣ���
***************************/
void it_1(int *page)
{   
    cleardevice();
	setbkcolor(LIGHTGRAY);       
    setcolor(RED);
    settextjustify(LEFT_TEXT, TOP_TEXT);
    settextstyle(TRIPLEX_FONT, HORIZ_DIR,2);
	puthz(220,10,"��갴���⴦��������ͼ����",16,16,RED);
	puthz(100,50,"��Ŀ����",24,24,RED);
	outtextxy(250,50,"1");
	puthz(100,100,"��Ŀ����",24,24,RED);
	puthz(250,100,"ľ��˫��",24,24,RED);
    puthz(100,150,"��Ŀ����ʱ��",24,24,RED);	
	outtextxy(300,150,"8:00~12:00");
	puthz(100,200,"��������",24,24,RED);
	outtextxy(250,200,"14~60");
	puthz(270,250,"��Ŀ���",24,24,RED);
	puthz(50,300,"��������˫��ľ�ʹ�ɽ��",24,24,RED);
    outtextxy(316,300,",");
	puthz(320,300,"ȫ��",24,24,RED);
	outtextxy(370,300,"885");
	puthz(405,300,"��",24,24,RED);
	outtextxy(430,300,",");
	puthz(436,300,"�߶Ȳ��",24,24,RED);
	outtextxy(50,350,"49");
	puthz(80,350,"��",24,24,RED);
	outtextxy(110,350,",");
	puthz(120,350,"���������ڵ�ľͷ�͸ֲ���϶���",24,24,RED);
	outtextxy(495,350,",");
	puthz(510,350,"��",24,24,RED);
	puthz(50,400,"���������ºͶ��ص�ľ�ʸ���",24,24,RED);
	delay(500);
	while(1)
	{
		newmouse(&MouseX,&MouseY,&press);
		if(mouse_press(0,0,639,479)==1)
    	{   	clrmous(MouseX, MouseY);
	            delay(100);
				save_bk_mou(MouseX, MouseY);
	           *page=8;
                break;		    
    	}

    }
}
void it_2(int *page)
{
	
	cleardevice();
	setbkcolor(LIGHTGRAY);       
    setcolor(RED);
    settextjustify(LEFT_TEXT, TOP_TEXT);
    settextstyle(TRIPLEX_FONT, HORIZ_DIR,2);
    puthz(220,10,"��갴���⴦��������ͼ����",16,16,RED);
	puthz(100,50,"��Ŀ����",24,24,RED);
	outtextxy(250,50,"2");
	puthz(100,100,"��Ŀ����",24,24,RED);
	puthz(250,100,"���ٷɳ�",24,24,RED);
	puthz(100,150,"��Ŀ����ʱ��",24,24,RED);	
	outtextxy(300,150,"8:00~12:00");
	puthz(100,200,"��������",24,24,RED);
	outtextxy(250,200,"14~60");
	puthz(270,250,"��Ŀ���",24,24,RED);
	puthz(50,300,"�й�������ĵ����ɽ��",24,24,RED);
	outtextxy(345,300,",");
	puthz(355,300,"ȫ��",24,24,RED);
	outtextxy(410,300,"795");
	puthz(445,300,"��",24,24,RED);
	outtextxy(475,300,",");
	puthz(485,300,"��ߵ�ﵽ",24,24,RED);
	outtextxy(50,350,"69.5");
	puthz(100,350,"��",24,24,RED);
	outtextxy(130,350,",");
	puthz(140,350,"������ÿ��",24,24,RED);
	outtextxy(260,350,"28");
	puthz(290,350,"��",24,24,RED);
	outtextxy(320,350,",");
	puthz(330,350,"��һ���ܹ����οʹ�����",24,24,RED);
	puthz(50,400,"���Ʊ��кʹ̼�����Ĺ�ɽ��",24,24,RED);
	delay(500);
	
	while(1)
	{
		newmouse(&MouseX,&MouseY,&press);
		if(mouse_press(0,0,639,479)==1)
    	{   	clrmous(MouseX, MouseY);
	            delay(100);
				save_bk_mou(MouseX, MouseY);
	           *page=8;
                 break;
    	} 
	}
}
void it_3(int *page)
{
	
	cleardevice();
	setbkcolor(LIGHTGRAY);       
    setcolor(RED);
    settextjustify(LEFT_TEXT, TOP_TEXT);
    settextstyle(TRIPLEX_FONT, HORIZ_DIR,2);
	puthz(220,10,"��갴���⴦��������ͼ����",16,16,RED);
	puthz(100,50,"��Ŀ����",24,24,RED);
	outtextxy(250,50,"3");
	puthz(100,100,"��Ŀ����",24,24,RED);
	puthz(250,100,"Ħ����",24,24,RED);
	puthz(100,150,"��Ŀ����ʱ��",24,24,RED);	
	outtextxy(300,150,"8:00~12:00");
	puthz(100,200,"��������",24,24,RED);
	outtextxy(250,200,"14~60");
	puthz(270,250,"��Ŀ���",24,24,RED);
	outtextxy(50,300,"120");
	puthz(85,300,"��ȫ����߹۹���",24,24,RED);
	outtextxy(280,300,",");
	puthz(290,300,"���������ο͸���������ֹ�",24,24,RED);
	puthz(50,350,"԰��",24,24,RED);
	outtextxy(105,350,",");
	puthz(115,350,"���͵������ľ�ɫ",24,24,RED);
	delay(500);
	while(1)
	{
		newmouse(&MouseX,&MouseY,&press);
		if(mouse_press(0,0,639,479)==1)
    	{   	clrmous(MouseX, MouseY);
	            delay(100);
				save_bk_mou(MouseX, MouseY);
	           *page=8;
                 break;
    	} 
	}
}
void it_4(int *page)
{
	
	cleardevice();
	setbkcolor(LIGHTGRAY);       
    setcolor(RED);
    settextjustify(LEFT_TEXT, TOP_TEXT);
    settextstyle(TRIPLEX_FONT, HORIZ_DIR,2);
	puthz(220,10,"��갴���⴦��������ͼ����",16,16,RED);
	puthz(100,50,"��Ŀ����",24,24,RED);
	outtextxy(250,50,"4");
	puthz(100,100,"��Ŀ����",24,24,RED);
	puthz(250,100,"�����籩",24,24,RED);
	puthz(100,150,"��Ŀ����ʱ��",24,24,RED);	
	outtextxy(300,150,"8:00~12:00");
	puthz(100,200,"��������",24,24,RED);
	outtextxy(250,200,"14~60");
	puthz(270,250,"��Ŀ���",24,24,RED);
	puthz(50,300,"��������",24,24,RED);
	outtextxy(155,300,"360");
	puthz(200,300,"��˫����ת���Ļ�",24,24,RED);
	outtextxy(400,300,",");
	puthz(410,300,"���������οͼ���",24,24,RED);
	puthz(50,350,"�𺳵ĳ��غ�ʧ������",24,24,RED);
	delay(500);
	while(1)
	{
		newmouse(&MouseX,&MouseY,&press);
		if(mouse_press(0,0,639,479)==1)
    	{   	clrmous(MouseX, MouseY);
	            delay(100);
				save_bk_mou(MouseX, MouseY);
	           *page=8;
                 break;
    	} 
	}
	
	
}
void it_5(int *page)
{
	
	cleardevice();
	setbkcolor(LIGHTGRAY);       
    setcolor(RED);
    settextjustify(LEFT_TEXT, TOP_TEXT);
    settextstyle(TRIPLEX_FONT, HORIZ_DIR,2);
	puthz(220,10,"��갴���⴦��������ͼ����",16,16,RED);
	puthz(100,50,"��Ŀ����",24,24,RED);
	outtextxy(250,50,"5");
	puthz(100,100,"��Ŀ����",24,24,RED);
	puthz(250,100,"���˫��",24,24,RED);
	puthz(100,150,"��Ŀ����ʱ��",24,24,RED);	
	outtextxy(300,150,"14:00~18:00");
	puthz(100,200,"��������",24,24,RED);
	outtextxy(250,200,"14~60");
	puthz(270,250,"��Ŀ���",24,24,RED);
	puthz(50,300,"ȫ�����������֮��",24,24,RED);
	outtextxy(270,300,",");
	puthz(280,300,"���������ο���",24,24,RED);
	outtextxy(455,300,"4.5");
	puthz(490,300,"���ڴӾ�ֹ",24,24,RED);
	puthz(50,350,"����",24,24,RED);
	outtextxy(105,350,"19.2");
	puthz(145,350,"�׵ĸ߶�",24,24,RED);
	outtextxy(245,350,",");
	puthz(255,350,"���Լ�������",24,24,RED);
	outtextxy(405,350,",");
	puthz(415,350,"���ִ̼���ֵ��",24,24,RED);
	puthz(50,400,"�ο�������һ��",24,24,RED);
	delay(500);
	while(1)
	{
		newmouse(&MouseX,&MouseY,&press);
		if(mouse_press(0,0,639,479)==1)
    	{   	clrmous(MouseX, MouseY);
	            delay(100);
				save_bk_mou(MouseX, MouseY);
	           *page=8;
                 break;
    	} 
	}
}
void it_6(int *page)
{	
	cleardevice();
	setbkcolor(LIGHTGRAY);       
    setcolor(RED);
    settextjustify(LEFT_TEXT, TOP_TEXT);
    settextstyle(TRIPLEX_FONT, HORIZ_DIR,2);
	puthz(220,10,"��갴���⴦��������ͼ����",16,16,RED);
	puthz(100,50,"��Ŀ����",24,24,RED);
	outtextxy(250,50,"6");
	puthz(100,100,"��Ŀ����",24,24,RED);
	puthz(250,100,"����ջ��",24,24,RED);
	puthz(100,150,"��Ŀ����ʱ��",24,24,RED);	
	outtextxy(300,150,"8:00~18:00");
	puthz(100,200,"��������",24,24,RED);
	puthz(250,200,"����������Ⱥ",24,24,RED);
	puthz(270,250,"��Ŀ���",24,24,RED);
	puthz(50,300,"����һ��ͨ������Ȼ��г֮���ıؾ�֮·",24,24,RED);
	outtextxy(490,300,"!");
	puthz(500,300,"��Ȼ����",24,24,RED);
	puthz(50,350,"�������Ŀ�����ص�",24,24,RED);
	outtextxy(300,350,"!");
	puthz(310,350,"��ӭ�ο���������������",24,24,RED);
	delay(500);
	while(1)
	{
		newmouse(&MouseX,&MouseY,&press);
		if(mouse_press(0,0,639,479)==1)
    	{   	clrmous(MouseX, MouseY);
	            delay(100);
				save_bk_mou(MouseX, MouseY);
	           *page=8;
                 break;
    	} 
	}
	
	
}
void it_7(int *page)
{
	
   	cleardevice();
	setbkcolor(LIGHTGRAY);       
    setcolor(RED);
    settextjustify(LEFT_TEXT, TOP_TEXT);
    settextstyle(TRIPLEX_FONT, HORIZ_DIR,2);
	puthz(220,10,"��갴���⴦��������ͼ����",16,16,RED);
	puthz(100,50,"��Ŀ����",24,24,RED);
	outtextxy(250,50,"7");
	puthz(100,100,"��Ŀ����",24,24,RED);
	puthz(250,100,"���ַɴ�",24,24,RED);
	puthz(100,150,"��Ŀ����ʱ��",24,24,RED);	
	outtextxy(300,150,"8:00~18:00");
	puthz(100,200,"��������",24,24,RED);
	puthz(250,200,"����������Ⱥ",24,24,RED);
	puthz(270,250,"��Ŀ���",24,24,RED);
	puthz(50,300,"����������",24,24,RED);
	outtextxy(180,300,",");
	puthz(190,300,"���ջ�����ת",24,24,RED);
	outtextxy(340,300,",");
	puthz(350,300,"������һ����һ����",24,24,RED);
	puthz(50,350,"����",24,24,RED);
	outtextxy(105,350,",");
	puthz(115,350,"˲�������ٵ�����ֹͣȻ�󷭹�",24,24,RED);
	outtextxy(460,350,",");
	puthz(470,350,"�Ͱְ�����",24,24,RED);
	puthz(50,400,"һ����ת����",24,24,RED);
	outtextxy(205,400,"!");
	delay(500);
	while(1)
	{
		newmouse(&MouseX,&MouseY,&press);
		if(mouse_press(0,0,639,479)==1)
    	{   	clrmous(MouseX, MouseY);
	            delay(100);
				save_bk_mou(MouseX, MouseY);
	           *page=8;
                 break;
    	} 
	}
}

void it_8(int *page)
{
	
	cleardevice();
	setbkcolor(LIGHTGRAY);       
    setcolor(RED);
    settextjustify(LEFT_TEXT, TOP_TEXT);
    settextstyle(TRIPLEX_FONT, HORIZ_DIR,2);
	puthz(220,10,"��갴���⴦��������ͼ����",16,16,RED);
	puthz(100,50,"��Ŀ����",24,24,RED);
	outtextxy(250,50,"8");
	puthz(100,100,"��Ŀ����",24,24,RED);
	puthz(250,100,"�����ﳵ",24,24,RED);
	puthz(100,150,"��Ŀ����ʱ��",24,24,RED);	
	outtextxy(300,150,"14:00~18:00");
	puthz(100,200,"��������",24,24,RED);
	outtextxy(250,200,"14~60");
	puthz(270,250,"��Ŀ���",24,24,RED);
	puthz(50,300,"����㼫�ٳ��",24,24,RED);
	outtextxy(225,300,",");
	outtextxy(235,300,"360");
	puthz(270,300,"�ȱ�Ե��б����ת��",24,24,RED);
	outtextxy(495,300,",");
	puthz(505,300,"����",24,24,RED);
	puthz(50,350,"���ת",24,24,RED);
	outtextxy(155,350,",");
	puthz(165,350,"������ת�Ķ��ؿ��ӿ����ͷ",24,24,RED);
	outtextxy(490,350,",");
	puthz(505,350,"ȫ��",24,24,RED);
	puthz(50,400,"һ���������",24,24,RED);
	delay(500);
	while(1)
	{
		newmouse(&MouseX,&MouseY,&press);
	    if(mouse_press(0,0,639,479)==1)
    	{   	clrmous(MouseX, MouseY);
	            delay(100);
				save_bk_mou(MouseX, MouseY);
	            *page=8;
                 break;
    	} 
	}
	
	
}
void it_9(int  *page)
{
	cleardevice();
	setbkcolor(LIGHTGRAY);       
    setcolor(RED);
    settextjustify(LEFT_TEXT, TOP_TEXT);
    settextstyle(TRIPLEX_FONT, HORIZ_DIR,2);
	puthz(220,10,"��갴���⴦��������ͼ����",16,16,RED);
	puthz(50,220,"�������ʺϹ۹�",24,24,RED);
	outtextxy(230,220,",");
	puthz(240,220,"����������Ŀ",24,24,RED);
	delay(500);
	while(1)
	{
		newmouse(&MouseX,&MouseY,&press);
		if(mouse_press(0,0,639,479)==1)
    	{   	clrmous(MouseX, MouseY);
	            delay(100);
				save_bk_mou(MouseX, MouseY);
	            *page=8;
                 break;
    	} 
	}
	
	
	
}
