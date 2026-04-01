#include <stdio.h> 
 
void selec on(int a[],int n){ 
    int i,j,min,temp; 
    for(i=0;i<n-1;i++){ 
        min=i; 
        for(j=i+1;j<n;j++) 
            if(a[j]<a[min]) min=j; 
        temp=a[i]; a[i]=a[min]; a[min]=temp; 
    } 
} 
 
int main(){ 
    int n,a[100]; 
    scanf("%d",&n); 
    for(int i=0;i<n;i++) scanf("%d",&a[i]); 
    selec on(a,n); 
    return 0; 
} 
 
