#include<iostream>
#include<string>
using namespace std;

void print(char a,int n){
	for(int i=0;i<n;i++){
		cout<<a;
	}
}
int main(){
	int t;
	cin>>t;
	int n;
	while(t--){
		cin>>n;
		if(n%3==0){
			print('5',n);
			cout<<endl;
		}
		else if(n>=8){
			int b=n%3;
			int a=n-b;
			while(a>=0){
				a=a-3;
				b=b+3;
				if(b%5==0)
					break;
			}
			print('5',a);
			print('3',b);
			cout<<endl;
		}
		else if(n%5==0){
				print('3',n);
				cout<<endl;
			}
			else
				cout<<-1<<endl;
	}
}
