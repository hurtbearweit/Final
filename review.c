#include"public.h"

void Review(int *page,int *num)
{
	int grade[4]={0};
	
	clrmous(MouseX,MouseY);
    delay(100);
    save_bk_mou(MouseX,MouseY);
	Draw_Review();
	
	while(1)
	{
		newmouse(&MouseX,&MouseY,&press);
   		
		if(mouse_press(250,143,290,183)==1) 
		{
			Ystar(250,143);
			grade[0]=1;
		}
		else if(mouse_press(300,143,340,183)==1) 
		{
			Ystar(250,143);
			Ystar(300,143);
			grade[0]=2;
		}
		else if(mouse_press(350,143,390,183)==1) 
		{
			Ystar(250,143);
			Ystar(300,143);
			Ystar(350,143);
			grade[0]=3;
		}
		else if(mouse_press(400,143,440,183)==1) 
		{
			Ystar(250,143);
			Ystar(300,143);
			Ystar(350,143);
			Ystar(400,143);
			grade[0]=4;
		}
		else if(mouse_press(450,143,490,183)==1) 
		{
			Ystar(250,143);
			Ystar(300,143);
			Ystar(350,143);
			Ystar(400,143);
			Ystar(450,143);
			grade[0]=5;
		}
		if(mouse_press(500,145,565,180)==1)
		{
			grade[0]=0;
			cover(250,140,490,190,DARKGRAY);
			Star(250,143);
			Star(300,143);
			Star(350,143);
			Star(400,143);
			Star(450,143);
		}
		//��һ������Ǻ��� 
		else if(mouse_press(250,193,290,233)==1) 
		{
			Ystar(250,193);
			grade[1]=1;
		}
		else if(mouse_press(300,193,340,233)==1) 
		{
			Ystar(250,193);
			Ystar(300,193);
			grade[1]=2;
		}
		else if(mouse_press(350,193,390,233)==1) 
		{
			Ystar(250,193);
			Ystar(300,193);
			Ystar(350,193);
			grade[1]=3;
		}
		else if(mouse_press(400,193,440,233)==1) 
		{
			Ystar(250,193);
			Ystar(300,193);
			Ystar(350,193);
			Ystar(400,193);
			grade[1]=4;
		}
		else if(mouse_press(450,193,500,233)==1) 
		{
			Ystar(250,193);
			Ystar(300,193);
			Ystar(350,193);
			Ystar(400,193);
			Ystar(450,193);
			grade[1]=5;
		}
		if(mouse_press(500,195,565,230)==1)
		{
			grade[1]=0;
			cover(250,190,490,240,DARKGRAY);
			Star(250,193);
			Star(300,193);
			Star(350,193);
			Star(400,193);
			Star(450,193);
		}
		//�ڶ�������Ǻ��� 
		else if(mouse_press(250,243,290,283)==1) 
		{
			Ystar(250,243);
			grade[2]=1;
		}
		else if(mouse_press(300,243,340,283)==1) 
		{
			Ystar(250,243);
			Ystar(300,243);
			grade[2]=2;
		}
		else if(mouse_press(350,243,390,283)==1) 
		{
			Ystar(250,243);
			Ystar(300,243);
			Ystar(350,243);
			grade[2]=3;
		}
		else if(mouse_press(400,243,440,283)==1) 
		{
			Ystar(250,243);
			Ystar(300,243);
			Ystar(350,243);
			Ystar(400,243);
			grade[2]=4;
		}
		else if(mouse_press(450,243,490,283)==1) 
		{
			Ystar(250,243);
			Ystar(300,243);
			Ystar(350,243);
			Ystar(400,243);
			Ystar(450,243);
			grade[2]=5;
		}
		if(mouse_press(500,245,565,280)==1)
		{
			grade[0]=0;
			cover(250,240,490,290,DARKGRAY);
			Star(250,243);
			Star(300,243);
			Star(350,243);
			Star(400,243);
			Star(450,243);
		}
		//����������Ǻ���
		else if(mouse_press(250,293,290,343)==1) 
		{
			Ystar(250,293);
			grade[3]=1;
		}
		else if(mouse_press(300,293,340,343)==1) 
		{
			Ystar(250,293);
			Ystar(300,293);
			grade[3]=2;
		}
		else if(mouse_press(350,293,390,343)==1) 
		{
			Ystar(250,293);
			Ystar(300,293);
			Ystar(350,293);
			grade[3]=3;
		}
		else if(mouse_press(400,293,440,343)==1) 
		{
			Ystar(250,293);
			Ystar(300,293);
			Ystar(350,293);
			Ystar(400,293);
			grade[3]=4;
		}
		else if(mouse_press(450,293,490,343)==1) 
		{
			Ystar(250,293);
			Ystar(300,293);
			Ystar(350,293);
			Ystar(400,293);
			Ystar(450,293);
			grade[3]=5;
		}
		if(mouse_press(500,295,565,330)==1)
		{
			grade[0]=0;
			cover(250,290,490,340,DARKGRAY);
			Star(250,293);
			Star(300,293);
			Star(350,293);
			Star(400,293);
			Star(450,293);
		}
		//���ĸ����Ǻ��� 
		if(mouse_press(280,350,360,398)==1)
		{
			if((grade[0]!=0)&&(grade[1]!=0)&&(grade[2]!=0)&&(grade[3]!=0))
			{
				setlinestyle(0,0,1);
                setfillstyle(1,WHITE);
                bar(200,180,440,300);
                rectangle(200,180,440,300);
                setfillstyle(1, WHITE);
		        puthz(250,230,"��л���Ĳ���",24,24,RED);
		        delay(500); 
				Score_In(num,grade);
				MouseS=0;
				clrmous(MouseX,MouseY);
				*page=0;
				*num=0;
				break;
			}
			else
			{
				setlinestyle(0,0,1);
                setfillstyle(1,WHITE);
                bar(200,180,440,300);
                rectangle(200,180,440,300);
                setfillstyle(1, WHITE);
		        puthz(262,230,"��ȫ�����",24,24,RED);
		        delay(500);
		        *page=11;
		        break;
			}
		}
		//���ȫ�������˾����������Ҵ浵 
		if(MouseX>490&&MouseX<620&&MouseY>380&&MouseY<420)
		{
			if(mouse_press(490,380,620,420)==2)
			{
				MouseS=1;
				continue;
			}
			else if(mouse_press(490,380,620,420)==1)
			{
				MouseS=0;
				clrmous(MouseX,MouseY);
				*page=0;
				*num=0;
				break;
			}
		}
		//������ֱ���������� 
		if(MouseS!=0)
		{
			MouseS=0;
		}
	}
}

void Draw_Review()
{
	cleardevice();
	setbkcolor(DARKGRAY);     //���� 
	
	setfillstyle(1,BLUE);
	bar(0,0,640,60);
	bar(0,440,640,480);
	puthz(240,14,"�人���ֹ�",32,32,LIGHTGRAY);
	
	puthz(188,80,"��Ϊ���ǵķ���ϵͳ�÷�",24,24,RED);
	puthz(104,105,"���Ĵ�������ǳ�����߷��������Ķ���",24,24,RED);
	
	puthz(150,150,"��Ŀ�鿴",24,24,RED);
	Star(250,143);
	Star(300,143);
	Star(350,143);
	Star(400,143);
	Star(450,143);
	cover(500,145,565,180,WHITE);
	puthz(510,150,"����",24,24,RED);
	
	puthz(150,200,"������Ʊ",24,24,RED);
	Star(250,193);
	Star(300,193);
	Star(350,193);
	Star(400,193);
	Star(450,193);
	cover(500,195,565,230,WHITE);
	puthz(510,200,"����",24,24,RED);
	
	puthz(150,250,"ԤԼ��Ŀ",24,24,RED);
	Star(250,243);
	Star(300,243);
	Star(350,243);
	Star(400,243);
	Star(450,243);
	cover(500,245,565,280,WHITE);
	puthz(510,250,"����",24,24,RED);
	
	puthz(150,300,"·���Ƽ�",24,24,RED);
	Star(250,293);
	Star(300,293);
	Star(350,293);
	Star(400,293);
	Star(450,293);
	cover(500,295,565,330,WHITE);
	puthz(510,300,"����",24,24,RED); 
	
	cover(280,350,360,398,WHITE);
	highlight(280,350,360,398,BLACK);
	puthz(285,358,"ȷ��",32,35,RED); 
	//��������ȷ���ύ��ť 
	
	setfillstyle(1,WHITE);
	setcolor(BLACK);
	setlinestyle(0,0,1);
	bar(490,380,620,420);
	rectangle(490,380,620,420);
	puthz(498,388,"��������",24,32,RED); 
	
	//��������ȷ���ύ��ť 
}

void Score_In(int *num,int *grade)
{ 
	int l;
	int i;
	int j;
	FILE *fp;
	USER *n;
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
			for(j=0;j<4;j++)
			{
				n->score[j]=grade[j];
			}
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

