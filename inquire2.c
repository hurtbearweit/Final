#include"bzx.h"
/********************
NAME:ticket_student
FUNCTION:ѧ��Ʊ�Ĳ�ѯ
********************/
void  ticket_student(int *page,int num)
{   int a=num;
    int tag;
    int pos3;
    int pos4;
    int pos5;
    int pos6;
    int pos7;
	int jun=0; //�������Ϸ���
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
	puthz(35,110,"������ʹ�õ���",24,24,RED);
	setcolor(RED);
	outtextxy(210,110,"18:00");
	puthz(265,110,"ǰ��Ʊ�Ҷ�Ʊ�ɹ�����������",24,24,RED);
	puthz(35,140,"��Ʊ�������й����۰�̨ȫ������У��ְ���ר��",24,24,RED);
	puthz(35,170,"������",24,24,RED);
	outtextxy(110,170,",");
	puthz(120,170,"�����о���",24,24,RED);
	outtextxy(250,170,",");
	puthz(260,170,"����鱾����Чѧ��֤",24,24,RED);
	drainquire(260,200,b);
	while(1)
	{
		newmouse(&MouseX,&MouseY,&press);
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
		}               //���ؼ�
		if(MouseX>250&&MouseX<350&&MouseY>380&&MouseY<410)
		{           
			if(mouse_press(250,380,350,410)==2)
			{
				MouseS=1;
				continue;
			}
			else if(mouse_press(250,380,350,410)==1)
			{
				MouseS=0;
				logging_data2(num1,b[0],a);
				logging_data2(num2,b[1],a);
				logging_data2(num3,b[2],a);
				logging_data2(num4,b[3],a);
				logging_data2(num5,b[4],a);
				draticket();
				clrmous(MouseX,MouseY);
				 delay(100);
				 save_bk_mou(MouseX, MouseY);
				 *page=51;
				break;
			}
		}  //ȷ�϶���
		if(MouseX>200&&MouseX<400&&MouseY>225&&MouseY<250)
		{           
			if(mouse_press(200,225,400,250)==2)
			{
				MouseS=2;
				if(tag==0&&pos3==0)
				{  
				    tag=1;
					pos3=0;
					light_input(200,225,400,250);
				}
				continue;
			}
			else if(mouse_press(200,225,400,250)==1)
			{
				MouseS=0;
				light_input(200,225,400,250);
                num1[0]='\0';                                  //���֮ǰ������
				setfillstyle(1,DARKGRAY);
				jun=Input_Vis(num1,200,225,3,LIGHTGRAY);
				if(jun==1)
				{
					drajudge();
					jun=0;
					*page=513;
					break;
				}
				if(jun==2)
				{	
                if(strlen(num1)!= 0)                           //�ж��Ƿ��������
					pos3=1;                                    //�����������б��
				else
					pos3=0;	
                    jun=0;				
				continue;
				}
			}
		}                                                    //�����1
		if(MouseX>200&&MouseX<400&&MouseY>255&&MouseY<280)
		{           
			if(mouse_press(200,255,400,280)==2)
			{
				MouseS=2;
				if(tag==0&&pos4==0)
				{  
				    tag=1;
					pos4=0;
					light_input(200,255,400,280);
				}
				continue;
			}
			else if(mouse_press(200,255,400,280)==1)
			{
				MouseS=0;
				light_input(200,255,400,280);
                num2[0]='\0';                                  //���֮ǰ������
				setfillstyle(1,DARKGRAY);
				jun=Input_Vis(num2,200,255,3,LIGHTGRAY);
				if(jun==1)
				{
					drajudge();
					jun=0;
					*page=513;
					break;
				}
				if(jun==2)
				{	
                if(strlen(num2)!= 0)                           //�ж��Ƿ��������
					pos4=1;                                    //�����������б��
				else
					pos4=0;	
                    jun=0;				
				continue;
				}
			}
		}    
                                                //�����2
		if(MouseX>200&&MouseX<400&&MouseY>285&&MouseY<310)
		{           
			if(mouse_press(200,285,400,310)==2)
			{
				MouseS=2;
				if(tag==0&&pos5==0)
				{   
				    tag=1;
					pos5=0;
					light_input(200,285,400,310);
				}
				continue;
			}
			else if(mouse_press(200,285,400,310)==1)
			{
				MouseS=0;
				light_input(200,285,400,310);
                num3[0]='\0';                                  //���֮ǰ������
				setfillstyle(1,DARKGRAY);
				jun=Input_Vis(num3,200,285,3,LIGHTGRAY);
				if(jun==1)
				{
					drajudge();
					jun=0;
					*page=513;
					break;
				}
				if(jun==2)
				{	
                if(strlen(num3)!= 0)                           //�ж��Ƿ��������
					pos5=1;                                    //�����������б��
				else
					pos5=0;	
                    jun=0;				
				continue;
				}
			}
		}                                                    //�����3
		if(MouseX>200&&MouseX<400&&MouseY>315&&MouseY<340)
		{           
			if(mouse_press(200,315,400,340)==2)
			{
				MouseS=2;
				if(tag==0&&pos6==0)
				{   
				    tag=1;
					pos6=0;
					light_input(200,315,400,340);
				}
				continue;
			}
			else if(mouse_press(200,315,400,340)==1)
			{
				MouseS=0;
				light_input(200,315,400,340);
                num4[0]='\0';                                  //���֮ǰ������
				setfillstyle(1,DARKGRAY);
				jun=Input_Vis(num4,200,315,3,LIGHTGRAY);
				if(jun==1)
				{
					drajudge();
					jun=0;
					*page=513;
					break;
				}
                 if(jun==2)
				 {					 
                if(strlen(num4)!= 0)                           //�ж��Ƿ��������
					pos6=1;                                    //�����������б��
				else
					pos6=0;
                    jun=0;				
				continue;
				 }
			}
		}                                                    //�����4
		if(MouseX>200&&MouseX<400&&MouseY>345&&MouseY<370)
		{           
			if(mouse_press(200,345,400,370)==2)
			{
				MouseS=2;
				if(tag==0&&pos7==0)
				{   
				    tag=1;
					pos7=0;
					light_input(200,345,400,370);
				}
				continue;
			}
			else if(mouse_press(200,345,400,370)==1)
			{
				MouseS=0;
				light_input(200,345,400,370);
                num5[0]='\0';                                  //���֮ǰ������
				setfillstyle(1,DARKGRAY);
				jun=Input_Vis(num5,200,345,3,LIGHTGRAY);
				if(jun==1)
				{
					drajudge();
					jun=0;
					*page=513;
					break;
				}
				if(jun==2)
				{
                if(strlen(num5)!= 0)                           //�ж��Ƿ��������
					pos7=1;                                    //�����������б��
				else
					pos7=0;	
                    jun=0;				
				continue;
				}
			}
		}                                                    //�����5
		if(tag!=0)
		{  
			
			if(pos3==0)
			{
				dark_input(200,225,400,250);
			}
			if(pos4==0)
			{
				dark_input(200,255,400,280);
			}
			if(pos5==0)
			{
				dark_input(200,285,400,310);
			}
			if(pos6==0)
			{
				dark_input(200,315,400,340);
			}
			if(pos7==0)
			{
				dark_input(200,345,400,370);
			}
			tag=0;
		} 
	      if(MouseS!=0)
	    {
		    MouseS=0;
	    }
	}
}

void logging_data2(char *p,DATE q,int a)
{   char d[20];
    int b=0;
	int l=0;
	int lu=0;
	int i;
	int flag=0;
	FILE* fp,*fs;
	STUDENT *r;
	USER *t;
	strcpy(d,q.month);
	strcat(d,".");
	strcat(d,q.day);
	if ((fp = fopen(".\\TEXT\\student.dat", "rb+")) == NULL) 
	{
		printf("\nError on open file student.dat");
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
	l=ftell(fp)/sizeof(STUDENT); 
	fseek(fs,0,SEEK_END);                                  
	lu=ftell(fs)/sizeof(USER); 
	for(i=0;i<l;i++)
	{
		if((r=(STUDENT*)malloc(sizeof(STUDENT)))==NULL)
		    {
			    printf("Memory not enough!");
			    delay(3000);
			    exit(1);
		    }
		fseek(fp,i*sizeof(STUDENT),SEEK_SET);
		fread(r,sizeof(STUDENT),1,fp);
		if(r->n==a)
		{
			if(strcmp(r->date,d)==0)
			{
				b=atoi(p);
				r->number=r->number+b;
				fseek(fp,i*sizeof(STUDENT),SEEK_SET);    
			 	fwrite(r,sizeof(STUDENT),1,fp); 
                if (r!= NULL)                                                 //�ͷ�r
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
				if (r != NULL)                                                 //�ͷ�r	             {
				 { 
					free(r);
		            r= NULL;
	             }	
                 break;				 
			}
			else
			{      flag++;
		        if (r != NULL)                                                 //�ͷ�r	             {
				 {   
					free(r);
		            r= NULL;
	             }	
				continue;
			}
			
		}
	     else
		 {   
	              if (r != NULL)                                                 //�ͷ�r	             {
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
        if((r=(STUDENT*)malloc(sizeof(STUDENT)))==NULL)
		    {
			    printf("Memory not enough!");
			    delay(3000);
			    exit(1);
		    } 
        r->n=a;
        strcpy(r->date,d);
        r->number=atoi(p);	
        fseek(fp,0,SEEK_END);		
	    fwrite(r,sizeof(STUDENT),1,fp); 
		         if (r!= NULL)                                                 //�ͷ�r
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
				if (r != NULL)                                                 //�ͷ�r	             {
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
			if (t!= NULL)                                                 //�ͷ�r
	         {
		        free(t);
		        t= NULL;
	         }
			 break;
		}
	     else
		 {
			 if (t!= NULL)                                                 //�ͷ�r
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
