#include"bzx.h"
#include"public.h"
int datachild(char *mon,char *day,char*c,int num)
{
	int a=num;
	int i;
	int j;
	int l=0;
	int lu=0;
	int b;
	int flag=0;
	char d[20];
	FILE *fp,*fs;
	USER *t;
	CHILD *r;
	strcpy(d,mon);
	strcat(d,".");
	strcat(d,day);
	if ((fp = fopen(".\\TEXT\\child.dat", "rb+")) == NULL) 
	{
		printf("\nError on open file child.dat");
		delay(3000);
		exit(1);
	}
	fseek(fp,0,SEEK_END);                                  
	l=ftell(fp)/sizeof(CHILD); 
	if ((fs = fopen(".\\TEXT\\USER.dat", "rb+")) == NULL) 
	{
		printf("\nError on open file UserData.dat");
		delay(3000);
		exit(1);
	}
	fseek(fs,0,SEEK_END);                                  
	lu=ftell(fs)/sizeof(USER); 
	for(j=0;j<lu;j++)
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
			break;
		}
		else
		{
			if(t!=NULL)
			{
				free(t);
				t=NULL;
			}
			continue;
		}
	}
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
		{
			if(strcmp(r->date,d)==0)
			{
				b=atoi(c);
			   if(b>r->number)
			   {   
		            if (r!= NULL)                                                 //释放r
	             {
		            free(r);
		            r= NULL;
	             }
				 if(t!=NULL)
				 {
					 free(t);
					 t=NULL;
				 }
			    if(fclose(fp) != 0)
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
				   return 0;
			   }
			   else
			   {
				   r->number=r->number-b;
				   t->money=t->money-140*b;
				    fseek(fs,j*sizeof(USER),SEEK_SET);    
			 	   fwrite(t,sizeof(USER),1,fs); 
				   fseek(fp,i*sizeof(CHILD),SEEK_SET);    
			 	   fwrite(r,sizeof(CHILD),1,fp); 
			   
                if (r!= NULL)                                                 //释放r
	             {
		            free(r);
		            r= NULL;
	             }
				 if(t!=NULL)
				 {
					 free(t);
					 t=NULL;
				 }
			    if(fclose(fp) != 0)
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
				if (r != NULL)                                                 //释放r	             {
				 { 
					free(r);
		            r= NULL;
	             }	
                   return 1;
               }				 
			}
			else
			{     flag++; 
		        if (r != NULL)                                                 //释放r	             {
				 {   
					free(r);
		            r= NULL;
	             }	
				continue;
			}
			
		}
	     else
		 {        flag++;
	              if (r != NULL)                                                 //释放r	             {
			     {
				    free(r);
		            r= NULL;
	             }	
			 continue;
		 }			 
	}
	if(flag==l)
	{        
                  if (r!= NULL)                                                 //释放r
	             {
		            free(r);
		            r= NULL;
	             }
				 if(t!=NULL)
				 {
					 free(t);
					 t=NULL;
				 }
			    if(fclose(fp) != 0)
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
		return 2;
	}
}

int dataadult(char *mon,char *day,char*c,int num)
{
	int a=num;
	int i;
	int j;
	int lu=0;
	int l=0;
	int b;
	int flag=0;
	char d[20];
	FILE *fp,*fs;
	ADULT *r;
	USER *t;
	strcpy(d,mon);
	strcat(d,".");
	strcat(d,day);
	if ((fp = fopen(".\\TEXT\\adult.dat", "rb+")) == NULL) 
	{
		printf("\nError on open file adult.dat");
		delay(3000);
		exit(1);
	}
	fseek(fp,0,SEEK_END);                                  
	l=ftell(fp)/sizeof(ADULT);
    if ((fs = fopen(".\\TEXT\\USER.dat", "rb+")) == NULL) 
	{
		printf("\nError on open file UserData.dat");
		delay(3000);
		exit(1);
	}
	fseek(fs,0,SEEK_END);                                  
	lu=ftell(fs)/sizeof(USER); 
	for(j=0;j<lu;j++)
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
			break;
		}
		else
		{
			if(t!=NULL)
			{
				free(t);
				t=NULL;
			}
			continue;
		}
	}	
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
		{
			if(strcmp(r->date,d)==0)
			{
				b=atoi(c);
			   if(b>r->number)
			   {   
		           if (r!= NULL)                                                 //释放r
	             {
		            free(r);
		            r= NULL;
	             }
				 if(t!=NULL)
				 {
					 free(t);
					 t=NULL;
				 }
			    if(fclose(fp) != 0)
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
				   return 0;
			   }
			   else
			   {   t->money=t->money-200*b;
				   r->number=r->number-b;
				   fseek(fp,i*sizeof(ADULT),SEEK_SET);    
			 	   fwrite(r,sizeof(ADULT),1,fp); 
			       fseek(fs,j*sizeof(USER),SEEK_SET);    
			 	   fwrite(t,sizeof(USER),1,fs); 
               if (r!= NULL)                                                 //释放r
	             {
		            free(r);
		            r= NULL;
	             }
				 if(t!=NULL)
				 {
					 free(t);
					 t=NULL;
				 }
			    if(fclose(fp) != 0)
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
                   return 1;
               }				 
			}
			else
			{     flag++; 
		        if (r != NULL)                                                 //释放r	             {
				 {   
					free(r);
		            r= NULL;
	             }	
				continue;
			}
			
		}
	     else
		 {        flag++;
	              if (r != NULL)                                                 //释放r	             {
			     {
				    free(r);
		            r= NULL;
	             }	
			 continue;
		 }			 
	}
	if(flag==l)
	{        
                   if (r!= NULL)                                                 //释放r
	             {
		            free(r);
		            r= NULL;
	             }
				 if(t!=NULL)
				 {
					 free(t);
					 t=NULL;
				 }
			    if(fclose(fp) != 0)
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
		return 2;
	}
}

int datastu(char *mon,char *day,char*c,int num)
{
	int a=num;
	int i;
	int j;
	int l=0;
	int lu=0;
	int b;
	int flag=0;
	char d[20];
	FILE *fp,*fs;
	USER *t;
	STUDENT *r;
	strcpy(d,mon);
	strcat(d,".");
	strcat(d,day);
	if ((fp = fopen(".\\TEXT\\student.dat", "rb+")) == NULL) 
	{
		printf("\nError on open file student.dat");
		delay(3000);
		exit(1);
	}
	fseek(fp,0,SEEK_END);                                  
	l=ftell(fp)/sizeof(STUDENT);
     if ((fs = fopen(".\\TEXT\\USER.dat", "rb+")) == NULL) 
	{
		printf("\nError on open file UserData.dat");
		delay(3000);
		exit(1);
	}
	fseek(fs,0,SEEK_END);                                  
	lu=ftell(fs)/sizeof(USER); 
	for(j=0;j<lu;j++)
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
			break;
		}
		else
		{
			if(t!=NULL)
			{
				free(t);
				t=NULL;
			}
			continue;
		}
	}		
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
				b=atoi(c);
			   if(b>r->number)
			   {   
		             if (r!= NULL)                                                 //释放r
	             {
		            free(r);
		            r= NULL;
	             }
				 if(t!=NULL)
				 {
					 free(t);
					 t=NULL;
				 }
			    if(fclose(fp) != 0)
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
				   return 0;
			   }
			   else
			   {   t->money=t->money-140*b;
				   r->number=r->number-b;
				   fseek(fp,i*sizeof(STUDENT),SEEK_SET);    
			 	   fwrite(r,sizeof(STUDENT),1,fp); 
			       fseek(fs,j*sizeof(USER),SEEK_SET);    
			 	   fwrite(t,sizeof(USER),1,fs); 
               if (r!= NULL)                                                 //释放r
	             {
		            free(r);
		            r= NULL;
	             }
				 if(t!=NULL)
				 {
					 free(t);
					 t=NULL;
				 }
			    if(fclose(fp) != 0)
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
                   return 1;
               }				 
			}
			else
			{     flag++; 
		        if (r != NULL)                                                 //释放r	             {
				 {   
					free(r);
		            r= NULL;
	             }	
				continue;
			}
			
		}
	     else
		 {        flag++;
	              if (r != NULL)                                                 //释放r	             {
			     {
				    free(r);
		            r= NULL;
	             }	
			 continue;
		 }			 
	}
	if(flag==l)
	{        
            if (r!= NULL)                                                 //释放r
	             {
		            free(r);
		            r= NULL;
	             }
				 if(t!=NULL)
				 {
					 free(t);
					 t=NULL;
				 }
			    if(fclose(fp) != 0)
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
		return 2;
	}
}

int dataold(char *mon,char *day,char*c,int num)
{
	int a=num;
	int i;
	int j;
	int l=0;
	int lu=0;
	int b;
	int flag=0;
	char d[20];
	FILE *fp,*fs;
	OLD *r;
	USER *t;
	strcpy(d,mon);
	strcat(d,".");
	strcat(d,day);
	if ((fp = fopen(".\\TEXT\\old.dat", "rb+")) == NULL) 
	{
		printf("\nError on open file old.dat");
		delay(3000);
		exit(1);
	}
	fseek(fp,0,SEEK_END);                                  
	l=ftell(fp)/sizeof(OLD ); 
	 if ((fs = fopen(".\\TEXT\\USER.dat", "rb+")) == NULL) 
	{
		printf("\nError on open file UserData.dat");
		delay(3000);
		exit(1);
	}
	fseek(fs,0,SEEK_END);                                  
	lu=ftell(fs)/sizeof(USER); 
	for(j=0;j<lu;j++)
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
			break;
		}
		else
		{
			if(t!=NULL)
			{
				free(t);
				t=NULL;
			}
			continue;
		}
	}		
	for(i=0;i<l;i++)
	{
		if((r=(OLD *)malloc(sizeof(OLD )))==NULL)
		    {
			    printf("Memory not enough!");
			    delay(3000);
			    exit(1);
		    }
		fseek(fp,i*sizeof(OLD ),SEEK_SET);
		fread(r,sizeof(OLD ),1,fp);
		if(r->n==a)
		{
			if(strcmp(r->date,d)==0)
			{
				b=atoi(c);
			   if(b>r->number)
			   {   
		           if (r!= NULL)                                                 //释放r
	             {
		            free(r);
		            r= NULL;
	             }
				 if(t!=NULL)
				 {
					 free(t);
					 t=NULL;
				 }
			    if(fclose(fp) != 0)
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
				   return 0;
			   }
			   else
			   {   t->money=t->money-140*b;
				   r->number=r->number-b;
				   fseek(fp,i*sizeof(OLD ),SEEK_SET);    
			 	   fwrite(r,sizeof(OLD ),1,fp); 
				   fseek(fs,j*sizeof(USER ),SEEK_SET);    
			 	   fwrite(t,sizeof(USER ),1,fs); 
			   
               if (r!= NULL)                                                 //释放r
	             {
		            free(r);
		            r= NULL;
	             }
				 if(t!=NULL)
				 {
					 free(t);
					 t=NULL;
				 }
			    if(fclose(fp) != 0)
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
                   return 1;
               }				 
			}
			else
			{     flag++; 
		        if (r != NULL)                                                 //释放r	             {
				 {   
					free(r);
		            r= NULL;
	             }	
				continue;
			}
			
		}
	     else
		 {        flag++;
	              if (r != NULL)                                                 //释放r	             {
			     {
				    free(r);
		            r= NULL;
	             }	
			 continue;
		 }			 
	}
	if(flag==l)
	{        
                  if (r!= NULL)                                                 //释放r
	             {
		            free(r);
		            r= NULL;
	             }
				 if(t!=NULL)
				 {
					 free(t);
					 t=NULL;
				 }
			    if(fclose(fp) != 0)
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
		return 2;
	}
}