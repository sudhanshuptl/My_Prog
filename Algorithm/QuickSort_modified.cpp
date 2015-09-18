//Quick SOrt
//Modified Partition function
#include<iostream>
#include<new>
using namespace std;

void Display(int *A,int n);
void Quick_sort(int *A,int p, int r);
int Partition(int *A,int p,int r);
void swap(int &a, int &b);

int main(){
	int size,*arr;
	cout<<"Enter Size of list to sort : ";
	cin>>size;
	
	arr=new int[size]; //allocate space
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	Quick_sort(arr,0,size-1);
	Display(arr,size);
	return 0;
}

void Quick_sort(int *A,int p, int r){
		int q;
		if(p<r){
			q=Partition(A,p,r);
	
			Quick_sort(A,p,q-1); //left Subarray
			Quick_sort(A,q+1,r); //right subarray
		}
}
int Partition(int *A,int p,int r){
	int pivote=A[r]; //we choose last element as pivote
	int i=p-1;
	int temp;
	for(int j=p;j<=r-1;j++){
		if(A[j]<=pivote){
			i++;
			//swap A[i] & A[j]
			 temp=A[i];
			 A[i]=A[j];
			 A[j]=temp;
		}
	}
	
	temp=A[i+1];
	A[i+1]=A[r];
	A[r]=temp;
	return i+1;
}
void Display(int *A,int n){
	int i;
	cout<<"Dispaly Data :";
	for(i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
	cout<<endl;
}
