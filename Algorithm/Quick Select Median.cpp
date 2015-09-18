//Quick Select Algorithm
//Using Quick Select to find median i.e n/2 smallest element
//or n/2th largest element
#include<iostream>
#include<vector>
using namespace std;

int QuickSelect(vector<int> arr,int p,int r,int k);
int partition(vector<int> arr,int p,int r,int pivotIndex);

int main(){
	int n;
	cout<<"Enter Size of list :";
	cin>>n;
	
	vector<int> arr;
	int key;
	for(int i=0;i<n;i++){
		cin>>key;
		arr.push_back(key);
	}
	cout<<"Median : "<<QuickSelect(arr,0,n-1,n/2);
}

int QuickSelect(vector<int> arr,int p,int r,int k){
	if(p==r)
		return arr[p];
	int pivoteIndex;
	while(1){
		pivoteIndex=(p+r)/2;
		pivoteIndex=partition(arr,p,r,pivoteIndex);
		if(pivoteIndex==k)
			return arr[k];
		else if(pivoteIndex>k)
				r=pivoteIndex-1;
			 else
			 	p=pivoteIndex+1;
				
	}
}
int partition(vector<int> arr,int p,int r,int pivotIndex){
	//swap value of pivote at end i.e at r index
	int temp;
	int pivot=arr[pivotIndex];
	temp=arr[pivotIndex];
	arr[pivotIndex]=arr[r];
	arr[r]=temp;
	 int i=p-1;
	for(int j=p;j<r;++j){
		if(arr[j]<=pivot){
			i++;
			//swap arr[i] & arr[j]
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	//swap i+1 index with r'th index
	i++;
	temp=arr[r];
	arr[r]=arr[i];
	arr[i]=temp;
	return i;
	
}
