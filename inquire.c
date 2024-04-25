#include"bzx.h"
#include"graph.h"
/**********************
NAME:ticket_1_child
FUNCTION:儿童票的查询订购
**********************/
void  ticket_child(int *page,int num)
{   int a=num;  //接收num
    int tag;
	int flag;//整体点亮情况监测变量
    int pos3;
    int pos4;
    int pos5;
    int pos6;
    int pos7;  //输入框点亮监测变量
	int jun=0;//监测输入合法性
    char num1[20];
    char num2[20];
    char num3[20];
    char num4[20];
    char num5[20];  //临时存储输入的数据
	DATE b[5];      //读取日期
	num1[0]='\0';
	num2[0]='\0';
	num3[0]='\0';
	num4[0]='\0';
	num5[0]='\0';   //初始化
    cleardevice();
    clrmous(MouseX,MouseY);
	save_bk_mou(MouseX,MouseY);
	get_time(b);
    draw_ticket1(b);
    setfillstyle(1,WHITE);
	bar(20,100,620,410);
	puthz(35,110,"最晚在使用当天",24,24,RED);
	setcolor(RED);
	outtextxy(210,110,"18:00");
	puthz(265,110,"前订票且订票成功后立即可用",24,24,RED);
	puthz(35,140,"身高要求为",24,24,RED);
	outtextxy(160,140,"120cm~150cm");
	puthz(320,140,"不含",24,24,RED);
	outtextxy(375,140,"120cm");
	drainquire(260,170,b);
	while(1)
	{
		newmouse(&MouseX,&MouseY,&press);
	   if(MouseX>250&&MouseX<350&&MouseY>350&&MouseY<380)
		{           
			if(mouse_press(250,350,350,380)==2)
			{
				MouseS=1;
				continue;
			}
			else if(mouse_press(250,350,350,380)==1)
			{
				MouseS=0;
	            logging_data(num1,b[0],a);
				logging_data(num2,b[1],a);
				logging_data(num3,b[2],a);
				logging_data(num4,b[3],a);
				logging_data(num5,b[4],a);
				draticket();
		        delay(3000);
				clrmous(MouseX,MouseY);
				 delay(100);
				 save_bk_mou(MouseX, MouseY);
				 *page=51;
				break;
			}
		}         //确认订购
		if(MouseX>540&&MouseX<600&&MouseY>420&&MouseY<460)
		{           
			if(mouse_press(540,420,600,460)==2)
			{
				MouseS=1;
				continue;
			}
			else if(mouse_press(540,420,600,460)==1)
			{
				MouseS=0;
				clrmous(MouseX,MouseY);
				 delay(100);
				 save_bk_mou(MouseX, MouseY);
				 *page=51;
				break;
			}
		}        //返回键
		if(MouseX>200&&MouseX<400&&MouseY>195&&MouseY<220)
		{           
			if(mouse_press(200,195,400,220)==2)
			{
				MouseS=2;
				if(tag==0&&flag==0&&pos3==0)
				{   flag=1;
				    tag=1;
					pos3=0;
					light_input(200,195,400,220);
				}
				continue;
			}
			else if(mouse_press(200,195,400,220)==1)
			{
				MouseS=0;
				light_input(200,195,400,220);
                num1[0]='\0';                                  //清空之前的输入
				setfillstyle(1,DARKGRAY);
				jun=Input_Vis(num1,200,195,3,LIGHTGRAY);
				if(jun==1)
				{
					drajudge();
					jun=0;
					*page=511;
					break;
				}
				if(jun==2)
				{		
                if(strlen(num1)!= 0)                           //判断是否完成输入
				{
					pos3=1;//完成输入则进行标记
				}
				else
				{
					pos3=0;	
			    }
                    jun=0;				
				continue;
				}
			}
		}    //输入框1
		if(MouseX>200&&MouseX<400&&MouseY>225&&MouseY<250)
		{           
			if(mouse_press(200,225,400,250)==2)
			{
				MouseS=2;
				if(tag==0&&flag==0&&pos4==0)
				{   flag=1;
				    tag=1;
					pos4=0;
				    light_input(200,225,400,250);
				}
				continue;
			}
			else if(mouse_press(200,225,400,250)==1)
			{
				MouseS=0;
				light_input(200,225,400,250);
                num2[0]='\0';                                  //清空之前的输入
				setfillstyle(1,DARKGRAY);
				jun=Input_Vis(num2,200,225,3,LIGHTGRAY);
				if(jun==1)
				{
					drajudge();
					jun=0;
					*page=511;
					break;
				}
				if(jun==2)
			    {		
                if(strlen(num2)!= 0)                           //判断是否完成输入
				{
					pos4=1;                                    //完成输入则进行标记
				}
				else
				{
					pos4=0;	
				}
                    jun=0;				
				continue;
				}
			}
		}    //输入框2
		if(MouseX>200&&MouseX<400&&MouseY>255&&MouseY<280)
		{           
			if(mouse_press(200,255,400,280)==2)
			{
				MouseS=2;
				if(tag==0&&flag==0&&pos5==0)
				{   flag=1;
				    tag=1;
					pos5=0;
					light_input(200,255,400,280);
				}
				continue;
			}
			else if(mouse_press(200,255,400,280)==1)
			{
				MouseS=0;
				light_input(200,255,400,280);
                num3[0]='\0';                                  //清空之前的输入
				setfillstyle(1,DARKGRAY);
				jun=Input_Vis(num3,200,255,3,LIGHTGRAY);
				if(jun==1)
				{
					drajudge();
					jun=0;
					*page=511;
					break;
				}
                if(strlen(num3)!= 0)                           //判断是否完成输入
				{
					pos5=1;                                    //完成输入则进行标记
				}
				else
				{
					pos5=0;	
				}
                    jun=0;				
				continue;
			}
		}    //输入框3
		if(MouseX>200&&MouseX<400&&MouseY>285&&MouseY<310)
		{           
			if(mouse_press(200,285,400,310)==2)
			{
				MouseS=2;
				if(tag==0&&flag==0&&pos6==0)
				{   flag=1;
				    tag=1;
					pos6=0;
					light_input(200,285,400,310);
				}
				continue;
			}
			else if(mouse_press(200,285,400,310)==1)
			{
				MouseS=0;
				light_input(200,285,400,310);
                num4[0]='\0';                                  //清空之前的输入
				setfillstyle(1,DARKGRAY);
				jun=Input_Vis(num4,200,285,3,LIGHTGRAY);
				if(jun==1)
			    {
					drajudge();
					jun=0;
					*page=511;
					break;	
				}	
                if(jun==2)
				{					
                if(strlen(num4)!= 0)                           //判断是否完成输入
				{
					pos6=1;                                    //完成输入则进行标记
				}
				else
				{
					pos6=0;
			    }	
                    jun=0;				
				continue;
				}
			}
		}    //输入框4
		if(MouseX>200&&MouseX<400&&MouseY>315&&MouseY<340)
		{           
			if(mouse_press(200,315,400,340)==2)
			{
				MouseS=2;
				if(tag==0&&flag==0&&pos7==0)
				{   flag=1;
				    tag=1;
					pos7=0;
					light_input(200,315,400,340);
				}
				continue;
			}
			else if(mouse_press(200,315,400,340)==1)
			{
				MouseS=0;
				light_input(200,315,400,340);
                num5[0]='\0';                                  //清空之前的输入
				setfillstyle(1,DARKGRAY);
				jun=Input_Vis(num5,200,315,3,LIGHTGRAY);
				if(jun==1)
			    {
					drajudge();
					jun=0;
					*page=511;
					break;
				}	
				if(jun==2)
				{	
                if(strlen(num5)!= 0)                           //判断是否完成输入
				{
					pos7=1;                                    //完成输入则进行标记
				}
				else
				{
					pos7=0;
                }			
                    jun=0;				
				continue;
				}
			}
		}    //输入框5
		if(tag!=0)
		{  
			
			if(pos3==0)
			{
				dark_input(200,195,400,220);
			}
			if(pos4==0)
			{
				dark_input(200,225,400,250);
			}
			if(pos5==0)
			{
				dark_input(200,255,400,280);
			}
			if(pos6==0)
			{
				dark_input(200,285,400,310);
			}
			if(pos7==0)
			{
				dark_input(200,315,400,340);
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


/********************
NAME:light_input
FUNCTION：点亮输入框
********************/
void light_input(int x1,int y1,int x2,int y2)
{       clrmous(MouseX,MouseY);
	    delay(10);
	    setcolor(MAGENTA);
	    setlinestyle(SOLID_LINE,0,NORM_WIDTH);
	    setfillstyle(1,LIGHTGRAY);
	    bar(x1,y1,x2,y2);
	    rectangle(x1,y1,x2,y2);	
	
}
/**********************
NAME:dark_input
FUNCTION：恢复输入框
**********************/
void dark_input(int x1,int y1,int x2,int y2)
{
	clrmous(MouseX, MouseY);
	delay(10);
	setfillstyle(1, LIGHTGRAY);
	bar(x1,y1,x2,y2);
}

/********************************
NMAE:logging_data
FUNCTION：录入数据
********************************/
void logging_data(char *p,DATE q,int a)
{   char d[20];
    int b=0;
	int l=0;
	int lu=0;
	int i;
	int flag=0;
	FILE* fp,*fs;
	USER *t;
	CHILD *r;
	strcpy(d,q.month);
	strcat(d,".");
	strcat(d,q.day);
	if ((fp = fopen(".\\TEXT\\child.dat", "rb+")) == NULL) 
	{
		printf("\nError on open file child.dat");
		delay(3000);
		exit(1);
	}
	if ((fs = fopen(".\\TEXT\\USER.dat", "rb+")) == NULL) 
	{
		printf("\nError on open file UserData.dat");
		delay(3000);
		exit(1);
	}
	fseek(fp,0,SEEK_END);                                  
	l=ftell(fp)/sizeof(CHILD); 
	fseek(fs,0,SEEK_END);                                  
	lu=ftell(fs)/sizeof(USER); 
	for(i=0;i<l;i++)
	{
		if((r=(CHILD*)malloc(sizeof(CHILD)))==NULL)
		    {
			    printf("Memory not enough!");
			    delay(3000);
			    exit(1);
		    }
		fseek(fp,i*sizeof(CHILD),SEEK_SET);
		fread(r,sizeof(CHILD),1,fp);
		if(r->n==a)
		{
			if(strcmp(r->date,d)==0)
			{
				b=atoi(p);
				r->number=r->number+b;
				fseek(fp,i*sizeof(CHILD),SEEK_SET);    
			 	fwrite(r,sizeof(CHILD),1,fp); 
                if (r!= NULL)                                                 //释放r
	             {
		            free(r);
		            r= NULL;
	             }
			    if(fclose(fp) != 0)
			    {
				    printf("\nError on close UserData.dat!");
				    delay(3000);
				    exit(1);
			    }
				if (r != NULL)                                                 //释放r	             {
				 { 
					free(r);
		            r= NULL;
	             }	
                 break;				 
			}
			else
			{      flag++;
		        if (r != NULL)                                                 //释放r	             {
				 {   
					free(r);
		            r= NULL;
	             }	
				continue;
			}
			
		}
	     else
		 {   
	              if (r != NULL)                                                 //释放r	             {
			     {
				    free(r);
		            r= NULL;
	             }	
			 flag++;
			 continue;
		 }			 
	}
	
	if(flag==l)
	{
        if((r=(CHILD*)malloc(sizeof(CHILD)))==NULL)
		    {
			    printf("Memory not enough!");
			    delay(3000);
			    exit(1);
		    } 
        r->n=a;
        strcpy(r->date,d);
        r->number=atoi(p);	
        fseek(fp,0,SEEK_END);		
	    fwrite(r,sizeof(CHILD),1,fp); 
		         if (r!= NULL)                                                 //释放r
	             {
		            free(r);
		            r= NULL;
	             }
			    if(fclose(fp) != 0)
			    {
				    printf("\nError on close UserData.dat!");
				    delay(3000);
				    exit(1);
			    }
				if (r != NULL)                                                 //释放r	             {
				 { 
					free(r);
		            r= NULL;
	             }	
	}
	
	for(i=0;i<lu;i++)
	{
		if((t=(USER*)malloc(sizeof(USER)))==NULL)
		    {
			    printf("Memory not enough!");
			    delay(3000);
			    exit(1);
		    }
		fseek(fs,i*sizeof(USER),SEEK_SET);
		fread(t,sizeof(USER),1,fs);
		if(t->num==a)
		{  
	         b=atoi(p);
			 t->money=140*b+t->money;
			 fseek(fs,i*sizeof(USER),SEEK_SET);    
			 fwrite(t,sizeof(USER),1,fs); 
			if (t!= NULL)                                                 //释放r
	         {
		        free(t);
		        t= NULL;
	         }
			 break;
		}
	     else
		 {
			 if (t!= NULL)                                                 //释放r
	         {
		        free(t);
		        t= NULL;
	         }
			 continue;
		 }
	}
	
	if(fclose(fs) != 0)
	 {
			 printf("\nError on close UserData.dat!");
			 delay(3000);
		     exit(1);
     }
	
}
