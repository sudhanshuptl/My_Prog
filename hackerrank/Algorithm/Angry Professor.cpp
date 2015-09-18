#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	int N,K;
	int key;
	while(t--){
		cin>>N>>K;
		while(N--){
			cin>>key;
			if(key<=0)
				K--;
		}
		if(K<=0){
			cout<<"NO"<<endl;}
		else{
			cout<<"YES"<<endl;
		}
	}
}
