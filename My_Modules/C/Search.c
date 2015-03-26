/*************************Function Protype ***********************************/

int LenearSearch(int arr[],int size,int num) //Leanear Search
int binarySearch(int* arr,int low,int high,int num) //Binary Search applicabe on sorted array



/************************************** FUnction DEF *****************************/
int LenearSearch(int arr[],int size,int num){
	/*
	   Leanear Search Algo 
	   input is arr,size of array,number to search
	   ouput is index if found else -1
	   """
	    LenearSearch(Array,sizeOfArray,num))
	   """
	*/
	int i;
	for(i=0;i<size;i++){
		if(arr[i]==num)
		    return i;  //return index
	}
	return -1;
}

int binarySearch(int* arr,int low,int high,int num){
	/*
	    """
	      binarySearch(arr,low,high,key)
	      return index if found
	      else
	      return 0
	    """
	    ** Only Aplicable on Sorted Array
	*/
    int mid;
    //termination case if not found
    if(low>high) 
        return -1;

    mid=((low+high)/2);
    //termination case if found
    if(arr[mid]==num) 
        return mid;
    //Selecting SubArray recursivily search
    if(arr[mid]<num){
		return binarySearch(arr,mid+1,high,num);
	}
	else{
	    return binarySearch(arr,low,mid-1,num);
	}
}
