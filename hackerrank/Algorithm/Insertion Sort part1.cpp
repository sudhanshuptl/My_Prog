#include<iostream>
#include<new>
using namespace std;

void Display(int arr[],int s){
	
	for(int i=0;i<s;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int *arr;
	int size;
	cin>>size;
	
	arr=new int[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	
	int key=arr[size-1];// droping last elemnt and put it to right place
	int flag=1;
	for(int i=size-2;i>=0;i--){
		if(key<arr[i]){
			arr[i+1]=arr[i];
			Display(arr,size);
		
		}
		else{
			arr[i+1]=key;
			Display(arr,size);
			flag=0;
			break;
		}
	}
	if(flag){
		arr[0]=key;
		Display(arr,size);
	}
}
