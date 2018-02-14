#include<stdio.h>



void print(int b[],int n){          //print function 
	for(int i=0;i<n;i++){
	printf("%d",b[i]);
	}	
	printf("\n");
	}
void selectionsort(int b[],int n)  //sorting function for selection sort 
	for(int i=0;i<n-1;i++)	
	{
		int min=i;
		for(int j=i+1;j<n;j++){
		if(b[j]<b[min]){
		min=j;	
		}
	int swap=b[min];
	b[min]=b[i];
	b[i]=swap;
	
		
	}
	
	}
	}

int main(){
int arr[]={4,2,3,5,1}; //selection sort
int n=5;
print(arr,n);
selectionsort(arr,n);
print(arr,n);
return 0;
}
