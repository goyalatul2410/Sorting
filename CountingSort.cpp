#include<stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n];
	int i,j,temp;
	printf("Enter array: ");
	for(i=0;i<n;i++) 
		scanf("%d",&a[i]); 
		
	int k=0;
	for(i=0;i<n;i++) {
		if(a[i]>k)
			k=a[i];
	}
	printf("\n%d\n",k);
	
	int aux[k+1];
	
	for(i=0;i<n;i++)
		aux[i]=0;
		
	for(i=0;i<n;i++) {
		aux[a[i]]++;
	}
	for(i=0;i<k+1;i++) 
		printf("%d  ",aux[i]);
		
	j=0;
	printf("\n\nSorted arrys is: \n");	
	for(i=0;i<=k;i++) {
		int temp=aux[i];
		while(temp--) {
			a[j]=i;
			j++;
		}
	}
	
	for(i=0;i<n;i++) 
		printf("%d  ",a[i]);
	
}


