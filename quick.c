#include<stdio.h>
 
int split(int a[], int low, int n) 
{ 
int pivot = a[n],temp,temp1; 
int i = (low - 1); 

for (int j = low; j <= n- 1; j++) 
{ 
		 
if (a[j] < pivot) 
{ 
  i++;  
  temp=a[i];
  a[i]=a[j];
  a[j]=temp; 
		
}

temp1=a[i+1];
a[i+1]=a[n];
a[n]=temp1;
return(i+1);
 
} 

}


void quick(int a[], int low, int n) 
{ 
int i,j;
if (low < n) 
{ 
		
int b = split(a, low, n);
              		 
}
 
for(i=0;i<n+1;i++)

printf("%d\n",a[i]);


}


