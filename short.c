#include"public.h"


void Short(int *page,int *num)
{
	int mark[9]={0};
    int l;      		//记录总用户个数 
	int i;				//循环变量，参与循环 
	int j;				//记录总共的预约项目数 
	int m;				//参与另一个循环 
	int n;              //记录两个预约项目之间经过的地点数 
	FILE *fp;
	USER s;
	int *road=NULL;           //记录最优路线 
	if((road=(int*)malloc(9*sizeof(int)))==NULL)
	{
		printf("\nMemory not enough!");
		delay(3000);
		exit(1);
	}
	
	clrmous(MouseX,MouseY);
	delay(1000);
	save_bk_mou(MouseX,MouseY);
	cleardevice();
	
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
	if(fclose(fp)!=0)
	{
		printf("\nErroe on close USER.dat!");
		delay(3000);
		exit(1);
	}								//将项目预约情况打印出来 
	bmp_convert("C:\\CODE\\PICTURE\\hlg.bmp","C:\\CODE\\PICTURE\\hlg.dbm");
    show_dbm(0,0,"C:\\CODE\\PICTURE\\hlg.dbm");						//贴图 
	
	if(j==0)
	{
		puthz(144,4,"您当前并未预约项目",32,40,RED); 
	}
	if(j!=0)
	{
		Light(8);
		Fin(8,mark[0],road,&n);
		for(i=0;i<n;i++)
		{
			zline(road[i],road[i+1]);
		}
		for(m=0;m<j-1;m++)
		{                 
			Fin(mark[m],mark[m+1],road,&n);
//			printf("%d : ",n);
//			for(i=0;i<=n;i++)
//			{
//				printf("%d ",road[i]);
//			}printf("\n");
			Light(mark[m]);
			Light(mark[m+1]);
			for(i=0;i<n;i++)
			{
				zline(road[i],road[i+1]);
			}
		}
	}				
	
    while(1)
    {
    	newmouse(&MouseX,&MouseY,&press);
		
		if(MouseX>548&&MouseX<613&&MouseY>429&&MouseY<463)//如果在返回键上
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
				*page=63;
				break;
			}
		}
	}
}

int Findminst(int dist[],int s[])
{
	int i;
	int loc;
	int min=Mint+1;
	for(i=0;i<Site;i++)
	{
		if(s[i]==0)
		{
			if(dist[i]<min)
			{
				min=dist[i];
				loc=i;
			}
		}
	}
	return loc;
}

void Minstpath(int (*p)[Site],int *road,int start,int destination,int *n)
{
	int i,j,k,num;
	int tag;
	int loc;
	int min;
	int dist[Site];
	int path[Site];
	int s[Site];
	int temp[Site];
	loc=start;
	for(i=0;i<Site;i++)
	{
		dist[i]=p[loc][i];
		if(dist[i]!=Mint)
		{
			path[i]=loc;
		}
		else
		{
			path[i]=-1;
		}
	}
	for(i=0;i<Site;i++)
	{
		s[i]=0; 
	}
	s[loc]=1;
	num=1;
	while(num<Site)
	{
		min=Findminst(dist,s);
		s[min]=1;
		for(i=0;i<Site;i++)
		{
			if((s[i]==0)&&(dist[i]>dist[min]+p[min][i]))
			{
				dist[i]=dist[min]+p[min][i];
				path[i]=min;	
			} 
		}
		num++;
	}
	
//	for (i = 0; i < 9; i ++)
//	{
//		printf("%d ", dist[i]);
//	}
//	printf("\n");
	
	*n = 0;
	loc = destination;
	while (path[loc] != -1)
	{
		temp[*n] = path[loc];
		loc = path[loc];
		(*n) ++;
	}
	for (i = 0; i < *n; i ++)
	{
		road[i] = temp[*n - i - 1];
	}
	road[*n] = destination;
	
//	for(i=0;i<Site;i++)
//	{
//		tag=i;
//		j=0;
//		while(tag!=-1)
//		{
//			temp[j]=tag;
//			tag=path[tag];
//			j++;
//		}
//		*n=j-1;
//		for(j=j-1;j>=0;j--)
//		{
//			k=0;
//			road[k++]=temp[j];
//		}
//	}
}
void Fin(int start,int destination,int *road,int *n)
{
	int (*path)[Site];
	int patha[Site][Site]=
	{
		{Mint,12  ,Mint,Mint,Mint,Mint,Mint,Mint,14  },
		{12  ,Mint,8   ,Mint,Mint,Mint,Mint,Mint,20  },
		{Mint,8   ,Mint,12  ,Mint,Mint,Mint,Mint,25  },
		{Mint,Mint,12  ,Mint,Mint,24  ,55  ,Mint,Mint},
		{Mint,Mint,Mint,Mint,Mint,12  ,Mint,Mint,Mint},
		{Mint,Mint,Mint,24  ,12  ,Mint,24  ,Mint,Mint},
		{Mint,Mint,Mint,55  ,Mint,24  ,Mint,29  ,Mint},
		{Mint,Mint,Mint,Mint,Mint,Mint,29  ,Mint,20  },
		{14  ,20  ,25  ,Mint,Mint,Mint,Mint,20  ,Mint}
	};
	path=patha;
	Minstpath(path,road,start,destination,n);
}
