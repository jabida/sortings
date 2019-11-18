#include<stdio.h>
#include<stdlib.h>
void bubble(int a[], int n)
{
int i,j,temp;
FILE *fp;
fp=fopen("output.c","w+");
int b[]={11,12,22,25,34,64,90};
 for( int i=0; i<n-1;i++)
       {
            for( int j=0;j<n-1-i;j++)
            {
                 if( a[j] > a[j+1] )
                 {
                       temp=a[j];
                       a[j] = a[j+1];
                       a[j+1] = temp;
                  }
            }
       }
for(i=0;i<n;i++)
{
fprintf(fp,"%d\n",a[i]);
}

for(i=0;i<n;i++)
{

fscanf(fp,"%d",&a[i]);
printf("%d",a[i]);
}

for(i=0;i<n;i++)
{
if(a[i]==b[i])
{
continue;
}
else
{
printf("fail");
exit(0);
}

}

printf("sucess");

}

