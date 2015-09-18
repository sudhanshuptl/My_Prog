//Find first occurence in sorted array in O(log(n))
#include<iostream>
#include<vector>
using namespace std;

int searchFirstInd(vector<int> &arr,int key,int low,int high){
	//using iterative modified binary search to find fist occurence
	int mid,ind=-1;
	while(low<=high){
		mid=(low+high)/2;
		if(arr[mid]==key){
			ind=mid;
			high=mid-1; //finding occurence of first element of key
			//low=mid+1  //finding index of last occurence of key
		}
		else if(arr[mid]<key)
			low=mid+1;
		else
			high=mid-1;
	}
	return ind;
	//return -1 if not found
}
int main(){
	vector<int> arr;
	int n;
	cout<<"Enter No of element in sorted array :";
	cin>>n;
	cout<<"Enter n Element: "<<endl;
	int key;
	for(int i=0;i<n;i++){
		cin>>key;
		arr.push_back(key);
	}
	cout<<"Enter key to Search its first occurence :";
	cin>>key;
	
	cout<<"Index of first occurence of "<<key<<" is "<<searchFirstInd(arr,key,0,n-1)<<endl;
}

