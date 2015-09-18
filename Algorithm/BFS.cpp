#include<iostream>
#include<new>
using namespace std;

int main(){
	int T,N,M;
	int **adjM,*queue,*flag,*pred;
	int i,j,bot,top;
	int t1,t2,s,v;
	cin>>T;
	
	while(T--){
		cin>>N>>M;
		//Creating 2D array
		adjM =new int*[N];
		for(i=0;i<N;++i)
			adjM[i]=new int[N];
		//Initialising array to 0
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				adjM[i][j]=0;
			}
		}
		while(M--){
			cin>>t1>>t2;
			t1--; //for making it correct according to array index
			t2--;
			adjM[t1][t2]=1;
			adjM[t2][t1]=1;
		}
		/*for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				cout<<adjM[i][j];
			}
			cout<<endl;
		}*/
		//Input Source Node
		cin>>s;
		s--; //Array indexing 
		//Queue
		queue=new int[2*N];
		bot=-1;
		top=-1;
		//flag & pred
		flag=new int[N];
		pred=new int[N];
		//intialise
		for(i=0;i<N;i++){
			flag[i]=0;
			pred[i]=-1;
		}
		pred[s]=-5;
		//start Algo
		flag[s]=1; //true
		bot++;
		top++;
		queue[top]=s; //insert source noe to queue
		while(top>=bot) //untill Queue is empty
		{
			v=queue[bot];
			bot++;
			//for all adjacent node
			for(i=0;i<N;i++){
				if(adjM[v][i]==1){
					if(flag[i]==0){
						flag[i]=1;
						pred[i]=v;
						//insert in queue
						top++;
						queue[top]=i;
					}
				}
			}
		}
		/*for(i=0;i<N;i++)
			cout<<pred[i]<<" ";
			cout<<endl;
			*/
		//Finding Sortest Path;
		int count;
		int temp;
		for(i=0;i<N;i++){
			count =0;
			if(pred[i]==-1){
				cout<<-1<<" ";
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
