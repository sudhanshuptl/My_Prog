/************************** Prototype Declaration****************************************/
int isPrime(int n)





/******************************Function DEf***********************************/
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