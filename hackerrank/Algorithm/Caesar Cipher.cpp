#include<iostream>
#include<string>
using namespace std;
int main(){
	int N,i,k;
	string st; //String To Encode
	string rst=""; 
	cout<<"Enter String :"<<endl; 
	cin>>st;
	cout<<"Enter Shift Key :"<<endl;
	cin>>k;
	
	//Start 
	i=0;
	k=k%26; 
	//If shift is greter than 26 then it repreat itself 
	//Just Like angle repeat after 360 degree
	int temp;
	while(i<st.size()){
		temp=int(st[i]);
		if(temp>96 && temp<123){
			if((temp+k)<123){
				temp=temp+k;
			}
			else{
				temp=96+(k-(122-temp));
			}
		}
		else if(temp>64 && temp< 91){
			if((temp+k)<91){
				temp=temp+k;
			}
			else{
				temp=64+(k-(90-temp));
			}
		}
		i++;
		rst +=char(temp);
	}
	cout<<rst<<endl;
	return 0;
}
