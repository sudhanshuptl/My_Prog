//We gonna Use bottom up approch i.e Dynamic Programming aprroch
//http://beginer2cs.blogspot.com
//ProjectEuler Q2
#include<stdio.h>
main(){

  long int Even_sum=0;
  int arr[10000];
  int i;
  
  //base case
  arr[0]=1; //requirement of this particuler Question
  arr[1]=1;
  
  for(i=2;i<10000;i++){
       arr[i]=arr[i-1]+arr[i-2]; //store result in array
       if(arr[i]>=4000000)       //i`th index of array represent i`th fibonacci number
             break;
       else
          if(arr[i]%2==0)
             Even_sum =Even_sum+arr[i];
   }
printf("Sum of Even Fibbo Number bellow 4 millian is = %ld\n",Even_sum);
}
