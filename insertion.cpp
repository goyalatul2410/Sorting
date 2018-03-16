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
	for(i=1;i<n;i++) {
		temp=a[i];
		for(j=i-1;j>=0;j--) {
			if(temp<a[j]) 
				a[j+1]=a[j];
			else
				break;
		}
		a[j+1]=temp;
	}

	printf("\nSorted array is:\n");
	for(i=0;i<n;i++) 
		printf("%d\t",a[i]);

}