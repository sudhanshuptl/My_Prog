#include<iostream>
using namespace std;

int gcd(int a,int b){
	if(a==0 || b==0)
		return 1;
	if(a<b)
		return gcd(b,a);
	if(a%b==0)
		return b;
	else
		return gcd(b,a%b);
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b);
}
