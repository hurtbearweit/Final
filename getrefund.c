#include"bzx.h"
#include"public.h"
void getrefund(int *page,int num)
{   int a=num;
    int tag;
    int flag;
    int pos1;  //��ⷵ�ؼ�
	int pos2;  //��������1
	int pos3;  //��������2
	int pos4;  //��������3
	int jun1=0;
	int jun2=0;
	int jun3=0;
	int jun4=0;
	int rc;
	int ra;
	int rs;
	int ro;
	char mon[10]; 
	char day[20];
	char n[20];
	mon[0]='\0';
	day[0]='\0';
	n[0]='\0';
    cleardevice();
    clrmous(MouseX,MouseY);
	save_bk_mou(MouseX,MouseY);
	drawrefund();
	while(1)
	{    newmouse(&MouseX,&MouseY,&press);
		if(MouseX>540&&MouseX<600&&MouseY>420&&MouseY<460)
		{           
			if(mouse_press(540,420,600,460)==2)
			{
				MouseS=1;
				if(tag==0&&pos1!=5)
				{   pos1=5;
				    tag=1;
					Light_ticket1(pos1);
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
		}        //���ؼ�
		if(MouseX>270&&MouseX<345&&MouseY>245&&MouseY<270)
		{           
			if(mouse_press(270,245,345,270)==2)
			{
				MouseS=1;
				continue;
			}
			else if(mouse_press(270,245,345,270)==1)
			{     MouseS=0;
		          if(jun1==1)
				{
					jun1=0;
				}
				else
				{
					jun1=1;
					jun2=0;
					jun3=0;
					jun4=0;
				}
				if(jun1==1)
				{    clrmous(MouseX,MouseY);
				     delay(100);
				     save_bk_mou(MouseX, MouseY);
					 setcolor(RED);
	                 setlinestyle(0,0,1);
	                 rectangle(270,245,345,270);
	                 puthz(270,245,"��ͯƱ",24,24,RED);
					 setcolor(BLACK);
					 rectangle(385,245,460,270);
	                 puthz(385,245,"����Ʊ",24,24,BLACK);
					 rectangle(270,280,345,305);
	                 puthz(270,280,"ѧ��Ʊ",24,24,BLACK);
					 rectangle(385,280,460,305);
	                 puthz(385,280,"����Ʊ",24,24,BLACK);
				}
				else
				{   clrmous(MouseX,MouseY);
				    delay(100);
				    save_bk_mou(MouseX, MouseY);
					setcolor(BLACK);
	                setlinestyle(0,0,1);
	                rectangle(270,245,345,270);
	                puthz(270,245,"��ͯƱ",24,24,BLACK);
					rectangle(385,245,460,270);
	                puthz(385,245,"����Ʊ",24,24,BLACK);
					rectangle(270,280,345,305);
	                puthz(270,280,"ѧ��Ʊ",24,24,BLACK);
					rectangle(385,280,460,305);
	                puthz(385,280,"����Ʊ",24,24,BLACK);
				}
			     continue;
			}
		}        //��ͯƱ
		if(MouseX>385&&MouseX<460&&MouseY>245&&MouseY<270)
		{           
			if(mouse_press(385,245,460,270)==2)
			{
				MouseS=1;
				continue;
			}
			else if(mouse_press(385,245,460,270)==1)
			{     MouseS=0;
		          if(jun2==1)
				{
					jun2=0;
				}
				else
				{
					jun1=0;
					jun2=1;
					jun3=0;
					jun4=0;
				}
				if(jun2==1)
				{    clrmous(MouseX,MouseY);
				     delay(100);
				     save_bk_mou(MouseX, MouseY);
					 setcolor(RED);
	                 setlinestyle(0,0,1);
	                 rectangle(385,245,460,270);
	                 puthz(385,245,"����Ʊ",24,24,RED);
					 setcolor(BLACK);
					 rectangle(270,245,345,270);
	                puthz(270,245,"��ͯƱ",24,24,BLACK);
					rectangle(270,280,345,305);
	                puthz(270,280,"ѧ��Ʊ",24,24,BLACK);
					rectangle(385,280,460,305);
	                puthz(385,280,"����Ʊ",24,24,BLACK);
				}
				else
				{   clrmous(MouseX,MouseY);
				    delay(100);
				    save_bk_mou(MouseX, MouseY);
					setcolor(BLACK);
	                setlinestyle(0,0,1);
	               rectangle(385,245,460,270);
	               puthz(385,245,"����Ʊ",24,24,BLACK);
				   rectangle(270,245,345,270);
	                puthz(270,245,"��ͯƱ",24,24,BLACK);
					rectangle(270,280,345,305);
	                puthz(270,280,"ѧ��Ʊ",24,24,BLACK);
					rectangle(385,280,460,305);
	                puthz(385,280,"����Ʊ",24,24,BLACK);
				}
			     continue;
			}
		}        //����Ʊ
		if(MouseX>270&&MouseX<345&&MouseY>280&&MouseY<305)
		{           
			if(mouse_press(270,280,345,305)==2)
			{
				MouseS=1;
				continue;
			}
			else if(mouse_press(270,280,345,305)==1)
			{     MouseS=0;
		          if(jun3==1)
				{
					jun3=0;
				}
				else
				{
					jun1=0;
					jun2=0;
					jun3=1;
					jun4=0;
				}
				if(jun3==1)
				{    clrmous(MouseX,MouseY);
				     delay(100);
				     save_bk_mou(MouseX, MouseY);
					 setcolor(RED);
	                 setlinestyle(0,0,1);
	                 rectangle(270,280,345,305);
	                 puthz(270,280,"ѧ��Ʊ",24,24,RED);
					 setcolor(BLACK);
					 rectangle(270,245,345,270);
	                 puthz(270,245,"��ͯƱ",24,24,BLACK);
					 rectangle(385,245,460,270);
	                 puthz(385,245,"����Ʊ",24,24,BLACK);
				     rectangle(385,280,460,305);
	                  puthz(385,280,"����Ʊ",24,24,BLACK);
				}
				else
				{   clrmous(MouseX,MouseY);
				    delay(100);
				    save_bk_mou(MouseX, MouseY);
					setcolor(BLACK);
	                setlinestyle(0,0,1);
	                rectangle(270,280,345,305);
	                puthz(270,280,"ѧ��Ʊ",24,24,BLACK);
				    rectangle(270,245,345,270);
	                 puthz(270,245,"��ͯƱ",24,24,BLACK);
					 rectangle(385,245,460,270);
	                 puthz(385,245,"����Ʊ",24,24,BLACK);
				     rectangle(385,280,460,305);
	                  puthz(385,280,"����Ʊ",24,24,BLACK);
				
				}
			     continue;
			}
		}        //ѧ��Ʊ
		if(MouseX>385&&MouseX<460&&MouseY>280&&MouseY<305)
		{           
			if(mouse_press(385,280,460,305)==2)
			{
				MouseS=1;
				continue;
			}
			else if(mouse_press(385,280,460,305)==1)
			{     MouseS=0;
		          if(jun4==1)
				{
					jun4=0;
				}
				else
				{
					jun1=0;
					jun2=0;
					jun3=0;
					jun4=1;
				}
				if(jun4==1)
				{   clrmous(MouseX,MouseY);
				    delay(100);
				    save_bk_mou(MouseX, MouseY);
					setcolor(RED);
	                setlinestyle(0,0,1);
	                rectangle(385,280,460,305);
	                puthz(385,280,"����Ʊ",24,24,RED);
					setcolor(BLACK);
					rectangle(270,245,345,270);
	                puthz(270,245,"��ͯƱ",24,24,BLACK);
					rectangle(385,245,460,270);
	                puthz(385,245,"����Ʊ",24,24,BLACK);
					rectangle(270,280,345,305);
	                puthz(270,280,"ѧ��Ʊ",24,24,BLACK);
				}
				else
				{   clrmous(MouseX,MouseY);
				    delay(100);
				    save_bk_mou(MouseX, MouseY);
					setcolor(BLACK);
	                setlinestyle(0,0,1);
	                rectangle(385,280,460,305);
	                puthz(385,280,"����Ʊ",24,24,BLACK);
					rectangle(270,245,345,270);
	                puthz(270,245,"��ͯƱ",24,24,BLACK);
					rectangle(385,245,460,270);
	                puthz(385,245,"����Ʊ",24,24,BLACK);
					rectangle(270,280,345,305);
	                puthz(270,280,"ѧ��Ʊ",24,24,BLACK);
				}
			     continue;
			}
		}        //����Ʊ
		if(MouseX>270&&MouseX<320&&MouseY>205&&MouseY<230)
		{           
			if(mouse_press(270,205,320,230)==2)
			{
				MouseS=1;
				if(tag==0&&flag==0&&pos2==0)
				{   flag=1;
				    tag=1;
					pos2=0;
					light_input(270,205,320,230);
				}
				continue;
			}
			else if(mouse_press(270,205,320,230)==1)
			{
				MouseS=0;
				light_input(270,205,320,230);
                mon[0]='\0';                                  //���֮ǰ������
				setfillstyle(1,DARKGRAY);
				Input_Vis(mon,270,205,12,LIGHTGRAY);
                if(strlen(mon)!= 0)                           //�ж��Ƿ��������
					pos2=1;                                    //�����������б��
				else
					pos2=0;				
				continue;
			}
		}        //�����1
		if(MouseX>355&&MouseX<435&&MouseY>205&&MouseY<230)
		{           
			if(mouse_press(355,205,435,230)==2)
			{
				MouseS=1;
				if(tag==0&&flag==0&&pos3==0)
				{   flag=1;
				    tag=1;
					pos3=0;
					light_input(355,205,435,230);
				}
				continue;
			}
			else if(mouse_press(355,205,435,230)==1)
			{
				MouseS=0;
				light_input(355,205,435,230);
                day[0]='\0';                                  //���֮ǰ������
				setfillstyle(1,DARKGRAY);
				Input_Vis(day,355,205,12,LIGHTGRAY);
                if(strlen(day)!= 0)                           //�ж��Ƿ��������
					pos3=1;                                    //�����������б��
				else
					pos3=0;				
				continue;
			}
		}        //�����2
		if(MouseX>270&&MouseX<380&&MouseY>315&&MouseY<340)
		{           
			if(mouse_press(270,315,380,340)==2)
			{
				MouseS=1;
				if(tag==0&&flag==0&&pos4==0)
				{   flag=1;
				    tag=1;
					pos4=0;
					light_input(270,315,380,340);
				}
				continue;
			}
			else if(mouse_press(270,315,380,340)==1)
			{
				MouseS=0;
				light_input(270,315,380,340);
                n[0]='\0';                                  //���֮ǰ������
				setfillstyle(1,DARKGRAY);
				Input_Vis(n,270,315,12,LIGHTGRAY);
                if(strlen(n)!= 0)                           //�ж��Ƿ��������
					pos4=1;                                 //�����������б��
				else
					pos4=0;				
				continue;
			}
		}        //�����3
		
		if(MouseX>250&&MouseX<350&&MouseY>360&&MouseY<390)
		{           
			if(mouse_press(250,360,350,390)==2)
			{
				MouseS=1;
				continue;
			}
			else if(mouse_press(250,360,350,390)==1)
			{
				MouseS=0;
				if(jun1==1)
				{   rc=datachild(mon,day,n,a);
					if(rc==0)
					{
						setfillstyle(SOLID_FILL, WHITE);
                        bar(200,180,440,300);
                        rectangle(200,180,440,300);
                        setfillstyle(SOLID_FILL, WHITE);
		                puthz(274,220,"������Ʊ",24,24,RED);
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
		                puthz(274,200,"��Ʊʧ��",24,24,RED);
						puthz(274,235,"����Υ��",24,24,RED);
		                delay(3000);
				        clrmous(MouseX,MouseY);
				        delay(100);
				        save_bk_mou(MouseX, MouseY);
				        *page=53;
				         break;
					}
					if(rc==1)
					{
						setfillstyle(SOLID_FILL, WHITE);
                        bar(200,180,440,300);
                        rectangle(200,180,440,300);
                        setfillstyle(SOLID_FILL, WHITE);
		                puthz(274,220,"������Ʊ",24,24,RED);
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
		                puthz(274,230,"��Ʊ�ɹ�",24,24,RED);
		                delay(3000);
				        clrmous(MouseX,MouseY);
				        delay(100);
				        save_bk_mou(MouseX, MouseY);
				        *page=53;
				         break;
					}
					if(rc==2)
					{
						setfillstyle(SOLID_FILL, WHITE);
                        bar(200,180,440,300);
                        rectangle(200,180,440,300);
                        setfillstyle(SOLID_FILL, WHITE);
		                puthz(274,220,"������Ʊ",24,24,RED);
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
		                puthz(274,200,"��Ʊʧ��",24,24,RED);
						puthz(260,235,"��������",24,24,RED);
		                delay(3000);
				        clrmous(MouseX,MouseY);
				        delay(100);
				        save_bk_mou(MouseX, MouseY);
				        *page=53;
				         break;
					}
				}
				if(jun2==1)
				{   ra=dataadult(mon,day,n,a);
					if(ra==0)
					{
						setfillstyle(SOLID_FILL, WHITE);
                        bar(200,180,440,300);
                        rectangle(200,180,440,300);
                        setfillstyle(SOLID_FILL, WHITE);
		                puthz(274,220,"������Ʊ",24,24,RED);
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
		                puthz(274,200,"��Ʊʧ��",24,24,RED);
						puthz(274,235,"����Υ��",24,24,RED);
		                delay(3000);
				        clrmous(MouseX,MouseY);
				        delay(100);
				        save_bk_mou(MouseX, MouseY);
				        *page=53;
				         break;
					}
					if(ra==1)
					{
						setfillstyle(SOLID_FILL, WHITE);
                        bar(200,180,440,300);
                        rectangle(200,180,440,300);
                        setfillstyle(SOLID_FILL, WHITE);
		                puthz(274,220,"������Ʊ",24,24,RED);
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
		                puthz(274,230,"��Ʊ�ɹ�",24,24,RED);
		                delay(3000);
				        clrmous(MouseX,MouseY);
				        delay(100);
				        save_bk_mou(MouseX, MouseY);
				        *page=53;
				         break;
					}
					if(ra==2)
					{
						setfillstyle(SOLID_FILL, WHITE);
                        bar(200,180,440,300);
                        rectangle(200,180,440,300);
                        setfillstyle(SOLID_FILL, WHITE);
		                puthz(274,220,"������Ʊ",24,24,RED);
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
		                puthz(274,200,"��Ʊʧ��",24,24,RED);
						puthz(260,235,"��������",24,24,RED);
		                delay(3000);
				        clrmous(MouseX,MouseY);
				        delay(100);
				        save_bk_mou(MouseX, MouseY);
				        *page=53;
				         break;
					}
				}
				if(jun3==1)
				{   rs=datastu(mon,day,n,a);
					if(rs==0)
					{
						setfillstyle(SOLID_FILL, WHITE);
                        bar(200,180,440,300);
                        rectangle(200,180,440,300);
                        setfillstyle(SOLID_FILL, WHITE);
		                puthz(274,220,"������Ʊ",24,24,RED);
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
		                puthz(274,200,"��Ʊʧ��",24,24,RED);
						puthz(274,235,"����Υ��",24,24,RED);
		                delay(3000);
				        clrmous(MouseX,MouseY);
				        delay(100);
				        save_bk_mou(MouseX, MouseY);
				        *page=53;
				         break;
					}
					if(rs==1)
					{
						setfillstyle(SOLID_FILL, WHITE);
                        bar(200,180,440,300);
                        rectangle(200,180,440,300);
                        setfillstyle(SOLID_FILL, WHITE);
		                puthz(274,220,"������Ʊ",24,24,RED);
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
		                puthz(274,230,"��Ʊ�ɹ�",24,24,RED);
		                delay(3000);
				        clrmous(MouseX,MouseY);
				        delay(100);
				        save_bk_mou(MouseX, MouseY);
				        *page=53;
				         break;
					}
					if(rs==2)
					{
						setfillstyle(SOLID_FILL, WHITE);
                        bar(200,180,440,300);
                        rectangle(200,180,440,300);
                        setfillstyle(SOLID_FILL, WHITE);
		                puthz(274,220,"������Ʊ",24,24,RED);
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
		                puthz(274,200,"��Ʊʧ��",24,24,RED);
						puthz(260,235,"��������",24,24,RED);
		                delay(3000);
				        clrmous(MouseX,MouseY);
				        delay(100);
				        save_bk_mou(MouseX, MouseY);
				        *page=53;
				         break;
					}
				}
				if(jun4==1)
				{   ro=dataold(mon,day,n,a);
					if(ro==0)
					{
						setfillstyle(SOLID_FILL, WHITE);
                        bar(200,180,440,300);
                        rectangle(200,180,440,300);
                        setfillstyle(SOLID_FILL, WHITE);
		                puthz(274,220,"������Ʊ",24,24,RED);
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
		                puthz(274,200,"��Ʊʧ��",24,24,RED);
						puthz(274,235,"����Υ��",24,24,RED);
		                delay(3000);
				        clrmous(MouseX,MouseY);
				        delay(100);
				        save_bk_mou(MouseX, MouseY);
				        *page=53;
				         break;
					}
					if(ro==1)
					{
						setfillstyle(SOLID_FILL, WHITE);
                        bar(200,180,440,300);
                        rectangle(200,180,440,300);
                        setfillstyle(SOLID_FILL, WHITE);
		                puthz(274,220,"������Ʊ",24,24,RED);
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
		                puthz(274,230,"��Ʊ�ɹ�",24,24,RED);
		                delay(3000);
				        clrmous(MouseX,MouseY);
				        delay(100);
				        save_bk_mou(MouseX, MouseY);
				        *page=53;
				         break;
					}
					if(ro==2)
					{
						setfillstyle(SOLID_FILL, WHITE);
                        bar(200,180,440,300);
                        rectangle(200,180,440,300);
                        setfillstyle(SOLID_FILL, WHITE);
		                puthz(274,220,"������Ʊ",24,24,RED);
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
		                puthz(274,200,"��Ʊʧ��",24,24,RED);
						puthz(260,235,"��������",24,24,RED);
		                delay(3000);
				        clrmous(MouseX,MouseY);
				        delay(100);
				        save_bk_mou(MouseX, MouseY);
				        *page=53;
				         break;
					}
				}
	
			}
		}        //ȷ����Ʊ
		if(tag!=0)
		{
			if(pos1!=0)
			{
				Dark_ticket1(pos1);
				pos1=0;
			}
			if(pos2==0)
			{
				dark_input(270,205,320,230);
			}
			if(pos3==0)
			{
				dark_input(355,205,435,230);
			}
			if(pos4==0)
			{
				dark_input(270,315,380,340);
			}
			tag=0;
			flag=0;
		}		     
		if(MouseS!=0)
	    {
		    MouseS=0;
	    }
		
	}
}

void drawrefund()
{
	cleardevice();
	setbkcolor(DARKGRAY);   
	
	setfillstyle(1,BLUE);
	bar(0,0,640,60);
	puthz(190,14,"�人���ֹ���Ʊ����",32,32,LIGHTGRAY);
	
	setfillstyle(1,WHITE);
	setcolor(RED);
	bar(10,100,630,410);
	puthz(25,110,"����Ʊ����ʹ��ǰ������Ʊ",24,24,RED);
	outtextxy(318,110,",");
	puthz(328,110,"�˿��ԭ·������������",24,24,RED);
	puthz(25,140,"��",24,24,RED);
	outtextxy(55,140,",");
	puthz(65,140,"Ԥ��ʱ�䲻����",24,24,RED);
	outtextxy(240,140,"2");
	puthz(250,140,"Сʱ",24,24,RED);
	
	puthz(215,170,"��������Ĳ���",32,32,RED);
	puthz(140,205,"����������",24,24,RED);
	setfillstyle(1,LIGHTGRAY);
    bar(270,205,320,230);
	puthz(325,205,"��",24,24,RED);
	bar(355,205,435,230);
	puthz(440,205,"��",24,24,RED);
	puthz(140,245,"��ѡ��Ʊ��",24,24,RED);
	setcolor(BLACK);
	setlinestyle(0,0,1);
	rectangle(270,245,345,270);
	puthz(270,245,"��ͯƱ",24,24,BLACK);
	rectangle(385,245,460,270);
	puthz(385,245,"����Ʊ",24,24,BLACK);
	rectangle(270,280,345,305);
	puthz(270,280,"ѧ��Ʊ",24,24,BLACK);
	rectangle(385,280,460,305);
	puthz(385,280,"����Ʊ",24,24,BLACK);
	puthz(140,315,"����������",24,24,RED);
	setfillstyle(1,LIGHTGRAY);
    bar(270,315,380,340);
	setfillstyle(1,WHITE);
	bar(540,420,600,460);
	puthz(548,430,"����",24,24,LIGHTGRAY);
	setfillstyle(1,GREEN);
	bar(250,360,350,390);
	puthz(252,365,"ȷ����Ʊ",24,24,WHITE);
}
