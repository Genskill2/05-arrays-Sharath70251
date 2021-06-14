/* Enter your solutions in this file */
#include <stdio.h>

int max(int x[], int n)
{
int count=x[0];
for (int i=0;i<n;i++)
{
if(x[i]>count)
{
count=x[i];
}
}
return count;
}

int min(int x[], int n)
{
int count=x[0];
for (int i=0;i<n;i++)
{
if(x[i]<count)
{
count=x[i];
}
}
return count;
}

float average(int x[], int n)
{
float sum=0;
for (int i=0;i<n;i++)
{
sum+=x[i];
}
float average=sum/(float)n;
return average;
}



int mode(int x[], int n)
{
int new[n];
int mode;
for(int i=0;i<n;i++)
{
int most=0;
for(int j=0;j<n;j++)
{
if(x[i]==x[j])
{
most++;
}
}
new[i]=most;
}
int z=max (new,n);
for(int l=0;l<n;l++)
{
if(new[l]==z)
return x[l];
break;
}
}

int factors(int n, int x[])
{int m=0,z=0,index=0;
int prime[n];
for (int i=2;i<n;i++)
{
int count=0;
for(int j=2;j<=i;j++)
{
if(i%j==0)
{
count++;
}
}
if(count==1)
{
prime[m]=i;
m++;
}
}
while(n>1)
{
if(n%prime[z]==0)
{
n=n/prime[z];
x[index]=prime[z];
index++;
}
else
{
z++;
}
}
return index;
}
 

    
  
       
    
