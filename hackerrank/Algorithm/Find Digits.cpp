#include<iostream>
#include<string>
#include<sstream>
using namespace std;

template <typename T>
string NumberToString ( T Number )
{
	stringstream ss;
	ss << Number;
	return ss.str();
}

int main(){
	int t;
	cin>>t;
	long long int n;
	while(t--){
		cin>>n;
		string st=NumberToString(n);
		int temp,count=0;
		for(int i=0;i<st.size();i++){
			temp=int(st[i])-int('0');
			if(temp !=0 && n%temp==0){
				count++;
			}
		}
		cout<<count<<endl;
	}
	
}
