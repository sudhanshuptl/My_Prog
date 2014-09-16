#include<iostream>
#include<string.h>
using namespace std;
main(){
	char ch,tc[]={"-1"};
	int last;
	while(1){
		cin>>ch;
		if(strcmp(ch,tc) == 0)
		     break;
		else{
			last=strlen(ch)-1
			if(ch[last]==0 || ch[last]==2 || ch[last]==4 ||ch[last]==6  || ch[last]==8  )
			    cout<<ch<<"\n"
		}
		
	}
}
