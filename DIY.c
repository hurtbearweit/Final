#include"public.h"

void DIY(int *page)
{
	int mark[50]={0};
	int i=0;
	int j=0;
	int *road=NULL;           //记录最优路线
	int n=0;              //记录两个预约项目之间经过的地点数
	
	clrmous(MouseX,MouseY);
	delay(100);
	save_bk_mou(MouseX,MouseY);
	Draw_DIY();
	delay(500);
	
	while(1)
	{
		while(1)
		{
			newmouse(&MouseX,&MouseY,&press);
			if(mouse_press(347,394,410,425)==1)
			{
				mark[i++]=0;
				break;
			}
			else if(mouse_press(415,345,476,375)==1)
			{
				mark[i++]=1;
				break;
			}
			else if(mouse_press(432,286,493,314)==1)
			{
				mark[i++]=2;
				break;
			}
			else if(mouse_press(491,186,554,214)==1)
			{
				mark[i++]=3;
				break;
			}
			else if(mouse_press(350,43,420,70)==1)
			{
				mark[i++]=4;
				break;
			}
			else if(mouse_press(305,120,366,144)==1)
			{
				mark[i++]=5;
				break;
			}
			else if(mouse_press(130,155,190,185)==1)
			{
				mark[i++]=6;
				break;
			}
			else if(mouse_press(137,335,200,360)==1)
			{
				mark[i++]=7;
				break;
			}
			else if(mouse_press(283,325,344,351)==1)
			{
				mark[i++]=8;
				break;
			}
			else if(MouseX>548&&MouseX<613&&MouseY>429&&MouseY<463)//如果在返回键上
			{   
	       	    if(mouse_press(548,429,613,463)==2)
    			{
    				MouseS=1;  				  							
					continue;
				}
				else if(mouse_press(548,429,613,463)==1)
				{
					MouseS=0;
					clrmous(MouseX, MouseY);
					*page=7;
					goto first;
				}
			}
		}
		
		cover(170,0,470,28,WHITE);
		puthz(236,0,"请点击下一个点",24,24,RED);
		
		if(i>1)
		{
			Fin(mark[i-2],mark[i-1],road,&n);
			Light(mark[i-2]);
			Light(mark[i-1]);
			for(j=0;j<n;j++)
			{
				zline(road[j],road[j+1]);
			}
		}
	}
	first:
	delay(100);
}

void Draw_DIY()
{
	Map();
	cover(170,0,470,28,WHITE);
	puthz(176,0,"请依次点击您想去的地点",24,24,RED);
}
