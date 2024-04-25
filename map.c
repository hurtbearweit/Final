#include"public.h"
#include"IMAGE.h"
void Map()
{
	cleardevice();
	/*setbkcolor(YELLOW);*/
	
    bmp_convert("C:\\CODE\\PICTURE\\hlg.bmp","C:\\CODE\\PICTURE\\hlg.dbm");
    show_dbm(0,0,"C:\\CODE\\PICTURE\\hlg.dbm");

   /* while(1)
	{
		newmouse(&MouseX,&MouseY,&press);
		if(mouse_press(0,0,639,349)==1)
    	{
    		break;
    	}
	} 
    *page = 4;*/
}
