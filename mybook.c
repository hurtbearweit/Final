#include"public.h" 
#include"bzx.h"


void Mybook(int *page,int *num)
{
	int i;				//�����û� 
	int j;				//����Ѿ�ԤԼ����Ŀ 
	int m;				//��ӡ�Ѿ�ԤԼ����Ŀ 
	int l;				//�����ļ����� 
	int mark[8]={0};	//���ļ��������ĿԤԼ�����ӡ���������� 
	FILE *fp;
	USER s;
    char b[20];   //��ӡ�ŶӺ�
	clrmous(MouseX,MouseY);
	delay(1000);
	save_bk_mou(MouseX,MouseY);
	cleardevice();
	Draw_Mybook();
	
	while(1)
	{
		i=0;
		j=0; 
		m=0;
		if((fp=fopen(".\\TEXT\\USER.dat","rb+"))==NULL)
		{
			printf("\nErroe on open file USER.dat!");
			delay(3000);
			exit(1);						
		}											//���ļ���ʱʱ������ĿԤԼ��� 
		fseek(fp,0,SEEK_END);
		l=ftell(fp)/sizeof(USER);
		for(i=0;i<l;i++)
		{
			fseek(fp,i*sizeof(USER),SEEK_SET);
			fread(&s,sizeof(USER),1,fp);
			if(*num==s.num)
			{
				for(i=0,j=0;i<8;i++)
				{
					if(s.it[i]!=0)
					{
						mark[j++]=i;
					}
				}			      	
			}
		}	
									//���ļ��������ĿԤԼ����ŵ��������棨����У� 
        if(j==0)
		{
			highlight(20,50,620,100,RED);
			puthz(176,59,"����ǰ����ԤԼ��Ŀ",32,32,RED);
		}
		if(j!=0)
		{
			for(m=0;m<j;m++)            
			{
				switch(mark[m])
				{
					case 0:
					    itoa(s.it[mark[m]],b,10);
						graph(20,50*(m+1),620,50*(m+2));
						puthz(45,50*(m+1)+20,"���ַɴ�",24,24,BLUE);
						puthz(195,50*(m+1)+20,"���ֺ���",24,24,BLUE);
						outtextxy(367,50*(m+1)+20,b);
						puthz(525,50*(m+1)+20,"ȡ��",24,24,BLUE);
						b[0]='\0';
						break;
					case 1:
					    itoa(s.it[mark[m]],b,10);
						graph(20,50*(m+1),620,50*(m+2));
						puthz(45,50*(m+1)+20,"�����ﳵ",24,24,BLUE);
						puthz(195,50*(m+1)+20,"��ͨ����",24,24,BLUE);
						outtextxy(367,50*(m+1)+20,b);
						puthz(525,50*(m+1)+20,"ȡ��",24,24,BLUE);
						b[0]='\0';
						break;
					case 2:
						itoa(s.it[mark[m]],b,10);
						graph(20,50*(m+1),620,50*(m+2));
						puthz(45,50*(m+1)+20,"���˫��",24,24,BLUE);							
						puthz(195,50*(m+1)+20,"����ʱ��",24,24,BLUE);
						outtextxy(367,50*(m+1)+20,b);
						puthz(525,50*(m+1)+20,"ȡ��",24,24,BLUE);
                        b[0]='\0';						
						break;				
					case 3:
					    itoa(s.it[mark[m]],b,10);
						graph(20,50*(m+1),620,50*(m+2));
						puthz(45,50*(m+1)+20,"�����籩",24,24,BLUE);
						puthz(195,50*(m+1)+20,"쫷���",24,24,BLUE);
						outtextxy(367,50*(m+1)+20,b);
						puthz(525,50*(m+1)+20,"ȡ��",24,24,BLUE);
						 b[0]='\0';		
						break;
					case 4:
					    itoa(s.it[mark[m]],b,10);
						graph(20,50*(m+1),620,50*(m+2));
						puthz(45,50*(m+1)+20,"ľ��˫��",24,24,BLUE);
						puthz(195,50*(m+1)+20,"���ֽ���",24,24,BLUE);
						outtextxy(367,50*(m+1)+20,b);
						puthz(525,50*(m+1)+20,"ȡ��",24,24,BLUE); 
						 b[0]='\0';		
						break;
					case 5:
					     itoa(s.it[mark[m]],b,10);
						graph(20,50*(m+1),620,50*(m+2));
						puthz(45,50*(m+1)+20,"Ħ����",24,24,BLUE);
						puthz(195,50*(m+1)+20,"��⵺",24,24,BLUE);
						outtextxy(367,50*(m+1)+20,b);
						puthz(525,50*(m+1)+20,"ȡ��",24,24,BLUE); 
						 b[0]='\0';		
						break;
					case 6:
					    itoa(s.it[mark[m]],b,10);
						graph(20,50*(m+1),620,50*(m+2));
						puthz(45,50*(m+1)+20,"����ջ��",24,24,BLUE);
						puthz(195,50*(m+1)+20,"��������",24,24,BLUE);
						outtextxy(367,50*(m+1)+20,b);
						puthz(525,50*(m+1)+20,"ȡ��",24,24,BLUE); 
						b[0]='\0';	
						break;
					case 7:
					    itoa(s.it[mark[m]],b,10);
						graph(20,50*(m+1),620,50*(m+2));
						puthz(45,50*(m+1)+20,"���ٷɳ�",24,24,BLUE);
						puthz(195,50*(m+1)+20,"��������",24,24,BLUE);
						outtextxy(367,50*(m+1)+20,b);
						puthz(525,50*(m+1)+20,"ȡ��",24,24,BLUE); 
						b[0]='\0';	
						break;
				}
			}
		}				//���ļ�ԤԼ��������������ӡ������ת�Ƶ���Ļ�� 
		while(1)
		{
			newmouse(&MouseX,&MouseY,&press);
			for(m=0;m<j;m++)
			{
				if(MouseX>470&&MouseX<620&&MouseY>50*(m+1)&&MouseY<50*(m+2))   //���һֱ�˴���δ��� 
				{  
	       			if(mouse_press(470,50*(m+1),620,50*(m+2))==2) 
    				{	
						MouseS=1;
              			highlight(470+1,50*(m+1)+1,620-1,50*(m+2)-1,LIGHTBLUE);				
						continue;
					}
					else if(mouse_press(470,50*(m+1),620,50*(m+2))==1)   //��������ȡ��ԤԼ 
					{
						M_Input_Data(num,mark[m]);	
						MouseS=0;
						clrmous(MouseX, MouseY);
						delay(100);
						save_bk_mou(MouseX, MouseY);
						goto error;
					}
				}
			}
			if(MouseX>50&&MouseX<140&&MouseY>425&&MouseY<460)//�ڷ��ؼ���
			{  
	       		if(mouse_press(50,425,140,460)==2)
    			{ 
				    MouseS=1;	  			 		
					continue;
				}
				else if(mouse_press(50,425,140,460)==1)
				{				   
					MouseS=0;
					clrmous(MouseX, MouseY);
					delay(100);
					save_bk_mou(MouseX, MouseY);
					*page=6;
					goto right;
				}
			}
			if(MouseX>490&&MouseX<580&&MouseY>425&&MouseY<460)   //��ת����һҳ 
			{  
	      		if(mouse_press(490,425,580,460)==2)
    			{
    				MouseS=1;
					continue;
				}
				else if(mouse_press(490,425,580,460)==1)
				{		
					MouseS=0;
					setfillstyle(SOLID_FILL, WHITE);
                    bar(200,180,490,300);
                    rectangle(200,180,490,300);
                    setfillstyle(SOLID_FILL, WHITE);
		            puthz(226,220,"��ȫ����Ϣ����ʾ��ȫ",24,24,RED);
				    delay(2000);
					clrmous(MouseX,MouseY);
				    delay(100);
				    save_bk_mou(MouseX, MouseY);
				    *page=63;
					goto right;
				}
			}
			if(MouseX>240&&MouseX<400&&MouseY>425&&MouseY<460) 
			{
				if(mouse_press(240,425,400,460)==2)
				{
					MouseS=1;	  			 	
					continue;
				}
				if(mouse_press(240,425,400,460)==1)
				{
					MouseS=0;
					clrmous(MouseX, MouseY);
					delay(100);
					save_bk_mou(MouseX, MouseY);
					*page=65;
					goto right;
				}
			}	
		}
		error:  
		cover(19,51,621,401,LIGHTGRAY);                    
		if(fclose(fp)!=0)
		{
			printf("\nErroe on close USER.dat!");
			delay(3000);
			exit(1);
		}	
	}
	right:
	delay(100); 
}

void Draw_Mybook()
{
	cleardevice();
	setbkcolor(LIGHTGRAY);
	setlinestyle(SOLID_LINE,0,NORM_WIDTH);
	setcolor(RED);
	line(20,10,620,10);
	line(20,50,620,50);
	line(20,10,20,50);
	line(620,10,620,50);
	line(170,10,170,50);
	line(320,10,320,50);
	line(470,10,470,50);
	
	puthz(45,20,"��Ŀ����",24,24,RED);
	puthz(195,20,"��������",24,24,RED);
	puthz(357,20,"�ŶӺ�",24,24,RED);
	puthz(495,20,"ȡ��ԤԼ",24,24,RED);
	
	setfillstyle(1,GREEN);
	bar(50,425,140,460);
	puthz(70,430,"����",24,24,WHITE);
	bar(490,425,580,460);
	puthz(500,430,"��һҳ",24,24,WHITE);
	bar(240,425,400,460);
	puthz(248,430,"��ͼ�Ƽ�·��",24,24,WHITE);
}

void M_Input_Data(int *num,int tag)				//��ԤԼ����Ŀ������û����ļ��� 
{
	int l;
	int i;
	FILE *fp;
	USER *n=NULL;
	if((fp=fopen(".\\TEXT\\USER.dat","rb+"))==NULL)
	{
		printf("\nErroe on open file USER.dat!");
		delay(3000);
		exit(1);
	}
	fseek(fp,0,SEEK_END);
	l=ftell(fp)/sizeof(USER);
	for(i=0;i<l;i++)
	{
		if((n=(USER*)malloc(sizeof(USER)))==NULL)
		{
			printf("\nMemory not enough!");
			delay(3000);
			exit(1);
		}
		fseek(fp,i*sizeof(USER),SEEK_SET);
		fread(n,sizeof(USER),1,fp);
		if(*num==n->num)
		{
			n->it[tag]=0;
			fseek(fp,i*sizeof(USER),SEEK_SET);
			fwrite(n,sizeof(USER),1,fp);
		}
	}
	if(n!=NULL)
	{
		free(n);
		n=NULL;
	}
	if((fclose(fp))!=0)
	{
		printf("\nErroe on close USER.dat!");
		delay(3000);
		exit(1);
	}
}


