#include <stdio.h>
#include <stdlib.h>
#define N 10
void traversal(int A[N], int n){
	int i;
	printf("Traversing ...\n");
	for(i=0;i<n;i++){
		printf("%d\t", A[i]);
	}
	printf("\n");
}
int merge(int A[10], int n1, int B[10], int n2){
	int C[n1+n2], i=0, j=0, k=0;
	while(i<n1 && j<n2){
		if(A[i]>B[j]){
			C[k]=B[j];
			j++;
		}else{
			C[k]=A[i];
			i++;
		}
		k++;
	}
	for(;i<n1;i++, k++){
		C[k]=A[i];
	}
	for(;j<n2;j++, k++){
		C[k]=B[j];
	}
	// traversal(C, n1+n2);
	return C;
}

int mergeSort(int A[10], int n, int start, int end){
	// traversal(A, n);
	if(end-start==1){
		return A[start];
	}else{
		return merge(mergeSort(A, n/2, 0, n/2), n/2, mergeSort(A, n/2, n/2, n), n/2);
	}
}

int main(){
	int A[10]={101, 30, 15, 14,  91, 82, 10, 12}, B[10]={10, 11, 21, 23}, C[10]={1, 12, 23, 43};
	int n=8;
	traversal(A, n);
	// printf("%d\n", linearSearch(A, n, 3));
	// printf("%d\n", binarySearch(A, 0, n, 5));
	// insert(A, n, 5, 6);
	// delete(A, n, 3);
	// bubbleSort(A, n);
	// insertionSort(A, n);
	// selectionSort(A, n);
	// merge(C, 4, B, 4);
	traversal(mergeSort(A, n, 0, n), n);
	return 0;
}
