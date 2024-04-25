#include"bzx.h"
#include"public.h"
/**************************
NAME:it_1~it_8
FUNCTION:八个项目的信息输出
***************************/
void it_1(int *page)
{   
    cleardevice();
	setbkcolor(LIGHTGRAY);       
    setcolor(RED);
    settextjustify(LEFT_TEXT, TOP_TEXT);
    settextstyle(TRIPLEX_FONT, HORIZ_DIR,2);
	puthz(220,10,"鼠标按任意处返回至地图界面",16,16,RED);
	puthz(100,50,"项目代号",24,24,RED);
	outtextxy(250,50,"1");
	puthz(100,100,"项目名称",24,24,RED);
	puthz(250,100,"木翼双龙",24,24,RED);
    puthz(100,150,"项目开放时间",24,24,RED);	
	outtextxy(300,150,"8:00~12:00");
	puthz(100,200,"适宜年龄",24,24,RED);
	outtextxy(250,200,"14~60");
	puthz(270,250,"项目简介",24,24,RED);
	puthz(50,300,"亚洲首座双龙木质过山车",24,24,RED);
    outtextxy(316,300,",");
	puthz(320,300,"全长",24,24,RED);
	outtextxy(370,300,"885");
	puthz(405,300,"米",24,24,RED);
	outtextxy(430,300,",");
	puthz(436,300,"高度差达",24,24,RED);
	outtextxy(50,350,"49");
	puthz(80,350,"米",24,24,RED);
	outtextxy(110,350,",");
	puthz(120,350,"由美国进口的木头和钢材组合而成",24,24,RED);
	outtextxy(495,350,",");
	puthz(510,350,"能",24,24,RED);
	puthz(50,400,"带给您极致和独特的木质感受",24,24,RED);
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
    puthz(220,10,"鼠标按任意处返回至地图界面",16,16,RED);
	puthz(100,50,"项目代号",24,24,RED);
	outtextxy(250,50,"2");
	puthz(100,100,"项目名称",24,24,RED);
	puthz(250,100,"极速飞车",24,24,RED);
	puthz(100,150,"项目开放时间",24,24,RED);	
	outtextxy(300,150,"8:00~12:00");
	puthz(100,200,"适宜年龄",24,24,RED);
	outtextxy(250,200,"14~60");
	puthz(270,250,"项目简介",24,24,RED);
	puthz(50,300,"中国最高最快的弹射过山车",24,24,RED);
	outtextxy(345,300,",");
	puthz(355,300,"全长",24,24,RED);
	outtextxy(410,300,"795");
	puthz(445,300,"米",24,24,RED);
	outtextxy(475,300,",");
	puthz(485,300,"最高点达到",24,24,RED);
	outtextxy(50,350,"69.5");
	puthz(100,350,"米",24,24,RED);
	outtextxy(130,350,",");
	puthz(140,350,"极速至每秒",24,24,RED);
	outtextxy(260,350,"28");
	puthz(290,350,"米",24,24,RED);
	outtextxy(320,350,",");
	puthz(330,350,"是一种能够给游客带来极",24,24,RED);
	puthz(50,400,"致推背感和刺激体验的过山车",24,24,RED);
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
	puthz(220,10,"鼠标按任意处返回至地图界面",16,16,RED);
	puthz(100,50,"项目代号",24,24,RED);
	outtextxy(250,50,"3");
	puthz(100,100,"项目名称",24,24,RED);
	puthz(250,100,"摩天塔",24,24,RED);
	puthz(100,150,"项目开放时间",24,24,RED);	
	outtextxy(300,150,"8:00~12:00");
	puthz(100,200,"适宜年龄",24,24,RED);
	outtextxy(250,200,"14~60");
	puthz(270,250,"项目简介",24,24,RED);
	outtextxy(50,300,"120");
	puthz(85,300,"米全球最高观光塔",24,24,RED);
	outtextxy(280,300,",");
	puthz(290,300,"它将带领游客俯瞰整个欢乐谷",24,24,RED);
	puthz(50,350,"园区",24,24,RED);
	outtextxy(105,350,",");
	puthz(115,350,"欣赏到绝美的景色",24,24,RED);
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
	puthz(220,10,"鼠标按任意处返回至地图界面",16,16,RED);
	puthz(100,50,"项目代号",24,24,RED);
	outtextxy(250,50,"4");
	puthz(100,100,"项目名称",24,24,RED);
	puthz(250,100,"完美风暴",24,24,RED);
	puthz(100,150,"项目开放时间",24,24,RED);	
	outtextxy(300,150,"8:00~12:00");
	puthz(100,200,"适宜年龄",24,24,RED);
	outtextxy(250,200,"14~60");
	puthz(270,250,"项目简介",24,24,RED);
	puthz(50,300,"亚洲至尊",24,24,RED);
	outtextxy(155,300,"360");
	puthz(200,300,"度双层旋转离心机",24,24,RED);
	outtextxy(400,300,",");
	puthz(410,300,"它将带给游客极具",24,24,RED);
	puthz(50,350,"震撼的超重和失重体验",24,24,RED);
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
	puthz(220,10,"鼠标按任意处返回至地图界面",16,16,RED);
	puthz(100,50,"项目代号",24,24,RED);
	outtextxy(250,50,"5");
	puthz(100,100,"项目名称",24,24,RED);
	puthz(250,100,"天地双雄",24,24,RED);
	puthz(100,150,"项目开放时间",24,24,RED);	
	outtextxy(300,150,"14:00~18:00");
	puthz(100,200,"适宜年龄",24,24,RED);
	outtextxy(250,200,"14~60");
	puthz(270,250,"项目简介",24,24,RED);
	puthz(50,300,"全球重力穿梭机之王",24,24,RED);
	outtextxy(270,300,",");
	puthz(280,300,"它将带领游客在",24,24,RED);
	outtextxy(455,300,"4.5");
	puthz(490,300,"秒内从静止",24,24,RED);
	puthz(50,350,"到达",24,24,RED);
	outtextxy(105,350,"19.2");
	puthz(145,350,"米的高度",24,24,RED);
	outtextxy(245,350,",");
	puthz(255,350,"再以极速下落",24,24,RED);
	outtextxy(405,350,",");
	puthz(415,350,"那种刺激感值得",24,24,RED);
	puthz(50,400,"游客们体验一番",24,24,RED);
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
	puthz(220,10,"鼠标按任意处返回至地图界面",16,16,RED);
	puthz(100,50,"项目代号",24,24,RED);
	outtextxy(250,50,"6");
	puthz(100,100,"项目名称",24,24,RED);
	puthz(250,100,"莲花栈道",24,24,RED);
	puthz(100,150,"项目开放时间",24,24,RED);	
	outtextxy(300,150,"8:00~18:00");
	puthz(100,200,"适宜年龄",24,24,RED);
	puthz(250,200,"所有年龄人群",24,24,RED);
	puthz(270,250,"项目简介",24,24,RED);
	puthz(50,300,"这是一条通往大自然和谐之美的必经之路",24,24,RED);
	outtextxy(490,300,"!");
	puthz(500,300,"自然美好",24,24,RED);
	puthz(50,350,"是这个项目最大的特点",24,24,RED);
	outtextxy(300,350,"!");
	puthz(310,350,"欢迎游客们来此享受美景",24,24,RED);
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
	puthz(220,10,"鼠标按任意处返回至地图界面",16,16,RED);
	puthz(100,50,"项目代号",24,24,RED);
	outtextxy(250,50,"7");
	puthz(100,100,"项目名称",24,24,RED);
	puthz(250,100,"音乐飞船",24,24,RED);
	puthz(100,150,"项目开放时间",24,24,RED);	
	outtextxy(300,150,"8:00~18:00");
	puthz(100,200,"适宜年龄",24,24,RED);
	puthz(250,200,"所有年龄人群",24,24,RED);
	puthz(270,250,"项目简介",24,24,RED);
	puthz(50,300,"伴随着音乐",24,24,RED);
	outtextxy(180,300,",");
	puthz(190,300,"座舱缓缓旋转",24,24,RED);
	outtextxy(340,300,",");
	puthz(350,300,"紧接着一波接一波的",24,24,RED);
	puthz(50,350,"翻滚",24,24,RED);
	outtextxy(105,350,",");
	puthz(115,350,"瞬间提升再跌落再停止然后翻滚",24,24,RED);
	outtextxy(460,350,",");
	puthz(470,350,"和爸爸妈妈",24,24,RED);
	puthz(50,400,"一起玩转心跳",24,24,RED);
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
	puthz(220,10,"鼠标按任意处返回至地图界面",16,16,RED);
	puthz(100,50,"项目代号",24,24,RED);
	outtextxy(250,50,"8");
	puthz(100,100,"项目名称",24,24,RED);
	puthz(250,100,"疯狂溜达车",24,24,RED);
	puthz(100,150,"项目开放时间",24,24,RED);	
	outtextxy(300,150,"14:00~18:00");
	puthz(100,200,"适宜年龄",24,24,RED);
	outtextxy(250,200,"14~60");
	puthz(270,250,"项目简介",24,24,RED);
	puthz(50,300,"火箭般极速冲刺",24,24,RED);
	outtextxy(225,300,",");
	outtextxy(235,300,"360");
	puthz(270,300,"度边缘倾斜极限转弯",24,24,RED);
	outtextxy(495,300,",");
	puthz(505,300,"忽又",24,24,RED);
	puthz(50,350,"疯狂倒转",24,24,RED);
	outtextxy(155,350,",");
	puthz(165,350,"俯冲旋转的多重快感涌上心头",24,24,RED);
	outtextxy(490,350,",");
	puthz(505,350,"全家",24,24,RED);
	puthz(50,400,"一起畅享无穷欢乐",24,24,RED);
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
	puthz(220,10,"鼠标按任意处返回至地图界面",16,16,RED);
	puthz(50,220,"该区域适合观光",24,24,RED);
	outtextxy(230,220,",");
	puthz(240,220,"暂无游乐项目",24,24,RED);
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
