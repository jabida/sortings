
#include<stdio.h> 


void mergesort(int a[], int l, int m, int n) 
{ 

int i, j, k; 
int n1 = m-l + 1; 
int n2 = n-m; 
int L[n1], R[n2]; 

for (i = 0; i < n1; i++) 
	
  L[i] = a[l + i]; 

for (j = 0; j < n2; j++) 
		
  R[j] = a[m + 1+ j]; 

	
i = 0;  
j = 0;
k = l;  
while (i < n1 && j < n2) 
{ 
		
   if (L[i] <= R[j]) 
    { 
      a[k] = L[i]; 
      i++; 
    }    
		
   else
		
   { 
			
    a[k] = R[j]; 
			
     j++; 
		
   }    
		
k++; 
	
} 

	
	
while (i < n1) 
	
{ 
		
a[k] = L[i]; 
		
i++; 
k++; 
} 

		
while (j < n2) 
	
{ 
		
a[k] = R[j]; 
		
j++; 
		
k++; 
	
}

output(a,n); 
/*for(int b=0;b<n;b++)
printf("%d\n",a[b]);*/
 
}


void output(int a[], int n);   


/*void output(int a[], int n) 
{ 
    int i; 
    for (i=0; i < n+1;i++) 
        printf("%d ", a[i]);
}*/


void merge(int a[], int l, int n) 
{ 
n=n-1;
if (l < n) 
{ 

int m = l+(n-l)/2; 

mergesort(a, l, m, n); 
//printArray(a, n); 
 
}

}
void output(int a[], int n)
{
    int i;
    for (i=0; i < n+1;i++)
        printf("%d ", a[i]);
}


