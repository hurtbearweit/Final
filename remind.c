#include"bzx.h"
#include"public.h"

void remind(int *page,int a,int num)
{   int tag=0;
    int b=num;
	int c=a;
    cleardevice();
    clrmous(MouseX,MouseY);
	save_bk_mou(MouseX,MouseY); 
    drawremind(c,b);
	while(1)
	{
		newmouse(&MouseX,&MouseY,&press);
		if(MouseX>540&&MouseX<600&&MouseY>420&&MouseY<460)
		{
			if(mouse_press(540,420,600,460)==2)
			{
				MouseS=1;
				if(tag==0)
				{
					 tag=1;
					 clrmous(MouseX,MouseY);
	                 delay(10);
					 setfillstyle(1,LIGHTGRAY);
	                 bar(540,420,600,460);	
	                 setcolor(WHITE);
	                 setlinestyle(0,0,1);
	                 rectangle(540,420,600,460);
	                 puthz(548,430,"返回",24,24,LIGHTCYAN);
				}
				continue;
			}
			else if(mouse_press(540,420,600,460)==1)
			{
				MouseS=0;
				clrmous(MouseX,MouseY);
				*page=3;
				break;
			}
		}
		if(tag!=0)
		{   clrmous(MouseX,MouseY);
	        delay(10);
			setfillstyle(1,WHITE);
	        bar(20,90,620,400);
	        bar(540,420,600,460);
	        puthz(548,430,"返回",24,24,LIGHTGRAY);
			tag=0;
		}
	}
}

void drawremind(int a,int n)
{   int l;
    int count=0;
	int i,j;
	FILE *fp;
	USER *r;
	char b[20];    //打印现在进行到的排队号
	char c[20];    //打印用户应付的总金额
	itoa(a,b,10);
	cleardevice();
	setbkcolor(DARKGRAY);     //背景 
	setfillstyle(1,BLUE);
	bar(0,0,640,80);
	puthz(190,35,"武汉欢乐谷消息提醒",32,32,RED);
	setfillstyle(1,WHITE);
	bar(20,90,620,400);
	bar(540,420,600,460);
	puthz(548,430,"返回",24,24,LIGHTGRAY);
	if ((fp = fopen(".\\TEXT\\USER.dat", "rb+")) == NULL) 
	{
		printf("\nError on open file userdata.dat");
		delay(3000);
		exit(1);
	}
	fseek(fp,0,SEEK_END);                                  
	l=ftell(fp)/sizeof(USER); 
	for(i=0;i<l;i++)
	{
		if((r=(USER*)malloc(sizeof(USER)))==NULL)
		    {
			    printf("Memory not enough!");
			    delay(3000);
			    exit(1);
		    }
	    fseek(fp,i*sizeof(USER),SEEK_SET);
		fread(r,sizeof(USER),1,fp);
		if(r->num==n)
		{    itoa(r->money,c,10);
			for(j=0;j<8;j++)
			{
				if((r->it[j]<(a+20))&&r->it[j]>a)
				{   setcolor(RED);
					puthz(25,95+count*30,"项目",24,24,RED);
					outtextxy(75,95+count*30,":");
					switch(j)
					{
					case 0:
						puthz(85,95+count*30,"音乐飞船",24,24,BLUE);
						break;
					case 1:
						puthz(85,95+count*30,"疯狂溜达车",24,24,BLUE);
						break;
					case 2:
						puthz(85,95+count*30,"天地双雄",24,24,BLUE);
						break;				
					case 3:
						puthz(85,95+count*30,"完美风暴",24,24,BLUE);
						break;
					case 4:
						puthz(85,95+count*30,"木翼双龙",24,24,BLUE);							
						break;
					case 5:
						puthz(85,95+count*30,"摩天塔",24,24,BLUE);
						break;
					case 6:
						puthz(85,95+count*30,"莲花栈道",24,24,BLUE);
						break;
					case 7:
						puthz(85,95+count*30,"极速飞车",24,24,BLUE);
						break;
					}
					puthz(210,95+count*30,"马上将轮到您体验了",24,24,RED);
					puthz(430,95+count*30,"现进行到",24,24,RED);
					setcolor(BLUE);
					outtextxy(530,95+count*30,b);
					count++;
				}
				else
				{
					continue;
				}
			}
			
			for(j=0;j<5;j++)
			{
				if(r->special[j]!=0)
				{
					puthz(25,95+count*30,"您已成功预约",24,24,RED);
					switch(j)
					{
						case 0:
						      puthz(175,95+count*30,"特殊餐饮服务",24,24,BLUE);
							  break;
						case 1:
						      puthz(175,95+count*30,"特殊表演",24,24,BLUE);
							  break;
					    case 2:
						      puthz(175,95+count*30,"会员导览",24,24,BLUE);
							  break;
						case 3:
						      setcolor(BLUE);
						      outtextxy(175,95+count*30,"VR");
							  puthz(208,95+count*30,"体验",24,24,BLUE);
							  break;
						case 4:
						      puthz(175,95+count*30,"特色过山车",24,24,BLUE);
							  break;
					}
					count++;
				}
			}
			if(r!=NULL)
			{
				free(r);
				r=NULL;
			}
			 if(fclose(fp) != 0)
			 {
				  printf("\nError on close UserData.dat!");
				  delay(3000);
				  exit(1);
			 }
			 break;
		}
		else
		{
			if(r!=NULL)
			{
				free(r);
				r=NULL;
			}
			continue;
		}
	}
	puthz(25,95+count*30,"您实际应付金额为",24,24,RED);
	setcolor(GREEN);
	outtextxy(225,95+count*30,c);
	puthz(300,95+count*30,"元",24,24,RED);
	if(i==l)
	{
		 if(fclose(fp) != 0)
			 {
				  printf("\nError on close UserData.dat!");
				  delay(3000);
				  exit(1);
			 }
	}
}