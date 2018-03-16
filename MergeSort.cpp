#include<stdio.h>

void merge(int a[],int low,int mid,int high) {
	int n1,n2;
	n1=mid-low+1;
	n2=high-mid;
	
	int l[n1],r[n2];
	int i=0,j=0;
	while(i<n1 &&j<n2) {
		l[i]=a[low+i];
		r[j]=a[mid+1+j];
		i++;
		j++;
	}
	
	i=0;j=0;
	int k=low;
	while(i<n1 && j<n2) {
		if(l[i]<r[j]) {
			a[k]=l[i];
			i++;
		}
		else {
			a[k]=r[j];
			j++;
		}
		k++;
	}
	
	while(i<n1) {
		a[k]=l[i];
		i++;
		k++;
	}
	while(j<n2) {
		a[k]=r[j];
		j++;
		k++;
	}
}

/*void merge(int a[],int low,int mid, int high) {
	int p=low,q=mid+1;
	int arr[high-low+1];
	int k=0;
	for(int i=low;i<=high;i++) {
		if(p>mid) 
			arr[k++]=a[q++];
		else if(q>high)
			arr[k++]=a[p++];
		else if(a[p]<a[q])
			arr[k++]=a[p++];
		else if(a[p]>a[q])
			arr[k++]=a[q++];
	}
	for(p=0;p<k;p++) {
		a[low++]=arr[p];
	}
}*/

void mergesort(int a[],int low,int high) {
	if(low<high) {
		int mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,mid,high);
	}
	
}

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	int i,a[n];
	printf("Enter array elements: ");
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	int low=0,high=n-1;
	printf("\n\n");
	mergesort(a,low,high);
	for(int i=low;i<=high;i++)
		printf("%d   ",a[i]);
	return 0;
}
