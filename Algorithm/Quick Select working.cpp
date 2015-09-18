//Quick Selelct
//very useful for
//Find kth largest or smallest element
//find median
//O(n)

//this program demonstrate to find K'th largest from given list 
//assuming all are different numbers
#include<iostream>
#include<vector>
using namespace std;

int Quick_Select(vector<int> &arr,int p,int r,int index_of_kth_largest);
int partition(vector<int> &arr,int p,int r,int pivot);

int main(){
	vector<int> arr;
	int n,k;
	cout<<"Enter No of element (n) :";
	cin>>n;
	cout<<"Enter Value of k :"; 
	cin>>k;
	cout<<"Enter array element :"<<endl;
	int key;
	for(int i=0;i<n;i++){
		cin>>key;
		arr.push_back(key);
	}
	int kth=Quick_Select(arr,0,n-1,n-k);
	cout<<"K'th largest number is "<<kth;
	return 0;
}

int Quick_Select(vector<int> &arr,int p,int r,int index_of_kth_largest){
	//We are basically finding situation when pivote == index_of_kth_largest
	//then all elemnt less than that is on left side and all element greter than that is in right side
	if(index_of_kth_largest==r) 
		return arr[r];
	int pivotI;
	while(1){
		pivotI=(p+r)/2;
		pivotI=partition(arr,p,r,pivotI);
		if(pivotI== index_of_kth_largest)
			return arr[pivotI];
		//make sure to chhose proper sub arr where index=index_of_kth_largest reside
		if(pivotI <index_of_kth_largest) 
			p=pivotI+1;
		if(pivotI>index_of_kth_largest)
			r=pivotI-1;
	}
}
int partition(vector<int> &arr,int p,int r,int pivotIndex){
	int i=p-1;
	//swap and move pivote  data to end
	int temp;
	int pivot=arr[pivotIndex];
	temp=arr[pivotIndex];
	arr[pivotIndex]=arr[r];
	arr[r]=temp;
	
	//arrange arr such that all elemnt below pivote come to left side of pivotIndex
	//and all elemnt greter than pivot come right side of pivotIndex
	for(int j=p;j<r;j++){
		if(pivot<=arr[j]){
			i++;
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	i++;
	temp=arr[i];
	arr[i]=arr[r];
	arr[r]=temp;
	return i;
}

