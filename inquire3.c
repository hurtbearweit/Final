#include"bzx.h"
/********************
NAME:ticket_adult
FUNCTION:成人票的查询
********************/
void  ticket_adult(int *page,int num)
{   int a=num;
    int tag;
    int pos3;
    int pos4;
    int pos5;
    int pos6;
    int pos7;
	int jun=0;//检测输入合法性
    char num1[20];
    char num2[20];
    char num3[20];
    char num4[20];
    char num5[20];
	DATE b[5];
	num1[0]='\0';
	num2[0]='\0';
	num3[0]='\0';
	num4[0]='\0';
	num5[0]='\0';
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
	puthz(35,140,"订票成功后凭身份证或二维码入园",24,24,RED);
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
	            logging_data3(num1,b[0],a);
				logging_data3(num2,b[1],a);
				logging_data3(num3,b[2],a);
				logging_data3(num4,b[3],a);
				logging_data3(num5,b[4],a);
				draticket();
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
				if(tag==0&&pos3==0)
				{   
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
					*page=512;
					break;
				}
				if(jun==2)
				{
                if(strlen(num1)!= 0)                           //判断是否完成输入
					pos3=1;                                    //完成输入则进行标记
				else
					pos3=0;	
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
				if(tag==0&&pos4==0)
				{   
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
					*page=512;
					break;
				}
				if(jun==2)
				{
                if(strlen(num2)!= 0)                           //判断是否完成输入
					pos4=1;                                    //完成输入则进行标记
				else
					pos4=0;	
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
				if(tag==0&&pos5==0)
				{   
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
					*page=512;
					break;
				}
				if(jun==2)
				{
                if(strlen(num3)!= 0)                           //判断是否完成输入
					pos5=1;                                    //完成输入则进行标记
				else
					pos5=0;
                    jun=0;				
				continue;
				}
			}
		}    //输入框3
		if(MouseX>200&&MouseX<400&&MouseY>285&&MouseY<310)
		{           
			if(mouse_press(200,285,400,310)==2)
			{
				MouseS=2;
				if(tag==0&&pos6==0)
				{   
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
					*page=512;
					break;
				}
				if(jun==2)
				{
                if(strlen(num4)!= 0)                           //判断是否完成输入
					pos6=1;                                    //完成输入则进行标记
				else
					pos6=0;
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
				if(tag==0&&pos7==0)
				{  
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
					*page=512;
					break;
				}
				if(jun==2)
				{
                if(strlen(num5)!= 0)                           //判断是否完成输入
					pos7=1;                                    //完成输入则进行标记
				else
					pos7=0;	
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
		} 
	      if(MouseS!=0)
	    {
		    MouseS=0;
	    }
	}
}

void logging_data3(char *p,DATE q,int a)
{   char d[20];
    int b=0;
	int l=0;
	int lu=0;
	int i;
	int flag=0;
	FILE* fp,*fs;
	ADULT *r;
	USER  *t;
	strcpy(d,q.month);
	strcat(d,".");
	strcat(d,q.day);
	if ((fp = fopen(".\\TEXT\\adult.dat", "rb+")) == NULL) 
	{
		printf("\nError on open file adult.dat");
		delay(3000);
		exit(1);
	}
	fseek(fp,0,SEEK_END);                                  
	l=ftell(fp)/sizeof(ADULT); 
	for(i=0;i<l;i++)
	{
		if((r=(ADULT*)malloc(sizeof(ADULT)))==NULL)
		    {
			    printf("Memory not enough!");
			    delay(3000);
			    exit(1);
		    }
		fseek(fp,i*sizeof(ADULT),SEEK_SET);
		fread(r,sizeof(ADULT),1,fp);
		if(r->n==a)
		{
			if(strcmp(r->date,d)==0)
			{
				b=atoi(p);
				r->number=r->number+b;
				fseek(fp,i*sizeof(ADULT),SEEK_SET);    
			 	fwrite(r,sizeof(ADULT),1,fp); 
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
        if((r=(ADULT*)malloc(sizeof(ADULT)))==NULL)
		    {
			    printf("Memory not enough!");
			    delay(3000);
			    exit(1);
		    } 
        r->n=a;
        strcpy(r->date,d);
        r->number=atoi(p);	
        fseek(fp,0,SEEK_END);		
	    fwrite(r,sizeof(ADULT),1,fp); 
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
	
	if ((fs = fopen(".\\TEXT\\USER.dat", "rb+")) == NULL) 
	{
		printf("\nError on open file UserData.dat");
		delay(3000);
		exit(1);
	}
	fseek(fs,0,SEEK_END);                                  
	lu=ftell(fs)/sizeof(USER); 
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
			 t->money=200*b+t->money;
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
