#include<stdio.h>
int main() {
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++) {
		for(int j=0;j<n-i-1;j++) {
			int temp;
			if(a[j]>a[j+1]) {
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nSorted array is: \n");
	for(i=0;i<n;i++)
		printf("%d   ",a[i]);
		
		
}
