//Quick SOrt
#include<iostream>
#include<new>
using namespace std;

void Display(int *A,int n);
void Quick_sort(int *A,int p, int r);
int Partition(int *A,int p,int r);

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
	int pivote=A[p]; //we choose first element as pivote
	int dn=p;
	int up=r;
	int temp;
	while(dn<up){
		while(A[dn]<=pivote)
			dn++;
		while(A[up]>pivote) //important point 
			up--;
		if(dn<up){
			//swap dn & up index value
			temp=A[dn];
			A[dn]=A[up];
			A[up]=temp;
		}
		else
			break;
	}
	//put pivote at middle
	temp=A[up];
	A[up]=A[p];
	A[p]=temp;
	return up; //return index of pivote
	
}
void Display(int *A,int n){
	int i;
	cout<<"Dispaly Data :";
	for(i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
	cout<<endl;
}
