#include<stdio.h>
#include<string.h>

/************************** FUnction Prototype ***********************/
int isPalindrome_num(long long int n); //check a number is palindrome or not
int isPalindrome_str(char *arr,int len); //check a string is palindrome or not

/*************************Function DEfination ***********************/


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

int isPalindrome_str(char *arr,int len){
	/*
	    **** <string.h>
	    Check String is palindrom or not
	    """
	      isPalindrom_str( arr,length of string not index of last char)
		    return 1 if palindrome
		    return 0 if not palindrome   
	    """
	*/
	int i,flag=1;
	len=len-1;
	for(i=0;i<len/2;i++){
		if(arr[i]!=arr[len-i]){
			flag=0;
			break;
		}
	}
	return flag;
}
