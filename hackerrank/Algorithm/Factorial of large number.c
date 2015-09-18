 #include<stdio.h>
#include<stdlib.h>
void factorial(int num)
{
    int temp,i,k=0,a[200]={0};
     a[0]=num--;  
 while(num){
    for(i=0;i<=k;i++)
/* multiply each element of array with num */
    a[i]*=num;  
/* make each element of array as a single digit */               
    for(i=0;i<=k;i++)          
     {
        temp=a[i]/10;
        a[i]=a[i]%10;
        a[i+1]=temp+a[i+1];
  /* if i=k then we have reached the last element of array so */
        if(i==k)  
        {
         temp=a[k+1];
/* we again split the a[k] into single digit and */
    while(temp>0) 
    {
      k++;
 /* remaining part is stored in next location  */
      a[k]=temp%10;
      temp=temp/10;
    }
 /* now set i=k as number of element in array is i now */
    i=k;     
    }
  }
  num--;
 }
 for(i=k;i>=0;i--)
 printf("%d",a[i]);
}
int main()
{
 int num;
    //printf("Enter the number : ");
    scanf("%d",&num);
    factorial(num);
    return 0;
}

