#include<stdio.h>
#include <string.h>

int BinomialCoeff(int n,int r){
	/*
	   Direct Approach
	   coeff=n!/((n-r)! * r!)
	   !-> stands for factorial
	   ie. 5!= 5*4*3*2*1
	*/
	int max(int a,int b){
		if(a>b)
		    return a;
		else
		    return b;
	}
	int min(int a,int b){
		if(a<b)
		    return a;
		else
		    return b;
	}
	
	int i,mx,mn;
	int coeff=1;
	//nC0 & nCn
	if(r==0 ||n==r)
	    return 1;
	    
	mx=max((n-r),r); //max of r & n-r
	mn=min((n-r),r); //min of r & n-r
	
	//calculating coeff=n!/mx!
	for(i=mx+1;i<=n;i++){
		coeff=coeff*i;
	}
	
	//calculate coeff=coeff/mn!
	for(i=2;i<=mn;i++){
		coeff=coeff/i;
    }
	return coeff;
}

int BinomialCoeff_Recur(int n,int r){
	/*
	  recursive Approach
	  when r=0 or r==n return 1 //base case
	  else coeff=coeff=coeff+BinomialCoeff_Recur(n-1,r)+BinomialCoeff_Recur(n-1,r-1);
	  return coeff
	*/
	int coeff=0;
	
	if(r<=0 || r==n){ //termination case
		return 1;
	}
	if(r<n ){
	     //recursive call
	    coeff=coeff+BinomialCoeff_Recur(n-1,r)+BinomialCoeff_Recur(n-1,r-1);
	}
	return coeff;
}
int BinomialCoeff_DynamicProgramming(int n,int r){
	/*
	**** this code is for C99
	******Need <string.h>
	Need To fallow bottom top approch 
	& Store value of each calcution may need in future
	*/
	int min(int a,int b){
		if(a<b)
		    return a;
		else
		    return b;
	}
	
	int mtrx[n+1][r+1];
	int i,j;
	
	if(n==r || r==0){ //Special Case
		return 1;
	}
	else if(r>n){
		return 0;
	}
	
	//This is Special Fuction Supported in C99
	memset(mtrx,0,sizeof(mtrx)); //now for all i,y mtrx[i][j]=0
	
	//Calculation for binomial coefficient
	for(i=0;i<=n;i++){
		for(j=0;j<=min(i,r);j++){
			if(j==0 || j==i)
			    mtrx[i][j]=1;
			else
			    mtrx[i][j]=mtrx[i-1][j-1]+mtrx[i-1][j];
		}
	}
	return mtrx[n][r];
}

int main()
{
  int n=5,r=3;
  printf("==> %d\n",BinomialCoeff_DynamicProgramming(n,r));
  printf("==> %d\n",BinomialCoeff_Recur(n,r));
  printf("==> %d\n",BinomialCoeff(n,r));
  return 0;
}
