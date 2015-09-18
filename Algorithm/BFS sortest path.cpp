#include<iostream>
#include<new>
#include<map>
#include<vector>
#include<deque> 

using namespace std;
typedef map< int,vector<int> > adjLisT;
int main(){
  int T;	
  cin>>T; //testcase
  while(T--){
  	int n,m;	
  	adjLisT mtx;
  	int *flag,*pred;
  	int t1,t2,s,v;
  	int i;
  	cin>>n>>m;

  	while(m--){
  		 
  		
  		cin>>t1>>t2; //vertex that are connected
  		t1--; //indexing accordin to array
  		t2--;
  		
  		mtx[t1].push_back(t2);
  		mtx[t2].push_back(t1);
  	
  	  }
  	/*
  		for(i=0;i<n;i++){
  			for(j=0;j<mtx[i].size();++j){
  				cout<<mtx[i][j]<<" ";
  			}
  			cout<<";"<<endl;
  		} */
  		
  		//Source Node Input
  		cin>>s;
		s--; //Array indexing
		deque<int> Q; //use this as queue means insert at back
		              //pop from first
		
		//flag and predecessor
		flag = new int[n];
		pred = new int[n];
		for(i=0;i<n;i++){ //initialise
			flag[i]=0;
			pred[i]=-1;
		}
		//Start algo
		pred[s]=-5; //special to identify  source
		flag[s]=1; //visited 
		Q.push_back(s);//insert Source at end
		while(!Q.empty()){
			v=Q[0]; 
			Q.pop_front(); //pop from queue
			
			for(i=0;i<mtx[v].size();i++){
				//cout<<mtx[v][i]<<" ";
				if(flag[mtx[v][i]]==0){
					flag[mtx[v][i]]=1;
					pred[mtx[v][i]]=v;
					Q.push_back(mtx[v][i]);
				}
			}
		}
		int count;
		int temp;
		for(i=0;i<n;i++){
			count=0;
			if(pred[i]==-1){
				cout<<pred[i]<<" ";
			}
			else{
				if(pred[i]!=-5)//not source node
				{
					temp=pred[i];
					while(pred[temp]!=-5){
						
						count++;
						temp=pred[temp];
					}
					cout<<6*(count+1)<<" ";
				}
			}
		}
  	
  }
  	
}
