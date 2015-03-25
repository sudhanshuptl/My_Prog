/*
830297 is divisible by 13 so now you'll test with 830297 / 13 = 63869
63869 is still divisible by 13, you are at 4913
4913 doesn't divide by 13, next prime is 17 which divides 4913 to get 289
289 is still a multiple of 17,  :> 289/17 =17 Now you have 17 which is the divisor and stop.
*/
//https://beginer2cs.blogspot.com
//C Program to find Largest Prime Factor of given Number
#include<stdio.h>
#include<math.h>
int isPrime(int n){
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

main(){
    long long int n;
    long int i;
    printf("Enter Number : ");
    scanf("%d",&n);
    i=2;
    while(1){ //While True
    	if(isPrime(i)){
    		while(1){
    			if(n%i==0 && n>i)
    				n=n/i;
    			else
    			   i++;
    			   break;
			}
		}
		else 
		   i++;
		if(n==i)
		   break;
	}
	printf("largest Prime Factor = %d\n ",i);
}
