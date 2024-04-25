#include"public.h"
#include"welcome.h"
#include"login.h"
#include"seeitem.h"
#include"bzx.h"
void main()
{   int w;
    int z;
	int i,j;
	int l;
	int jun=0;
	int count=0;
	int page=0;
	int gd=VGA;
	int gm=VGAHI;
	int  num=0;   //记录用户代号
	int t=0;   //记录用户的票数
	time_t now_time;
	struct tm *local_time;
	FILE *fp;
	USER *r;
	now_time=time(NULL);
	local_time=localtime(&now_time);
	z=local_time->tm_min;
	initgraph(&gd,&gm,"C:\\BORLANDC\\BGI");
	cleardevice();
	welcome();
	delay(3000);
	mouseinit();
	
	while(1)
	{     now_time=time(NULL);
	      local_time=localtime(&now_time);
         w=(local_time->tm_min-z)*20;
		switch(page)
		{
			case 0:
				Login(&page,&num);
				break;
			case 1:
				Register(&page);
				break;
			case 11:
			    Review(&page,&num);
				break;
			case 2:	
			    password(&page);
			    break;
			case 3:
			    Seeitem(&page,&jun,&num);
				break;
			case 31:
			    remind(&page,w,num);
				break;
			case 4:
				Item(&page,num);
				break;
		    case 5:
				ticket(&page);
				break;
			case 51:
			    ticket_1(&page);
				break;
			case 52:
			    myticket(&page,num);
				break;
			case 53:
			    getrefund(&page,num);
				break;
			case 511:
			    ticket_child(&page,num);
				break;
			case 512:
			    ticket_adult(&page,num);
				break;
			case 513:
			    ticket_student(&page,num);
				break;
			case 514:
			    ticket_old(&page,num);
				break;
			case 6:
				Inbook(&page,num);
				break;
			case 61:
				R_List_1(&page,&num);
				break;	
			case 62:
				R_List_2(&page,&num);
				break;	
			case 63:
				Mybook(&page,&num);
				break;	
			case 64:
				Special_Book(&page,&num);
				break;
			case 641:
				Special_1(&page);
				break;
			case 642:
				Special_2(&page);
				break;
			case 643:
				Special_3(&page);
				break;
			case 644:
				Special_4(&page);
				break;
			case 645:
				Special_5(&page);
				break; 
			case 646:
				My_Special_Book(&page,&num);
				break;
			case 65:
			    Short(&page,&num);
				break;   
			case 7:
				Wayad(&page);
				break; 
            case 71:
				Hotad(&page);
				break;
			case 711:
			    Intro_Hot_1(&page);
				break;
			case 712:
			    Intro_Hot_2(&page);
				break;
			case 713:
			    Intro_Hot_3(&page);
				break;
			case 72:
				DIY(&page);
				break;       				
			case 8:
				Map();
				ditucheck(&page);
				break;
			case 91:
				list_1(&page);
				break;	
			case 92:
				list_2(&page);
				break;	
			case 81:
				it_1(&page);
				break;
			case 82:
				it_2(&page);
				break;
			case 83:
				it_3(&page);
				break;
			case 84:
				it_4(&page);
				break;
			case 85:
			    it_5(&page);
				break;
			case 86:
				it_6(&page);
				break;
			case 87:
			    it_7(&page);
				break;
		    case 88:
			    it_8(&page);
				break;
			 case 89:
			    it_9(&page);
				break;	
		}
		
		 if ((fp = fopen(".\\TEXT\\USER.dat", "rb+")) == NULL) 
	{
		printf("\nError on open file userdata.dat");
		delay(3000);
		exit(1);
	}
	fseek(fp,0,SEEK_END);                                  
	l=ftell(fp)/sizeof(USER); 
	for(i=0;i<l;i++)
	{
		if((r=(USER*)malloc(sizeof(USER)))==NULL)
		    {
			    printf("Memory not enough!");
			    delay(3000);
			    exit(1);
		    }
	    fseek(fp,i*sizeof(USER),SEEK_SET);
		fread(r,sizeof(USER),1,fp);
		if(r->num=num)
		{
			for(j=0;j<8;j++)
			{
				if((r->it[j]<(w+20))&&r->it[j]>w)
				{   
					count++;
				}
				else
				{
					continue;
				}
			}
			
			if(r!=NULL)
			{
				free(r);
				r=NULL;
			}
			 if(fclose(fp) != 0)
			 {
				  printf("\nError on close UserData.dat!");
				  delay(3000);
				  exit(1);
			 }
			 break;
		}
		else
		{
			if(r!=NULL)
			{
				free(r);
				r=NULL;
			}
			continue;
		}
	}
	if(count!=0)
	{
	   jun=1;
	}
	if(count==0)
	{
		jun=0;
	}
	if(i==l)
	{
		 if(fclose(fp) != 0)
			 {
				  printf("\nError on close UserData.dat!");
				  delay(3000);
				  exit(1);
			 }
	}
	}
}
