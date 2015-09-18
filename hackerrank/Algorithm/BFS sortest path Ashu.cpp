#include<iostream>
#include<new>
#include<map>
#include<vector>
#include<deque> 

using namespace std;
typedef map< int,vector<int> > adjLisT;
int main(){
  int T,n,m;	
  cin>>T; //testcase
  while(T--){
       adjLisT mtx;
       int *flag,*cost;
       int t1,t2,s,v;
       int i,j;
  	cin>>n>>m;

  	while(m--){
  		cin>>t1>>t2; //vertex that are connected
  		t1--; //indexing accordin to array
  		t2--;
  		
  		mtx[t1].push_back(t2);
  		mtx[t2].push_back(t1);
  	
  	  }
  		cin>>s;
		s--; 
		deque<int> Q; 
		flag = new int[n];
		cost = new int[n];
		for(i=0;i<n;i++){ //initialise
			flag[i]=0;
			cost[i]=-1;
		}
		//Start algo
		cost[s]=0; //special to identify  source
		flag[s]=1; //visited 
		Q.push_back(s);//insert Source at end
		while(!Q.empty()){
			v=Q.front(); 
			Q.pop_front(); //pop from queue
			
			for(i=0;i<mtx[v].size();i++){
				if(flag[mtx[v][i]]==0){
					flag[mtx[v][i]]=1;
					cost[mtx[v][i]]=cost[v]+6;
					Q.push_back(mtx[v][i]);
				}
			}
		}
		int count;
		int temp;
		for(i=0;i<n;i++)
            if(i!=s)
			 cout<<cost[i]<<" ";
        cout<<"\n";
		}
}
