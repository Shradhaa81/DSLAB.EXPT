#include <stdio.h> 
void inser on(int a[],int n){ 
    int i,j,key; 
    for(i=1;i<n;i++){ 
        key=a[i]; 
        j=i-1; 
        while(j>=0 && a[j]>key){ 
            a[j+1]=a[j]; 
            j--; 
        } 
        a[j+1]=key; 
    } 
} 
int main(){ 
    int n,a[100]; 
    scanf("%d",&n); 
    for(int i=0;i<n;i++) scanf("%d",&a[i]); 
    inser on(a,n); 
    return 0; 
} 
 
