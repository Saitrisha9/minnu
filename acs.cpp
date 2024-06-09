/*#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
#include<limits.h>
#define N 10

int mindist(int dist[N][2],bool visited[N],int n)
{
	int minvalue=INT_MAX,mini,i;
	for(i=0;i<n;i++)
	{
		if(visited[i]==false && dist[i][0]<=minvalue)
		{
			minvalue=dist[i][0];
			mini=i;
		}
	}
	return mini;
}
void print(int dist[N][2],int src,int dest,int n)
{
	int ans[20],k=0;
	ans[k++]=dest;
	int i=dist[dest][1],j;
	while(i!=-1)
	{
		ans[k++]=i;
		i=dist[i][1];
	}
	for(j=k-1;j>=0;j--)
	printf("%d\n",ans[j]);
	printf("\n sum=%d",dist[dest][0]);
}
void dijk(int graph[N][N],int src,int dest,int n)
{
	int dist[N][2],i,j,count;
	bool visited[N];
	for(i=0;i<n;i++)
	{
		dist[i][0]=INT_MAX;
		visited[i]=false;
	}
	dist[src][0]=0;
	dist[src][1]=-1;
	for(count=0;count<n-1;count++)
	{
		int u=mindist(dist,visited,n);
		visited[u]=true;
		for(j=0;j<n;j++)
		{
			if(!visited[j] && graph[u][j] && dist[u][0]!=INT_MAX && dist[j][0]>dist[u][0]+graph[u][j])
			{
				dist[j][0]=dist[u][0]+graph[u][j];
				dist[j][1]=u;
			}
		}
	}
	print(dist,src,dest,n);
}
int main()
{
	int src,dest,n,i,j;
	printf("enter no.of nodes:");
	scanf("%d",&n);
	int graph[N][N];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&graph[i][j]);
		}
	}
	printf("\n enter src:");
	scanf("%d",&src);
	printf("\n enter dest:");
	scanf("%d",&dest);
	dijk(graph,src,dest,n);
}*/

/*
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char in[20],out[20],def[20];
	int n,flag=0,l=0,i;
	printf("enter data:");
	scanf("%s",&in);
	printf("\n the initial data:%s",in);
	for(i=strlen(in)-1;i>=0;i--)
	{
		out[l++]=in[i];
		if(in[i]=='1')
		   flag++;
		else
		   flag=0;
		if(flag==5)
		{
			out[l++]='0';
			flag=0;
		}
		   
	}
	out[l]='\0';
	printf("\n the stuffed string:%s",strrev(out));
	flag=0;
	l=0;
	for(i=strlen(out)-1;i>=0;i--)
	{
		def[l++]=out[i];
		if(out[i]=='1')
		   flag++;
		else
		   flag=0;
		if(flag==5)
		{
			//printf("i");
			i--;
			flag=0;
		}
	}
	def[l]='\0';
	printf("\n the destuffed string:%s",strrev(def));
	return 0;
}*/


/*
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char in[10],out[10],def[10];
	int n,flag=0,l=0,i;
	printf("enter string:");
	scanf("%s",in);
	printf("\n initial string:%s",in);
	for(i=strlen(in)-1;i>=0;i--)
	{
		out[l++]=in[i];
		if(in[i]=='e' || in[i]=='f')
		{
			out[l++]='e';
		}
	}
	out[l]='\0';
	printf("\n the stuffed string:%s",strrev(out));
	flag=0;
	l=0;
	for(i=strlen(out)-1;i>=0;i--)
	{
		def[l++]=out[i];
		if((out[i]=='e' || out[i]=='f') && (out[i-1]=='e'))
		{
			i--;
		}
	}
	def[l]='\0';
	printf("\ndestuffed data:%s",strrev(def));
	return 0;
	
}*/



/*
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j,c=0;
	printf("enter no.of frames :");
	scanf("%d",&n);
	while(1)
	{
		printf("\n frame %d is sent",i+1);
		printf("\n is %d is received :",i+1);
		scanf("%d",&j);
		if(j==1)
		{
			printf("\n %d frame is received",i+1);
			i++;
		}
		if(i>=n)
		{
			printf("\n succefully");
			break;
		}
		if(c>20)
		{
			printf("\ntimeout");
			break;
		}
	}
	return 0;
}*/


/*
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,w,i,c=0,k=0;
	int ack[10];
	printf("enter no.of nodes:");
	scanf("%d",&n);
	printf("\n enter window size");
	scanf("%d",&w);
	for(i=0;i<n;i++)
	ack[i]=0;
	i=0;
	while(1)
	{
		c=0;
		for(i=0;i<n;i++)
		{
			if(ack[i]==0 && c<w)
			{
				printf("\nframe %d is sent",i+1);
				c++;
			}
		}
		c=0;
		for(i=0;i<n;i++)
		{
			if(ack[i]==0 && c<w)
			{
				printf("\n is frame %d is received:",i+1);
				scanf("%d",&ack[i]);
				if(ack[i]==0)
				{
					printf("\n error occured at %d",i+1);
					break;
				}
				else
				{
					c++;
				}
			}
		}
		k=0;
		for(i=0;i<n;i++)
		{
			if(ack[i]==1)
			 k++;
		}
		if(k==n)
		{
			printf("\n successfully");
			break;
		}
		
	}
	return 0;
}*/



/*
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,w,i,c=0,l=0,k=0,d=0;
	int ack[10];
	printf("enter no.of nodes:");
	scanf("%d",&n);
	printf("\n enter window size");
	scanf("%d",&w);
	for(i=0;i<n;i++)
	ack[i]=0;
	i=0;
	while(1)
	{
		c=0;
		for(i=0;i<n;i++)
		{
			if(ack[i]==0 && c<w)
			{
				printf("\nframe %d is sent",i+1);
				c++;
				l++;
			}
		}
		d=0;
		for(i=0;i<n;i++)
		{
			if(ack[i]==0 && d<w)
			{
				printf("\n is frame %d is received:",i+1);
				scanf("%d",&ack[i]);
				d++;
			}
		}
		k=0;
		for(i=0;i<n;i++)
		{
			if(ack[i]==1)
			 k++;
		}
		if(k==n)
		{
			printf("\n successfully");
			break;
		}
		
	}
	return 0;
}*/



/*
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,r,p,sum=0,k,q;
	printf("enter bucket size:");
	scanf("%d",&n);
	printf("\n enter output rate:");
	scanf("%d",&r);
	while(q)
	{
		printf("\n enter input rate:");
		scanf("%d",&p);
		if(p>r)
		{
			printf("\n the transmitted rate:%d",r);
			
			if((sum+p-r)>n)
			{
				printf("\n packet loss:%d",(sum+p-r)-n);
				sum=n;
			}
			else
			{
				printf("\n packet loss :0 \n");
				sum=sum+p-r;
			}
			printf("\n the bucket status:%d",sum);
		}
		else if(p=n)
		{
			printf("\n the transmitted rate:%d",r);
			printf("\n the packet loss : 0");
			printf("\n the bucket status:%d",sum);
			
		}
		else
		{
			k=sum+p;
			if(k>0 && k<r)
			{
				printf("\n transmitted rate:%d",r);
				sum=sum+p-r;
			}
			printf("\n continue??");
			scanf("%d",&q);
			
			if(q==0)
			   printf("\n");
			   break;
			printf("\n");
		}
	}
	return 0;
}*/


/*
#include<stdio.h>
#include<conio.h>
int main()
{
	int ps,mtu,hs,len,fn,offset;
	printf("enter packet size:");
	scanf("%d",&ps);
	printf("\n enter size of mtu:");
	scanf("%d",&mtu);
	printf("\n enter size of header:");
	scanf("%d",&hs);
	ps-=hs;
	mtu-=hs;
	printf("\n frag length offset mf\n");
	while(ps>0)
	{
		if(ps>mtu)
		{
			len=mtu;
			printf(" %d    %d    %d   %d\n",fn,len,offset,1);
		}
		else
		{
			len=ps;
			printf(" %d    %d    %d   %d\n",fn,len,offset,0);
			//break;
			
		}
		offset+=mtu;
		ps-=len;
		fn++;
	}
	return 0;
}*/



#include<stdio.h>
#include<conio.h>
#include<limits.h>
struct node
{
	unsigned dist[20];
	unsigned from[20];
}rt[10];

int main()
{
	int i,j,n,k,c;
	printf("enter no.of nodes:");
	scanf("%d",&n);
	int cost[20][20];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0 && i!=j)
			  cost[i][j]=INT_MAX;
			rt[i].dist[j]=cost[i][j];
			rt[i].from[j]=j;
		}
	}
	do
	{
		c=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				for(k=0;k<n;k++)
				{
					if(rt[i].dist[j]>cost[i][k]+rt[k].dist[j])
					{
						rt[i].dist[j]=cost[i][k]+rt[k].dist[j];
						rt[i].from[j]=k;
						c++;
					}
				}
			}
		}
	}
	while(c!=0);
	
	
	for(i=0;i<n;i++)
	{
		printf("\n for router :%d",i);
		printf("\n node  dist  next");
		for(j=0;j<n;j++)
		{
			printf("\n %d  %d  %d",j,rt[i].dist[j],rt[i].from[j]);
		}
	}
	return 0;
}
