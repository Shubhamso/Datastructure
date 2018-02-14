class Selectionsort{

	static void print(int a[],int n){	 /*Printing of the elements*/
		for(int i=0;i<n;i++){
		System.out.print(a[i]);
	}
		}
	void sort(int a[],int n){
	int i,j,temp,min=1;
	for(i=0;i<n-1;i++){
	min=i;
	for(j=i+1;j<n;j++){
		if(a[j]<a[min]){
		min=j;	
		}	
		
	}
	temp=a[min];				/*swapping*/
	a[min]=a[i];
	a[i]=temp;	
	
	}
	}
	public static void main(String args[]){  	/*main function */
	Selectionsort s = new Selectionsort();
	int arr[]={2,4,3,5,1};
	int n=arr.length;
	//s.print(arr,n);
	System.out.println("");			/*new line*/
	s.sort(arr,n);
	s.print(arr,n);
	
	}
}




