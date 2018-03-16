#include<stdio.h>

int partition(int a[],int low,int high) {
	int pivot=a[high];
	int index=low,temp;
	for(int i=low;i<high;i++){
		if(a[i]<=pivot) {
			temp=a[i];
			a[i]=a[index];
			a[index]=temp;
			index++;
		}
	}
	temp=a[index];
	a[index]=a[high];
	a[high]=temp;
	return index;
}

void quicksort(int a[],int low,int high) {
	if(low<high) {
		int index=partition(a,low,high);
		quicksort(a,low,index-1);
		quicksort(a,index+1,high);
	}
}

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n];
	int i,j,temp;
	printf("Enter array: ");
	for(i=0;i<n;i++) 
		scanf("%d",&a[i]); 

	int low=0,high=n-1;
	quicksort(a,low,high);
	
	printf("\nSorted array is:\n");
	for(i=0;i<n;i++) 
		printf("%d\t",a[i]);
}
