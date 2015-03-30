#include<stdio.h>
#include<math.h>

int isPrime(int n){
	/*
	 this Function take n is input
	 & return 1 if n is prime else return 0
	*/
        int i,sqrt_n,flag=1;
        
        
		sqrt_n=sqrt(n); //squire root of n
		
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

int Power_of_prime(int n,int limit){
	int power=1,num=0;
	while(num < limit){
		num=(int)pow(n,power);
		power++;
	}
	return(power-4); 
}

int main(){
	int n;
	int i,j;
	//int lcm=1;
	scanf("Enter uper limit : %d",&n);
	
	/*Find all primes then its power & update lcm
	 lcm=lcm*prime^power */
	//treat 2 as special case read code carefully then you can understand why i did this?
	
	printf("\n***Required LCM = %d ***",Power_of_prime(2,n));
}
