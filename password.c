#include"bzx.h"
#include"public.h"
/***********************
NAME:password
FUNCTION:实现忘记密码功能
***********************/
void password(int *page)
{   int pos1=0;                                             //判断输入框1输入情况
	int pos2=0;                                             //判断输入框2输入情况
	int pos3=0;                                             //判断输入框3输入情况
	int pos4=0;                                             //判断输入框4输入情况
    int pos5=0;                                     
	int flag=0;                                             //标记输入框点亮情况，以防重复点亮
	int jun1=0;                                             //判断账号输入结果
	int jun2=0;                                             //判断新密码输入结果
	int jun3=0;                                             //判断确认新密码输入结果
	int jun4=0; 
	char A[15]={'\0'};                                      //账号，6-12位
	char I[20]={'\0'};                                      //身份证，18位
	char P[15]={'\0'};                                      //设置新密码，6-12位
	char RP[15]={'\0'};                                     //确认新密码，6-12位
	
	clrmous(MouseX,MouseY);
	delay(100);
	save_bk_mou(MouseX,MouseY);
	draw_password();
	delay(500);
	while(1)
	{
		newmouse(&MouseX,&MouseY,&press);                   //画鼠标
		if(MouseX>95&&MouseX<545&& MouseY>85&& MouseY<110)  //鼠标进入输入框1的范围
		{
			if(mouse_press(95,85,545,110)==2)               //未点击输入框1
			{
				MouseS=2;                                   //改鼠标为光标形态
				if(flag==0&&pos1==0)                  
				{
					Light_password(95,85,545,110,1);        //点亮输入框1
					flag=1;                                 //标记输入框1已点亮
				}
				continue;
			}

			else if(mouse_press(95,85,545,110)==1)         //点击输入框1
			{
				MouseS =0;
				Light_password(95,85,545,110,1);
				A[0]='\0';                                  //清空之前的输入
				setfillstyle(1,DARKGRAY);
		        bar(550,90,640,106);
				Input_Vis(A,95,85,12,LIGHTGRAY);            //可视输入
				jun1=Account_Jundge(A);                   //判断账号是否符合要求
				if(strlen(A)!= 0)                           //判断是否完成输入
					pos1=1;                                 //完成输入则进行标记
				else
					pos1=0;
				continue;
			}
		}
		if(MouseX>95&& MouseX<545&& MouseY>145&& MouseY< 170)
		{
			if(mouse_press(95,145,545,170)==2)     
			{
				MouseS=2;
				if(flag==0&&pos2==0)
				{
					Light_password(95,145,545,170,2);
					flag=2;
				}
				continue;
			}

			else if(mouse_press(95,145,545,170)==1)     
			{
				Light_password(95,145,545,170,2);
				MouseS=0;
				P[0]='\0';
				setfillstyle(1,DARKGRAY);
		        bar(550,150,640,166);
				Input_Invis(P,95,145,16,LIGHTGRAY);
				jun2=Password_Jundge(P);                                    //判断新密码长度是否符合要求
				if(strlen(P)!=0)
					pos2=1;
				else
					pos2=0;
				continue;
			}
		}

		if(MouseX>95&&MouseX<545&&MouseY>205&& MouseY<230)
		{
			if(mouse_press(95,205,545,230) == 2)    
			{
				MouseS=2;
				if(flag==0&&pos3==0)
				{
					Light_password(95,205,545,230,3);
					flag=3;
				}
				continue;
			}

			else if(mouse_press(95,205,545,230)==1)      
			{
				Light_password(95,205,545,230,3);
				MouseS = 0;
				RP[0] ='\0';
				setfillstyle(1,DARKGRAY);
		        bar(550,210,640,226);
				Input_Invis(RP,95,205,16,LIGHTGRAY);//不可视输入
				jun3=Password_Same(P,RP);                                  //判断两次输入的密码是否一致
				if(strlen(RP)!=0)
					pos3=1;
				else
					pos3=0;
				continue;
			}
		}

		if(MouseX>95&&MouseX<545&&MouseY>260&& MouseY<290)
		{
			if(mouse_press(95,265,545,290)==2)      
			{
				MouseS=2;
				if(flag==0&&pos4==0)
				{
					Light_password(95,265,545,290,4);
					flag=4;
				}
				continue;
			}

			else if(mouse_press(95,265,545,290)==1)
			{
				Light_password(95,265,545,290,4);
				MouseS=0;
				I[0]='\0';
				setfillstyle(1,DARKGRAY);
		        bar(550,270,640,286);
				Input_Vis(I,95,265,18,LIGHTGRAY);
				jun4=ID_Jundge(A,I);                                     //判断身份证是否和注册时所用身份证一致
				if(strlen(I)!=0)
					pos4=1;
				else 
					pos4=0;
				continue;
			}
		}
		if(MouseX>143&&MouseX<237&&MouseY>370&& MouseY<400)                //停在重置按钮上
		{
			if(mouse_press(143,370,237,400)==2)                
			{
				if(flag==0)
				{
					MouseS=1;
					Light_password(143,370,237,400,5);
					flag=5;
				}
				continue;
			}

			else if(mouse_press(143,370,237,400)==1)
			{
				MouseS=0;                        //重置鼠标
				A[0]='\0';
				I[0]='\0';
				P[0]='\0';
				RP[0]='\0';
				flag=0;                          //重置数据
				pos1=0;
				pos2=0;
				pos3=0;
				pos4=0;
				return;
			}
		}

		if(MouseX >273&& MouseX<367&& MouseY>370&& MouseY<400)
		{
			if(mouse_press(273,370,367,400)==2)					
			{
				if (flag==0)
				{
					MouseS=1;
					Light_password(273,370,367,400,6);
					flag=6;
				}
				continue;
			}

			else if(mouse_press(273,370,367,400)==1)
			{
				MouseS=0;
				if (password_Com(jun1,jun2,jun3,jun4,A,I,P))         //判断是否完成修改密码
				{
		            *page=0;                                         //跳转至登录界面
					break;
				}
				else
				{
					return;
				}
			}
		}

		if (MouseX>403&&MouseX<497&&MouseY>370&&MouseY<400)                //停在返回按钮上
		{
			if (mouse_press(403, 370, 497, 400)==2)				
			{
				if (flag==0)
				{
					MouseS=1;
					Light_password(403,370,497,400,7);
					flag=7;
				}
				continue;
			}

			else if(mouse_press(403, 370, 497, 400) == 1)
			{
				MouseS=0;
				*page=0;                            //跳转至登录界面
				break; 
			}
		}

		if(flag!=0)                                 //根据点亮情况，对输入框进行还原
		{
			MouseS=0;
			if(pos1==0)
			{
				 Dark_password(1);
			}
			if (pos2==0)
			{
				 Dark_password(2);
			}
			if (pos3==0)
			{
				 Dark_password(3);
			}
			if (pos4==0)
			{
				 Dark_password(4);
			}
			if (pos5==0)
			{
				 Dark_password(5);
			}
			if (flag==5||flag ==6||flag ==7)
			{
				 Dark_password(flag);
			}
			flag=0;
		}
		if(MouseS!=0)                               //还原鼠标
		{                 
			MouseS=0;
		}
	}
	
	
	
}
/*************************
NAME：draw_password
FUNCTION:绘制界面
*************************/
void draw_password()
{
	cleardevice();
	setbkcolor(DARKGRAY);   
	
	puthz(255,25,"密码修改",32,32,WHITE);
	puthz(254,24,"密码修改",32,32,RED);
	puthz(75,320,"欢乐谷温馨提示您勿将身份信息透露给他人",24,24,BROWN);
	puthz(95,60,"请输入您的账号",16,16,CYAN);                           //画输入提示
	puthz(95,120,"请输入新密码",16,16,CYAN);
    puthz(95,180,"请确认新密码",16,16,CYAN);
    puthz(95,240,"请输入注册所用的身份证号码",16,16,CYAN);
	
	setfillstyle(1,WHITE);                     
	bar(95,85,545,110);                          //画输入框
    bar(95,145,545,170);
	bar(95,205,545,230);
	bar(95,265,545,290);
	
	setfillstyle(1,GREEN);
	bar(143, 370, 237, 400);
	puthz(161,373,"重置",24,34,WHITE);           //画操作框
    setfillstyle(1,RED);
	bar(273, 370, 367, 400);
	puthz(291,373,"完成",24,34,WHITE);
    setfillstyle(1,BLUE);
	bar(403, 370, 497, 400);
	puthz(421,373,"返回",24,34,WHITE);
	
	
	
}

/***********************
NAME:Light_password
FUNCTION:点亮按钮
***********************/
void Light_password(int x1,int y1,int x2,int y2,int flag)
{
	
	clrmous(MouseX,MouseY);
	delay(10);

	if(flag==5)
	{
		setcolor(WHITE);
	    setlinestyle(SOLID_LINE,0,NORM_WIDTH);
	    setfillstyle(1,CYAN);
	    bar(x1,y1,x2,y2);
	    rectangle(x1,y1,x2,y2);	
		puthz(161,373,"重置",24,34,LIGHTCYAN);
	}
	else if(flag==6)
	{
		setcolor(WHITE);
	    setlinestyle(SOLID_LINE,0,NORM_WIDTH);
	    setfillstyle(1,RED);
	    bar(x1,y1,x2,y2);
	    rectangle(x1,y1,x2,y2);	
		puthz(291,373,"完成",24,34,LIGHTRED);
	}
	else if(flag==7)
	{
		setcolor(WHITE);
	    setlinestyle(SOLID_LINE,0,NORM_WIDTH);
	    setfillstyle(1,BLUE);
	    bar(x1,y1,x2,y2);
	    rectangle(x1,y1,x2,y2);	
		puthz(421,373,"返回",24,34,LIGHTBLUE);
	}
	else                                       //点亮输入框
	{
		setcolor(MAGENTA);
	    setlinestyle(SOLID_LINE,0,NORM_WIDTH);
	    setfillstyle(1,LIGHTGRAY);
	    bar(x1,y1,x2,y2);
	    rectangle(x1,y1,x2,y2);	
	}
	
}
/******************************
NAME:Dark_password
FUNCTION:恢复按钮
******************************/
void Dark_password(int pos)
{
	clrmous(MouseX, MouseY);
	delay(10);
	setfillstyle(1, WHITE);
	switch (pos)
	{
	case 1:                                          //还原输入框
		bar(95,85,545,110);
		break;
	case 2:
		bar(95,145,545,170);
		break;
	case 3:
		bar(95,205,545,230);
		break;
	case 4:
		bar(95,265,545,290);
		break;
	case 5:                                         //还原操作按钮
		setfillstyle(1,GREEN);
		bar(143,370,237,400);
		puthz(161,373,"重置",24,34,WHITE);
		break;
	case 6:
		setfillstyle(1,RED);
		bar(273,370,367,400);
		puthz(291,373,"完成",24,34,WHITE);
		break;
	case 7:
		setfillstyle(1,BLUE);
		bar(403,370,497,400);
		puthz(421,373,"返回",24,34,WHITE);
		break;
	}
}
/***********************************
NAME:Account_Jundge
FUNCTION:判断账号是否正确
***********************************/
int Account_Jundge(char* A)                    //判断账号是否符合要求
{
	int flag=0;                                //标记账号长度是否符合要求
	int l;
	int i;
	FILE* fp;
	USER*u=NULL;
	if(strlen(A)>=6)
	{
		setfillstyle(1,DARKGRAY);
		bar(550,90,640,106);
		puthz(550,90,"通过",16,16,RED);
		flag=1;
	}
	else
	{
		setfillstyle(1,DARKGRAY);
		bar(550,90,640,106);
		puthz(550,90,"账号过短",16,16,RED);
		flag=0;
	}
	if(flag==1)
	{
		if((fp=fopen(".\\TEXT\\USER.dat","rb+"))==NULL)//打开存储用户信息的文件
	    {
		    printf("\nError on open file UserData.dat!");
		    delay(3000);
		    exit(1);
	    }
	    fseek(fp,0,SEEK_END);                                  
	    l=ftell(fp)/sizeof(USER);                                //计算用户总数
	    for(i=0;i<l;i++)                                         //遍历读取到的所有用户
	    {
		    if((u=(USER*)malloc(sizeof(USER)))==NULL)
		    {
			    printf("Memory not enough!");
			    delay(3000);
			    exit(1);
		    }
		    fseek(fp,i*sizeof(USER),SEEK_SET);
		    fread(u,sizeof(USER),1,fp);
		    if(strcmp(u->account,A)==0)                          //如果当前账号在文件中已经存在
		    {
			    setfillstyle(1,DARKGRAY);
		        bar(550,90,640,106);
		        puthz(550,90,"账号正确",16,16,RED);
			    if(u != NULL)
			    {
				    free(u);
				    u = NULL;
			    }
			    if(fclose(fp) != 0)
			    {
				    printf("\nError on close UserData.dat!");
				    delay(3000);
				    exit(1);
			    }
			    if(u!= NULL)
		        {
			        free(u);
			        u = NULL;
		        }
			    return 1;                                        //账号符合要求
		    }
	    }
		//能够离开循环，说明账号尚未注册
		setfillstyle(1,DARKGRAY);
		bar(550,90,640,106);
		puthz(550,90,"查无此账号",16,16,RED);
		if(u!= NULL)
		{
			free(u);
			u = NULL;
		}
		if(fclose(fp) != 0)
		{
			printf("\nError on close UserData.dat!");
			delay(3000);
			exit(1);
		}
		if(u != NULL)
		{
			free(u);
			u = NULL;
		}
		return 0;                                                 //账号不符合要求
    }
}

/******************************
NAME:Password_Jundge
FUNCTION:判断输入的新密码是否符合要求
******************************/
int Password_Jundge(char* P)                                    //判断密码长度是否符合要求
{
	if(strlen(P)>=6)
	{
		setfillstyle(1,DARKGRAY);
		bar(550,150,640,166);
		puthz(550,150,"通过",16,16,RED);
		return 1;
	}
	else
	{
		setfillstyle(1,DARKGRAY);
		bar(550,150,640,166);
		puthz(550,150,"密码过短",16,16,RED);
		return 0;
	}
}	

/********************************
NAME:Password_Same
FUNCTION:判断两次输入的新密码是否一致
********************************/
int Password_Same(char* P,char* RP)                             //判断两次输入的密码是否一致
{
	if(strcmp(P,RP)==0)
	{
		setfillstyle(1,DARKGRAY);
		bar(550,210,640,226);
		puthz(550,210,"密码一致",16,16,RED);
		return 1;
	}
	else
	{
		setfillstyle(1,DARKGRAY);
		bar(550,210,640,226);
		puthz(550,210,"密码不一致",16,16,RED);
		return 0;
	}
}
/********************************
NAME:password_Com
FUNCTION:判断是否完成了修改密码
********************************/
int password_Com(int jun1,int jun2,int jun3,int jun4,char* A,char* I,char* P)
{
	if(jun1==1&&jun2==1&&jun3==1&&jun4!=0)                         //用户输入的内容均符合要求
	{
        setfillstyle(SOLID_FILL, WHITE);
        bar(200,180,440,300);
        rectangle(200,180,440,300);
        setfillstyle(SOLID_FILL, WHITE);
		puthz(274,220,"正在修改",24,24,RED);
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
		puthz(274,230,"修改成功",24,24,RED);
		delay(3000);
		password_Data(A,I,P);                              //将新密码写入文件
	    return 1;
	}
	else
	{
		setfillstyle(SOLID_FILL, WHITE);
        bar(200,180,440,300);
        rectangle(200,180,440,300);
        setfillstyle(SOLID_FILL, WHITE);
		puthz(274,220,"正在修改",24,24,RED);
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
		puthz(274,230,"修改失败",24,24,RED);
		delay(3000);
		return 0;
	}
}

/************************************************************************
FUNCTION:R_Input_Data
DESCRIPTION:用户信息写入文件
INPUT:输入的账号A，身份证号I，密码P
RETURN:判断结果
************************************************************************/
void password_Data(char* A,char* I,char* P)                     //将新密码写入文件
{   int l;
	int i;
	int flag=0;
	FILE* fp;
	USER *e;
	if((fp=fopen(".\\TEXT\\USER.dat", "rb+" )) == NULL)          //打开存储用户信息的文件
	{
		printf("\nError on open file UserData.dat!");
		delay(3000);
		exit(1);
	}
	fseek(fp,0,SEEK_END);                                  
	l=ftell(fp)/sizeof(USER);                                //计算用户总数
    for(i=0;i<l;i++)                                         //遍历读取到的所有用户
	    {
		    if((e=(USER*)malloc(sizeof(USER)))==NULL)
		    {
			    printf("Memory not enough!");
			    delay(3000);
			    exit(1);
		    }
		    fseek(fp,i*sizeof(USER),SEEK_SET);
		    fread(e,sizeof(USER),1,fp);
		    if(strcmp(A,e->account)==0)                          //如果当前账号在文件中已经存在并且以查找到此账号
		    {    
			    strcpy(e->password,P);
				fseek(fp,i*sizeof(USER),SEEK_SET);    
			 	fwrite(e,sizeof(USER),1,fp);   
			   if (e != NULL)                                                 //释放e
	             {
		            free(e);
		            e= NULL;
	             }
			    if(fclose(fp) != 0)
			    {
				    printf("\nError on close UserData.dat!");
				    delay(3000);
				    exit(1);
			    }
				if (e != NULL)                                                 //释放e	             {
				{ free(e);
		            e= NULL;
	             }
			      break;
		    }
				else
			{
				if(e!=NULL)                                              //释放内存
			  {
				free(e);
				e=NULL;
			  }
			  flag++;
			  continue;
			}
			  
			
	    }
	
              if (e!= NULL)                                                 //释放u
	             {
		            free(e);
		            e= NULL;
	             }

	            if (e != NULL)                                                 //释放u
	             {
		            free(e);
		            e= NULL;
	             }
				 if(flag==l)
				 {
					 if(fclose(fp) != 0)
			       {
				    printf("\nError on close UserData.dat!");
				    delay(3000);
				    exit(1);
			       } 
				 }

}

/************************************************************************
FUNCTION:R_ID_Jundge
DESCRIPTION:判断身份证是否有效
INPUT:输入的身份证号I
RETURN:判断结果
************************************************************************/
int ID_Jundge(char *A,char *I)               //判断输入的身份证号是否已注册过
{
	int flag=0;                                //标记身份证长度是否符合要求
	int l;
	int i;
	FILE* fp;
	USER*u=NULL;
	if(strlen(I)==18)
	{
		
		flag=1;
	}
	else
	{
		
		flag=0;
	}
	if(flag==1)
	{
		if((fp=fopen(".\\TEXT\\USER.dat","rb+"))==NULL)//打开存储用户信息的文件
	    {
		    printf("\nError on open file UserData.dat!");
		    delay(3000);
		    exit(1);
	    }
	    fseek(fp,0,SEEK_END);                                    //文件指针定位至起点
	    l=ftell(fp)/sizeof(USER);                                //计算用户总数
	    for(i=0;i<l;i++)                                         //遍历读取到的所有用户
	    {
		    if((u=(USER*)malloc(sizeof(USER)))==NULL)
		    {
			    printf("Memory not enough!");
			    delay(3000);
			    exit(1);
		    }
		    fseek(fp,i*sizeof(USER),SEEK_SET);
		    fread(u,sizeof(USER),1,fp);
		    if(strcmp(u->account,A)==0)                          //查找账号
		    {
			   if(strcmp(u->ID,I)==0)
			   {
			    setfillstyle(1,DARKGRAY);
		        bar(550,90,640,106);
		        puthz(550,270,"身份证核对无误",16,16,RED);
				return 1;           
			   }
			   else
			   {
				setfillstyle(1,DARKGRAY);
		        bar(550,90,640,106);
		        puthz(550,270,"身份证信息有误",16,16,RED);   //该身份证不符合要求
				  return 0;    
			   }
			    if(u != NULL)
			    {
				    free(u);
				    u = NULL;
			    }
			    if(fclose(fp) != 0)
			    {
				    printf("\nError on close UserData.dat!");
				    delay(3000);
				    exit(1);
			    }
			    if(u!= NULL)
		        {
			        free(u);
			        u = NULL;
		        }			                                   
		    }
	    }
		                                                         //能够离开循环，说明查找不到账号
		
		if(u!= NULL)
		{
			free(u);
			u = NULL;
		}
		if(fclose(fp) != 0)
		{
			printf("\nError on close UserData.dat!");
			delay(3000);
			exit(1);
		}
		if(u != NULL)
		{
			free(u);
			u = NULL;
		}
		return 0;                                                 //账号符合要求
    }
	else
	{
		setfillstyle(1,DARKGRAY);
		bar(550,270,640,286);
		puthz(550,270,"身份证无效",16,16,RED);
		return 0;
	}
}