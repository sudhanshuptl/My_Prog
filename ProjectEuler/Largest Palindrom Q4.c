#include<stdio.h>
#include<string.h>

int isPalindrome_num(long long int n){
	/*
	  ****<string.h>
	   Used to check number is palindrome or not
	   """
	     isPalindrome_num(n)
	     return 1 if palindrome
	     return 0 if not palindrome
	   """
	*/
	char a[30];
	char b[30];
	sprintf(a,"%d",n); //convert number in string & store it in array a
	strcpy(b,a); //copy b<-a
	_strrev(b);  //reverse b
	if(strcmp(a,b)==0) //compare
	    return 1;
	else
	    return 0;
}


int main(){
	int i,j,p,count=0,t1,t2;
	int max=10001; //least 4 digit number
	for(i=999;i>100;i--){
		for(j=999;j>100;j--){
			p=i*j;
			count++;
			if(p<max) //stop mult when p<max it is worthless as we want largest
			    break;
			else
			    if(isPalindrome_num(p)==1){ //if p>max & it is a palindrom
				    max=p; //update max
				    t1=i;  //just for printing result
				    t2=j;
				    break;
			       }
		}
	}
	printf("largest required palindrome =%d * %d = %d",t1,t2,max);
	printf("\nnumber of multplication required = %d",count);
	return 0;
}
