#include"bzx.h"
/*��ͼ�鿴*/
void ditucheck(int *page)
{    int pos1=0;
     int pos2=0;
	 int pos3=0;
	 int pos4=0;
	 int pos5=0;
	 int pos6=0;
	 int pos7=0;
	 int pos8=0;
	 int pos9=0;
     int pos10=0;	 //����ָ����Ʊ���
       while(1)
 {      
		 newmouse(&MouseX,&MouseY,&press);
		 if(MouseX>348&&MouseX<420&&MouseY>43&&MouseY<70)//�������Ŀ1ľ��˫�������򣨻��ֽ�������
		 {   pos1=1;
	      if(mouse_press(350,43,420,70)==2)
    		{
    			MouseS=1;
    			Light_ditu(350,43,420,70);	
				continue;
			}
			else if(mouse_press(350,43,420,70)==1)
			{
				Light_ditu(350,43,420,70);
				MouseS=0;
				clrmous(MouseX, MouseY);
				*page=81;
				break;
			}
		 }
	
		  if(MouseX>137&&MouseX<200&&MouseY>335&&MouseY<360)//�������Ŀ2���ٷɳ������򣨼�����������
		 {   pos2=1;
	      if(mouse_press(137,335,200,360)==2)
    		{
    			    MouseS=1;
    				Light_ditu(137,335,200,360);
				continue;
			}
			else if(mouse_press(137,335,200,360)==1)
			{
				Light_ditu(137,335,200,360);
				MouseS=0;
				clrmous(MouseX, MouseY);
				*page=82;
				break;
			}
		 }
		 
		  if(MouseX>305&&MouseX<366&&MouseY>120&&MouseY<144)//�������Ŀ3Ħ������������⵺����
		 {   pos3=1;
	      if(mouse_press(305,120,366,144)==2)
    		{
    			MouseS=1;
    			Light_ditu(305,120,366,144);
				continue;
			}
			else if(mouse_press(305,120,366,144)==1)
			{
				Light_ditu(305,120,366,144);
				MouseS=0;
				clrmous(MouseX, MouseY);
				*page=83;
				break;
			}
		 }
		 
		 if(MouseX>491&&MouseX<554&&MouseY>186&&MouseY<214)//�������Ŀ4�����籩������쫷�������
		 {    pos4=1;
	      if(mouse_press(491,186,554,214)==2)
    		{
    			MouseS=1;
    		    Light_ditu(491,186,554,214);
				continue;
			}
			else if(mouse_press(491,186,554,214)==1)
			{
				Light_ditu(491,186,554,214);
				MouseS=0;
				clrmous(MouseX, MouseY);
				*page=84;
				break;
			}
		 }
		 
		  if(MouseX>432&&MouseX<493&&MouseY>286&&MouseY<314)//�������Ŀ5���˫�۵����򣨻���ʱ������
		 {     pos5=1;
	      if(mouse_press(432,286,493,314)==2)
    		{
    			    MouseS=1;
    				Light_ditu(432,286,493,314);
				    continue;
			}
			else if(mouse_press(432,286,493,314)==1)
			{
				Light_ditu(432,286,493,314);
				MouseS=0;
				clrmous(MouseX, MouseY);
				*page=85;
				break;
			}
		 }
		 
		  if(MouseX>130&&MouseX<190&&MouseY>155&&MouseY<185)//�������Ŀ6����ջ��������������������
		 {    pos6=1;
	      if(mouse_press(130,155,190,185)==2)
    		{
    			    MouseS=1;
    				Light_ditu(130,155,190,185);				
				    continue;
			}
			else if(mouse_press(130,155,190,185)==1)
			{
				Light_ditu(130,155,190,185);
				MouseS=0;
				clrmous(MouseX, MouseY);
				*page=86;
				break;
			}
		 }
		  if(MouseX>347&&MouseX<410&&MouseY>394&&MouseY<425)//�������Ŀ7���ַɴ������򣨻��ֺ�������
		 {   pos7=1;
	      if(mouse_press(347,394,410,425)==2)
    		{
    			    MouseS=1;
    				Light_ditu(347,394,410,425);	
				    continue;
			}
			else if(mouse_press(347,394,410,425)==1)
			{
				Light_ditu(347,394,410,425);
				MouseS=0;
				clrmous(MouseX, MouseY);
				*page=87;
				break;
			}
		 }
		 
		 
		  if(MouseX>415&&MouseX<476&&MouseY>345&&MouseY<375)//�������Ŀ8�����ﳵ�����򣨿�ͨ��������
		 {   pos8=1;
	      if(mouse_press(415,345,476,375)==2)
    		{
    			    MouseS=1;
    				Light_ditu(415,345,476,375);   				  							
				    continue;
			}
			else if(mouse_press(415,345,476,375)==1)
			{
				Light_ditu(415,345,476,375);
				MouseS=0;
				clrmous(MouseX, MouseY);
				*page=88;
				break;
			}
		 }
		   if(MouseX>283&&MouseX<344&&MouseY>325&&MouseY<351)//�����������������
		 {   pos9=1;
	      if(mouse_press(283,325,344,351)==2)
    		{
    			    MouseS=1;
    				Light_ditu(283,325,344,351);   				  							
				    continue;
			}
			else if(mouse_press(283,325,344,351)==1)
			{
				Light_ditu(283,325,344,351);
				MouseS=0;
				clrmous(MouseX, MouseY);
				*page=89;
				break;
			}
		 }
		 if(MouseX>548&&MouseX<613&&MouseY>429&&MouseY<463)//����ڷ��ؼ���
		 {   pos10=1;
	      if(mouse_press(548,429,613,463)==2)
    		{
    			    MouseS=1;
    				Light_ditu(548,429,613,463);   				  							
				    continue;
			}
			else if(mouse_press(548,429,613,463)==1)
			{
				Light_ditu(548,429,613,463);
				MouseS=0;
				clrmous(MouseX, MouseY);
				*page=4;
				break;
			}
		 }
	if(pos1!=0||pos2!=0||pos3!=0||pos4!=0||pos5!=0||pos6!=0||pos7!=0||pos8!=0||pos9!=0||pos10!=0)    //����ָ��Լ�������ԭ
	{		
  
    bmp_convert("C:\\CODE\\PICTURE\\hlg.bmp","C:\\CODE\\PICTURE\\hlg.dbm");
    show_dbm(0,0,"C:\\CODE\\PICTURE\\hlg.dbm");
	pos1=0;
	pos2=0;
	pos3=0;
	pos4=0;
	pos5=0;
	pos6=0;
	pos7=0;
	pos8=0;
	pos9=0;
    pos10=0;  	
	}
	if(MouseS!=0)
	{
		MouseS=0;
	}
 }		   
	
	
	
}

void Light_ditu(int x1,int y1,int x2,int y2)   //������ť����
{
	    setcolor(YELLOW);
	    setlinestyle(SOLID_LINE,0,THICK_WIDTH);
	    rectangle(x1,y1,x2,y2);	
}