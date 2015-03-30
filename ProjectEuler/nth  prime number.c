#include<stdio.h>
#include<math.h>

int isPrime(int n){
	/*
	 *****<math.h>
	 this Function take n is input
	 & return 1 if n is prime else return 0
	*/
        int i,sqrt_n,flag=1;


		sqrt_n=(int)sqrt(n); //squire root of n
		sqrt_n++;

        if(n<2){
                return 0; //return False
        }
        else{
                if(n==2){
                        return 1; //return True
                }
                else if(n%2==0)
                        return 0;
        }
        for(i=3;i<sqrt_n;i=i+2){
                if(n%i==0){
                        flag=0;
                        break;
                }
        }
        return flag; //return value of flag 0(false) or 1(true)
}

int main(){
	int count=1; //we include 2 as first prime number
	int i,n;
	printf("\nEnter Value of n :");
	scanf("%d",&n);

	i=3;//avoid checking even numbers by incrementing index by 2
	    //after each itteration
	while(count<n)
	{
		 if(isPrime(i)){
		 	count++;
		 }
		 i=i+2;
	}
    printf("\nnth prime number is %d",i-2);
}
