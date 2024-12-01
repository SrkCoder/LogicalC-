#include<iostream>
using namespace std;
  void print (int arr[],int size,int high){
  	    int low=0;
  	    int mid=low+high/2;
  	    for(int i=0;i<size;i++){
  	    	  	int temp =arr[i];  
		    arr[i]=arr[high-i];
		    arr[high-i]=temp;
		    if(i==mid){
			 
			 return;
		}
	
		
  		
	  }
}	  void printt(int arr[],int size){
	  
	  for(int j=0;j<size;j++){
	  	cout<<arr[j]<<endl;
	  }
  }
int main(){
	int arr[]={1,2,3,4,5,6,7,8,99};
	int size = sizeof(arr)/sizeof(arr[0]);
	int high =size-1;
	print(arr,size,high);
	printt(arr,size);
}

