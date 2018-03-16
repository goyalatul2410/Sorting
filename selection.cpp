#include<stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int a[n];
    int i,j,l,pos;
    printf("Enter array: ");
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>0;i--) {
    	l=a[0];
    	pos=0;
    	for(j=1;j<=i;j++) {
    		if(a[j]>l) {
    			l=a[j];
    			pos=j;
			}
		}
		a[pos]=a[i];
		a[i]=l;
	}
	printf("\nSorted array is:\n");
	for(i=0;i<n;i++) {
		printf("%d\t",a[i]);
	}
}
