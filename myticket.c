#include"bzx.h"
#include"ticket.h"

void myticket(int *page,int num)
{   int a=num;
    int tag;
    int pos1;
	int x,y,m,k,j;
	int l;
	int i;
	char b[10];
	clrmous(MouseX,MouseY);
    delay(100);
    save_bk_mou(MouseX,MouseY);
	x=drawchild(a);
	y=drawstudent(a);
	m=drawadult(a);
	k=drawold(a);
	j=140*x+140*y+200*m+140*k;
	itoa(j,b,10);
	setfillstyle(1,WHITE);
	bar(540,420,600,460);
	puthz(548,430,"返回",24,24,LIGHTGRAY);
	puthz(205,430,"应付金额",24,24,WHITE);
	setcolor(WHITE);
	outtextxy(305,430,":");
	setcolor(GREEN);
	outtextxy(315,430,b);
	puthz(395,430,"元",24,24,GREEN);
		while(1)
	{
		newmouse(&MouseX,&MouseY,&press);
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
			if(tag!=0)
		{  
	          if(pos1!=0)
			{
				Dark_ticket1(pos1);
				pos1=0;
			}
			tag=0;
		} 
	      if(MouseS!=0)
	    {
		    MouseS=0;
	    }
		}
	}
	
	
	
}
int drawchild(int num)
{    int a=num;
     int count=0;
     FILE* fp;
     CHILD *r;
	 int l;
	 int i;
	 int flag=0;
	 char b[20];
	cleardevice();
	setbkcolor(DARKGRAY);  
	setfillstyle(1,BLUE);
	bar(0,0,640,60);
	puthz(190,14,"武汉欢乐谷门票服务",32,32,LIGHTGRAY);
	
	setfillstyle(1,WHITE);
	bar(50,100,630,150);
	setlinestyle(SOLID_LINE,0,NORM_WIDTH);
	setcolor(RED);
	line(200,100,200,150);
	puthz(80,110,"儿童票",32,32,RED);
	
    if ((fp = fopen(".\\TEXT\\child.dat", "rb+")) == NULL) 
	{
		printf("\nError on open file child.dat");
		delay(3000);
		exit(1);
	}
	fseek(fp,0,SEEK_END);                                  
	l=ftell(fp)/sizeof(CHILD); 
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
		{   if(r->number!=0)
		  {	 
			setcolor(RED);
			outtextxy(205+80*flag,115,r->date);
			itoa(r->number,b,10);
			setcolor(GREEN);
			outtextxy(205+80*flag+60,115,b);
			count=count+r->number;
			flag++;
			if (r!= NULL)                                                 //释放r
	         {
		        free(r);
		        r= NULL;
	         }
			 continue;
		  }
		  else
		  {
			   if (r!= NULL)                                                //释放r
	         {
		        free(r);
		        r= NULL;
	         }
			 continue;
		  }
		}
	     else
		 {
			 if (r!= NULL)                                                 //释放r
	         {
		        free(r);
		        r= NULL;
	         }
			 continue;
		 }
	}
	
	if(fclose(fp) != 0)
	 {
			 printf("\nError on close UserData.dat!");
			 delay(3000);
		     exit(1);
     }
    	return count;
	
	
}


int  drawstudent(int num)
{    int a=num;
     int count=0;
     FILE* fp;
     STUDENT *r;
	 int l;
	 int i;
	 int flag=0;
	 char b[20];
	setfillstyle(1,WHITE);
	bar(50,260,630,310);
	setlinestyle(SOLID_LINE,0,NORM_WIDTH);
	setcolor(RED);
	line(200,260,200,310);
	puthz(80,270,"学生票",32,32,RED);
	
    if ((fp = fopen(".\\TEXT\\student.dat", "rb+")) == NULL) 
	{
		printf("\nError on open file student.dat");
		delay(3000);
		exit(1);
	}
	fseek(fp,0,SEEK_END);                                  
	l=ftell(fp)/sizeof(STUDENT); 
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
		{   if(r->number!=0)
		  {
			setcolor(RED);
			outtextxy(205+80*flag,275,r->date);
			itoa(r->number,b,10);
			setcolor(GREEN);
			outtextxy(205+80*flag+60,275,b);
			count=count+r->number;
			flag++;
			if (r!= NULL)                                                 //释放r
	         {
		        free(r);
		        r= NULL;
	         }
			 continue;
		  }
		  else
		  {
			 if (r!= NULL)                                                 //释放r
	         {
		        free(r);
		        r= NULL;
	         }
			 continue; 
		  }
		}
	     else
		 {
			 if (r!= NULL)                                                 //释放r
	         {
		        free(r);
		        r= NULL;
	         }
			 continue;
		 }
	}
	
	if(fclose(fp) != 0)
	 {
			 printf("\nError on close UserData.dat!");
			 delay(3000);
		     exit(1);
     }
	 return count;	
}
int drawadult(int num)
{    int a=num;
     FILE* fp;
     ADULT *r;
	 int count=0;
	 int l;
	 int i;
	 int flag=0;
	 char b[20];
	setfillstyle(1,WHITE);
	bar(50,180,630,230);
	setlinestyle(SOLID_LINE,0,NORM_WIDTH);
	setcolor(RED);
	line(200,180,200,230);
	puthz(80,190,"成人票",32,32,RED);
	
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
		{   if(r->number!=0)
		  {
			setcolor(RED);
			outtextxy(205+80*flag,195,r->date);
			itoa(r->number,b,10);
			setcolor(GREEN);
			outtextxy(205+80*flag+60,195,b);
			count=count+r->number;
			flag++;
			if (r!= NULL)                                                 //释放r
	         {
		        free(r);
		        r= NULL;
	         }
			 continue;
		  }
		  else
		  {
			 if (r!= NULL)                                                 //释放r
	         {
		        free(r);
		        r= NULL;
	         }
			 continue; 
		  }
		}
	     else
		 {
			 if (r!= NULL)                                                 //释放r
	         {
		        free(r);
		        r= NULL;
	         }
			 continue;
		 }
	}
	
	if(fclose(fp) != 0)
	 {
			 printf("\nError on close UserData.dat!");
			 delay(3000);
		     exit(1);
     }
    	
	return count;
	
}
int drawold(int num)
{    int a=num;
     FILE* fp;
     OLD *r;
	 int l;
	 int i;
	 int flag=0;
	 int count=0;
	 char b[20];
	setfillstyle(1,WHITE);
	bar(50,340,630,390);
	setlinestyle(SOLID_LINE,0,NORM_WIDTH);
	setcolor(RED);
	line(200,340,200,390);
	puthz(80,350,"老年票",32,32,RED);
	
    if ((fp = fopen(".\\TEXT\\old.dat", "rb+")) == NULL) 
	{
		printf("\nError on open file old.dat");
		delay(3000);
		exit(1);
	}
	fseek(fp,0,SEEK_END);                                  
	l=ftell(fp)/sizeof(OLD); 
	for(i=0;i<l;i++)
	{
		if((r=(OLD*)malloc(sizeof(OLD)))==NULL)
		    {
			    printf("Memory not enough!");
			    delay(3000);
			    exit(1);
		    }
		fseek(fp,i*sizeof(OLD),SEEK_SET);
		fread(r,sizeof(OLD),1,fp);
		if(r->n==a)
		{   if(r->number!=0)
		  {
			setcolor(RED);
			outtextxy(205+80*flag,355,r->date);
			itoa(r->number,b,10);
			setcolor(GREEN);
			outtextxy(205+80*flag+60,355,b);
			count=count+r->number;
			flag++;
			if (r!= NULL)                                                 //释放r
	         {
		        free(r);
		        r= NULL;
	         }
			 continue;
		  }
		  else
		  {
			 if (r!= NULL)                                                 //释放r
	         {
		        free(r);
		        r= NULL;
	         }
			 continue; 
		  }
		}
	     else
		 {
			 if (r!= NULL)                                                 //释放r
	         {
		        free(r);
		        r= NULL;
	         }
			 continue;
		 }
	}
	
	if(fclose(fp) != 0)
	 {
			 printf("\nError on close UserData.dat!");
			 delay(3000);
		     exit(1);
     }
    	
	return count;
	
}

int countticket(int num)
{   int a=num;
    int count=0;
	int lc,la,ls,lo;
	int i;
	FILE *fp,*fq,*fs,*ft;
	char b[20];
	CHILD *p;
	STUDENT *q;
	ADULT *s;
	OLD *t;
	DATE today[5];
	get_time(today);
	strcpy(b,today[0].month);
	strcat(b,".");
	strcat(b,today[0].day);
	 if ((fp = fopen(".\\TEXT\\child.dat", "rb+")) == NULL) 
	{
		printf("\nError on open file child.dat");
		delay(3000);
		exit(1);
	}
	fseek(fp,0,SEEK_END);                                  
	lc=ftell(fp)/sizeof(CHILD); 
	
	if ((fq = fopen(".\\TEXT\\student.dat", "rb+")) == NULL) 
	{
		printf("\nError on open file student.dat");
		delay(3000);
		exit(1);
	}
	fseek(fq,0,SEEK_END);                                  
	ls=ftell(fq)/sizeof(STUDENT); 
	
	if ((fs = fopen(".\\TEXT\\adult.dat", "rb+")) == NULL) 
	{
		printf("\nError on open file adult.dat");
		delay(3000);
		exit(1);
	}
	fseek(fs,0,SEEK_END);                                  
	la=ftell(fs)/sizeof(ADULT);
	
	if ((ft = fopen(".\\TEXT\\old.dat", "rb+")) == NULL) 
	{
		printf("\nError on open file old.dat");
		delay(3000);
		exit(1);
	}
	fseek(ft,0,SEEK_END);                                  
	lo=ftell(ft)/sizeof(OLD); 
	
	for(i=0;i<lc;i++)
	{
		if((p=(CHILD*)malloc(sizeof(CHILD)))==NULL)
		    {
			    printf("Memory not enough!");
			    delay(3000);
			    exit(1);
		    }
		fseek(fp,i*sizeof(CHILD),SEEK_SET);
		fread(p,sizeof(CHILD),1,fp);
		if(p->n==a)
		{
			if(strcmp(b,p->date)==0)
			{
				count=count+p->number;
				 if (p!= NULL)                                                 //释放p
	         {
		        free(p);
		        p= NULL;
	         }
			 break;
			}
			else
			{    if (p!= NULL)                                                 //释放p
	         {
		        free(p);
		        p= NULL;
	         }
				continue;
			}
		}
		else
		{
			if (p!= NULL)                                                 //释放p
	         {
		        free(p);
		        p= NULL;
	         }
				continue;
		}
		
	}
	
	for(i=0;i<la;i++)
	{
		if((s=(ADULT*)malloc(sizeof(ADULT)))==NULL)
		    {
			    printf("Memory not enough!");
			    delay(3000);
			    exit(1);
		    }
		fseek(fs,i*sizeof(ADULT),SEEK_SET);
		fread(s,sizeof(ADULT),1,fs);
		if(s->n==a)
		{
			if(strcmp(b,s->date)==0)
			{
				count=count+s->number;
				 if (s!= NULL)                                                 //释放s
	         {
		        free(s);
		        s= NULL;
	         }
			 break;
			}
			else
			{    if (s!= NULL)                                                 
	         {
		        free(s);
		        s= NULL;
	         }
				continue;
			}
		}
		else
		{
			if (s!= NULL)                                                 
	         {
		        free(s);
		        s= NULL;
	         }
				continue;
		}
		
	}
	
	for(i=0;i<ls;i++)
	{
		if((q=(STUDENT*)malloc(sizeof(STUDENT)))==NULL)
		    {
			    printf("Memory not enough!");
			    delay(3000);
			    exit(1);
		    }
		fseek(fq,i*sizeof(STUDENT),SEEK_SET);
		fread(q,sizeof(STUDENT),1,fq);
		if(q->n==a)
		{
			if(strcmp(b,q->date)==0)
			{
				count=count+q->number;
				 if (q!= NULL)                                                 //释放q
	         {
		        free(q);
		        q= NULL;
	         }
			 break;
			}
			else
			{    if (q!= NULL)                                                 
	         {
		        free(q);
		        q= NULL;
	         }
				continue;
			}
		}
		else
		{
			if (q!= NULL)                                                 
	         {
		        free(q);
		        q= NULL;
	         }
				continue;
		}
		
	}
	
	for(i=0;i<lo;i++)
	{
		if((t=(OLD*)malloc(sizeof(OLD)))==NULL)
		    {
			    printf("Memory not enough!");
			    delay(3000);
			    exit(1);
		    }
		fseek(ft,i*sizeof(OLD),SEEK_SET);
		fread(t,sizeof(OLD),1,ft);
		if(t->n==a)
		{
			if(strcmp(b,t->date)==0)
			{
				count=count+t->number;
				 if (t!= NULL)                                                 
	         {
		        free(t);
		        t= NULL;
	         }
			 break;
			}
			else
			{    if (t!= NULL)                                                 
	         {
		        free(t);
		        t= NULL;
	         }
				continue;
			}
		}
		else
		{
			if (t!= NULL)                                                 
	         {
		        free(t);
		        t= NULL;
	         }
				continue;
		}
		
	}
	
	   if(fclose(fp) != 0)
	 {
			 printf("\nError on close UserData.dat!");
			 delay(3000);
		     exit(1);
     }
	  if(fclose(fq) != 0)
	 {
			 printf("\nError on close UserData.dat!");
			 delay(3000);
		     exit(1);
     }
	   if(fclose(fs) != 0)
	 {
			 printf("\nError on close UserData.dat!");
			 delay(3000);
		     exit(1);
     }
	   if(fclose(ft) != 0)
	 {
			 printf("\nError on close UserData.dat!");
			 delay(3000);
		     exit(1);
     }
	 
	 return count;
}