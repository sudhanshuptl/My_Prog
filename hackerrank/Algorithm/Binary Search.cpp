#include<iostream>
#include<new>
using namespace std;

int IndexBinary(int arr[],int low,int hi,int key){
	if(low>hi)
		return -1;
	else{
		int mid = (low+hi)/2;
		if(arr[mid]==key)// key found
			return mid;
		else{
			if(key<arr[mid])
				return IndexBinary(arr,low,mid-1,key);
			else
				return IndexBinary(arr,mid+1,hi,key);
		}
	}
}
int main(){
	int *arr;
	int V;
	int n;
	cin>>V;
	cin>>n;
	arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}	
	//Now find index using binary search
	cout<<IndexBinary(arr,0,n-1,V)<<endl;
	return 0; 
}
