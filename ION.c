//it takes what you write, divides it in tokens (lexical analysis), and acts according to the tokens scanned.
#include<stdio.h>
#include<conio.h>
#include<windows.h>
int asciitodecimal(char);
int logicgate();
float calc();
char a[99],c,d[99],asc,b[99],run,q[99],w[99];
int e[99],g[99],i=0,j=0,cb=1,f=1,n1[99],n2[99],s=0,h=0,po2,h2=0,j2,e2[99],g2[99],cd,cx,po,rep=0,x1=0,x2=0,x3=0,x4=0,n3[99],n4[99],cx2,cx3;
float fl1=0,fl2=0,ans;
void main()
{   
 ini: i=0;j=0;cb=1;f=1;s=0;x1=0;h=0;x2=0;rep=0;a[3]=0;
   for(s;s<99;s++)
  {
  
    a[s] = getche();
    if(a[s]==8)
    {
    		s=s-1;s--;
    
	}
	if(a[s]==10||a[s]==13)
    {
    		
    
	}
    
    if(a[3]==':')
    {   
    	break;
	}
	if(a[s]=='$')
    {   
        printf("\n");
    	goto ini;
	}
	if(a[3]!=':'&&s==3)
			    {
			    sleep(1);
				printf("\b:");
				a[3]=':';
		     	}
	
  }
   	if(a[0]=='s')
	{
		if(a[1]=='u')
		{
			if(a[2]=='m'||a[2]=='b')
			{
				if(a[3]==':')
				{ 	
				 
				    calc();
				    printf("\n>>>%7.0f\n",ans);
			       	goto ini;
			       	
    			 }
			}
			    
		
			
		}
	}

    if(a[0]=='o')
	{
		if(a[1]=='r')
		{
			if(a[2]=='l')
			{
				if(a[3]==':')
				{ 	
				 
				    calc();
				    printf("\n>>>%7.2f\n",ans);
			       	goto ini;
			       	
    			 }
    			}
    	}
	}
	 if(a[0]=='n')
	{
		if(a[1]=='d')
		{
			if(a[2]=='l')
			{
				if(a[3]==':')
				{ 	
				    printf("welcome to ndl\n");
				    calc();
				    printf("\n>>>%7.2f\n",ans);
			       	goto ini;
			       	
    			 }
    			}
    	}
	}
	if(a[0]=='o')

	{
		if(a[1]=='r')
		{
			if(a[2]=='g')
			{
				if(a[3]==':')
				{ 	
				 
				    logicgate();
				    if(d[po]=='>')
	        {
	        	if(x1>x2)
	        		printf("\n>>>TRUE\n");
			    else if(q[po2]=='>'||q[po2]=='<'||q[po2]=='=')
			    	{  
			    		if(q[po2]=='>'&&x3>x4)
			    			printf("\n>>>TRUE\n");
			    		else if(q[po2]=='<'&&x3<x4)
			    			printf("\n>>>TRUE\n");
			    		else if(q[po2]=='='&&x3==x4)	
			    			printf("\n>>>TRUE\n");
			    		else printf("\n>>>FALSE\n");
					}
			}
			  if(d[po]=='<')
	        {
	        	if(x1<x2)
	        		printf("\n>>>TRUE\n");
			    else if(q[po2]=='>'||q[po2]=='<'||q[po2]=='=')
			    	{  
			    		if(q[po2]=='>'&&x3>x4)
			    			printf("\n>>>TRUE\n");
			    		else if(q[po2]=='<'&&x3<x4)
			    			printf("\n>>>TRUE\n");
			    		else if(q[po2]=='='&&x3==x4)	
			    			printf("\n>>>TRUE\n");
			    		else printf("\n>>>FALSE\n");
					}
			}
			  if(d[po]=='=')
	        {
	        	if(x1==x2)
	        		printf("\n>>>TRUE\n");
			    else if(q[po2]=='>'||q[po2]=='<'||q[po2]=='=')
			    	{  
			    		if(q[po2]=='>'&&x3>x4)
			    			printf("\n>>>TRUE\n");
			    		else if(q[po2]=='<'&&x3<x4)
			    			printf("\n>>>TRUE\n");
			    		else if(q[po2]=='='&&x3==x4)	
			    			printf("\n>>>TRUE\n");
			    		else printf("\n>>>FALSE\n");
					}
			}
			       	goto ini;
			       	
    			 }
			}
		}
	}
if(a[0]=='n')

	{
		if(a[1]=='d')
		{
			if(a[2]=='g')
			{
				if(a[3]==':')
				{ 	
				 
				    logicgate();
			if(d[po]=='>')
	        {
	        	if(x1>x2)
	        	{
	        		if(q[po2]=='>'&&x3>x4)
			    		printf("\n>>>TRUE\n");
			    	else if(q[po2]=='<'&&x3<x4)
			    		printf("\n>>>TRUE\n");
			    	else if(q[po2]=='='&&x3==x4)	
			    		printf("\n>>>TRUE\n");
			    	else 
						printf("\n>>>FALSE\n");
				}
				else
					printf("\n>>>FALSE");
		   	}
			  if(d[po]=='<')
	        {
	        	if(x1<x2)
			    	{  
			    		if(q[po2]=='>'&&x3>x4)
			    			printf("\n>>>TRUE\n");
			    		else if(q[po2]=='<'&&x3<x4)
			    			printf("\n>>>TRUE\n");
			    		else if(q[po2]=='='&&x3==x4)	
			    			printf("\n>>>TRUE\n");
			    		else printf("\n>>>FALSE\n");
					}
				else
					printf("\n>>>FALSE");
			}
			  if(d[po]=='=')
	        {
	        	if(x1==x2)
			    	{  
			    		if(q[po2]=='>'&&x3>x4)
			    			printf("\n>>>TRUE\n");
			    		else if(q[po2]=='<'&&x3<x4)
			    			printf("\n>>>TRUE\n");
			    		else if(q[po2]=='='&&x3==x4)	
			    			printf("\n>>>TRUE\n");
			    		else printf("\n>>>FALSE\n");
					}
					else
					printf("\n>>>FALSE");
			}
			       	goto ini;
			       	
    			 }
			}
		}
	}
	if(a[0]=='n')

	{
		if(a[1]=='t')
		{
			if(a[2]=='g')
			{
				if(a[3]==':')
				{ 	
				 calc();
				 goto ini;
				
			}
		}
	}
}

	if(a[0]=='m')
	{
		if(a[1]=='u'||a[1]=='o')
		{
			if(a[2]=='l')
			{
				if(a[3]==':')
				{ 	
			        calc();
				    printf("\n>>>%7.2f\n",ans);
					goto ini;
    				
    			}
			}
			if(a[2]=='d')
			{
				if(a[3]==':')
				{ 	
			     
				    calc();
				    printf("\n>>>%7.2f\n",ans);
				    goto ini;
			    }
		
			
		    }
	    }
    }
if(a[0]=='g')
	{
		if(a[1]=='r')
		{
			if(a[2]=='e')
			{
				if(a[3]==':')
				{ 	
			     
				    calc();
				    goto ini;
				}
			}
		}
	}
if(a[0]=='l')
	{
		if(a[1]=='e')
		{
			if(a[2]=='s')
			{
				if(a[3]==':')
				{ 	
			     
				        calc();
						goto ini;
				}
			}
		}
	}
if(a[0]=='d')
	{
		if(a[1]=='i')
		{
			
			if(a[2]=='v')
			{
				if(a[3]==':')
				{ 	
			     fl1=0;fl2=0;
			     calc();
			     if(ans)
				 printf("\n>>>%7.2f\n",ans);
				 goto ini;
				}
			}
		
			
		}
	}
	if(a[0]=='e')
		if(a[1]=='x')
			if(a[2]=='t')
				if(a[3]==':')
					goto exit;
					



getch();
exit:;
}
int asciitodecimal(char a)
{
	if(a==48)
	{
		a=0;
	}
	else if(a==49)
	{
		a=1;
	}
	else if(a==50)
	{
		a=2;
	}
	else if(a==51)
	{
		a=3;
	}
	else if(a==52)
	{
		a=4;
	}
	else if(a==53)
	{
		a=5;
	}
	else if(a==54)
	{
		a=6;
	}
	else if(a==55)
	{
		a=7;
	}
	else if(a==56)
	{
		a=8;
	}
	else if(a==57)
	{
		a=9;
	}
	return(a);
}
float calc()
{
	        for(i;i<99;i++)
				 {
				   d[i]=getche();
				    j++;
				    
				    if(d[i]==8)
                      {
                       	i--;i--;j--;j--;
                      }
				    if(d[i]=='+'||d[i]=='-'||d[i]=='/'||d[i]=='*'||d[i]=='%'||d[i]=='>'||d[i]=='<'||d[i]=='|'||d[i]=='&'||d[i]=='!')
				      {
				   	    po=i;
				   	    j--;
				   	    break;
				      }
				      if(d[i]=='$')
				     {  
					    printf("\n");
				    	main();
					 }
				    if(d[i]==48||d[i]==49||d[i]==50||d[i]==51||d[i]==52||d[i]==53||d[i]==54||d[i]==55||d[i]==56||d[i]==57)
				      {
				   	    asc=d[i];
				        e[i]=asciitodecimal(asc);
				      }
				      else
					  { 
					  printf("\b%c\b",32);
					  i--;j--;j--;
					  }
				 }
				 i=0;
		    for(i;i<99;i++)
				{
				   b[i]=getche();h++;
				   if(b[i]==48||b[i]==49||b[i]==50||b[i]==51||b[i]==52||b[i]==53||b[i]==54||b[i]==55||b[i]==56||b[i]==57)
				      {
					    asc=b[i];
				        g[i]=asciitodecimal(asc);
				      }
				   
				   else if(b[i]==8)
                      {
    	                i--;h--;i--;h--;
    	
    	              }
				    else if(b[i]=='$')
				      {
					    h--;
					    break;
				      }
				       else
					  { 
					  printf("\b");
					  printf("");
					  i--;i--;h--;h--;
					  }


			    }

			i=0;cx=j;
			for(i;i<j;i++)
			    {
				    cd=cx-1;
				    if(cd==0)
				      {
					    n1[i]=e[i];
				      }
				    else
				      {
					    for(cb;cb<=cd;cd--)
					       {
						     e[i]=e[i]*10;
				         	}
					    n1[i]=e[i];
			        	}
				   cx--;
			    	x1=n1[i]+x1;
			    }
			cx=h;
			i=0;
			for(i;i<h;i++)
			    {
				   cd=cx-1;
				   if(cd==0)
					 {
					   n2[i]=g[i];
					 }
				    else
					{
                       for(cb;cb<=cd;cd--)
				          {
					        g[i]=g[i]*10;
				          }
				       n2[i]=g[i];
				    }

				  cx--;
			      x2=n2[i]+x2;
			    }       if(d[po]=='>'&&a[0]=='n'&&a[1]=='t')
			    		{
			    			if(x1>x2)
			    			{
			    				printf("\n>>>FALSE\n");
			    				main();
							}
							else
							{
								printf("\n>>>TRUE\n");
								main();
							}
						}
						if(d[po]=='<'&&a[0]=='n'&&a[1]=='t')
			    		{
			    			if(x1<x2)
			    			{
			    				printf("\n>>>FALSE\n");
			    				main();
							}
							else
							{
								printf("\n>>>TRUE\n");
								main();
							}
						}
						if(d[po]=='='&&a[0]=='n'&&a[1]=='t')
			    		{
			    			if(x1==x2)
			    			{
			    				printf("\n>>>FALSE\n");
			    				main();
							}
							else
							{
								printf("\n>>>TRUE\n");
								main();
							}
						}if(d[po]=='&')
					    {
						 ans = x1&x2;
						 
						}
						
			    
					    if(d[po]=='+')
					    {
						 ans = x1+x2;
						 
						}
						if(d[po]=='-')
						{
						 ans =	x1-x2;
						}
						if(d[po]=='*')
						{
						 ans =	x1*x2;
						}
						if(d[po]=='|')
						{
						 ans =	x1|x2;
						
						}
						if(d[po]=='/')
						
						{   fl1=x1;
						    fl2=x2;
							if(fl2==0)
							printf("\n>>>ZERODIVISIONERROR : DIVISION BY ZERO\n");
							else
						    ans =	fl1/fl2;
						}
						if(d[po]=='%')
						{
						 ans =	x1%x2;
						}
						if(d[po]=='>'&&a[1]!='r')
						{
							if(x1>x2)
							{
								printf("\n>>>TRUE\n");
							}
							else
							printf("\n>>>FALSE\n");
						}
						if(d[po]=='<'&&a[1]!='e')
						{
							if(x1<x2)
							{
								printf("\n>>>TRUE\n");
							}
							else
							printf("\n>>>FALSE\n");
						}
							if(d[po]=='='&&a[1]!='q')
						{
							if(x1==x2)
							{
								printf("\n>>>TRUE\n");
							}
							else
							printf("\n>>>FALSE\n");
						}
						
						
						return (ans);

}
int logicgate()
{
for(i;i<99;i++)
				 {
				   d[i]=getche();
				    j++;
				    
				    if(d[i]==8)
                      {
                       	i--;i--;j--;j--;
                      }
				    if(d[i]=='>'||d[i]=='<'||d[i]=='=')
				      {
				   	    po=i;
				   	    j--;
				   	    break;
				      }
				      if(d[i]=='$')
				     {  
					    printf("\n");
				    	main();
					 }
				    if(d[i]==48||d[i]==49||d[i]==50||d[i]==51||d[i]==52||d[i]==53||d[i]==54||d[i]==55||d[i]==56||d[i]==57)
				      {
				   	    asc=d[i];
				        e[i]=asciitodecimal(asc);
				      }
				      else
					  { 
					  printf("\b%c\b",32);
					  i--;j--;j--;
					  }
					  }
					i=0;
		    for(i;i<99;i++)
				{
				   b[i]=getche();h++;
				   if(b[i]==48||b[i]==49||b[i]==50||b[i]==51||b[i]==52||b[i]==53||b[i]==54||b[i]==55||b[i]==56||b[i]==57)
				      {
					    asc=b[i];
				        g[i]=asciitodecimal(asc);
				      }
				   
				   else if(b[i]==8)
                      {
    	                i--;h--;i--;h--;
    	
    	              }
				    else if(b[i]=='$')
				      {
					    h--;
					    break;
					    main();
				      }
				      else if(b[i]=='|'||b[i]=='&'||b[i]=='^')
				      {
					    h--;
					    break;
				      }
				       else
					  { 
					  printf("\b");
					  printf("");
					  i--;i--;h--;h--;
					  }


			    }
				i=0;
			    for(i;i<99;i++)
				 {
				   q[i]=getche();
				    j2++;
				    
				    if(q[i]==8)
                      {
                       	i--;i--;j2--;j2--;
                      }
				    if(q[i]=='>'||q[i]=='<'||q[i]=='=')
				      {
				   	    po2=i;
				   	    j2--;
				   	    break;
				      }
				      if(q[i]=='$')
				     {  
					    printf("\n");
				    	main();
					 }
				    if(q[i]==48||q[i]==49||q[i]==50||q[i]==51||q[i]==52||q[i]==53||q[i]==54||q[i]==55||q[i]==56||q[i]==57)
				      {
				   	    asc=q[i];
				        e2[i]=asciitodecimal(asc);
				      }
				      else
					  { 
					  printf("\b%c\b",32);
					  i--;j2--;j2--;
					  }
					  }
					i=0;
		    for(i;i<99;i++)
				{
				   w[i]=getche();h2++;
				   if(w[i]==48||w[i]==49||w[i]==50||w[i]==51||w[i]==52||w[i]==53||w[i]==54||w[i]==55||w[i]==56||w[i]==57)
				      {
					    asc=w[i];
				        g2[i]=asciitodecimal(asc);
				      }
				   
				   else if(w[i]==8)
                      {
    	                i--;h2--;i--;h2--;
    	
    	              }
				    else if(w[i]=='$')
				      {
					    h2--;
					    break;
				      }
				    else
					  { 
					  printf("\b");
					  printf("");
					  i--;i--;h2--;h2--;
					  }


			    }

			i=0;cx=j;
			for(i;i<j;i++)
			    {
				    cd=cx-1;
				    if(cd==0)
				      {
					    n1[i]=e[i];
				      }
				    else
				      {
					    for(cb;cb<=cd;cd--)
					       {
						     e[i]=e[i]*10;
				         	}
					    n1[i]=e[i];
			        	}
				   cx--;
			    	x1=n1[i]+x1;
			    }
			cx=h;
			i=0;
			for(i;i<h;i++)
			    {
				   cd=cx-1;
				   if(cd==0)
					 {
					   n2[i]=g[i];
					 }
				    else
					{
                       for(cb;cb<=cd;cd--)
				          {
					        g[i]=g[i]*10;
				          }
				       n2[i]=g[i];
				    }

				  cx--;
			      x2=n2[i]+x2;
			    }
	


			i=0;cx=j2;
			for(i;i<j2;i++)
			    {
				    cd=cx-1;
				    if(cd==0)
				      {
					    n3[i]=e2[i];
				      }
				    else
				        {
					    for(cb;cb<=cd;cd--)
					        {
						     e2[i]=e2[i]*10;
				         	}
					    n3[i]=e2[i];
			        	}
				   cx--;
			    	x3=n3[i]+x3;
			    }
			cx=h2;
			i=0;
			for(i;i<h2;i++)
			    {
				   cd=cx-1;
				   if(cd==0)
					 {
					   n4[i]=g2[i];
					 }
				    else
					{
                       for(cb;cb<=cd;cd--)
				          {
					        g2[i]=g2[i]*10;
				          }
				       n4[i]=g2[i];
				    }

				  cx--;
			      x4=n4[i]+x4;
			    }
	        
}
