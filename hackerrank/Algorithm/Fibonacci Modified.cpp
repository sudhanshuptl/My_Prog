//Tn=(Tn-1)^2 + (Tn-2)
#include<iostream>
using namespace std;

int main(){
	int n;
	long long int arr[30];
	cin>>arr[0]>>arr[1]>>n;
	
	for(int i=2;i<n;i++){
		arr[i]=(arr[i-1]*arr[i-1])+arr[i-2];
	}
	cout<<arr[n-1]<<endl;
	return 0;
	
}
