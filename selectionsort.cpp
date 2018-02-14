#include<iostream>
using namespace std;


class selectionsort					//class 
	{
		public:
			int print(int a[],int n){	//To print number of elements 
			for(int i=0;i<n;i++){
			cout<<a[i]<<endl;			
			}
			}

		int sort(int b[],int n){ 		//sorting by selection sort 
				
		for (int i=0;i<n;i++)
				{
				int min;
				min =i;
					for (int j=i+1;j<n;j++){
						if(b[j]<b[min]){
						j=min;					
						}
					
				}
					int temp;
					temp=b[min];	
					b[min]=b[i];
					b[i]=temp;
				}			
		}
	


	};

int main()
{

	selectionsort o1;	
	int arr[]={2,4,5,3,1};
	int n=5;
	o1.print(arr,n);
	o1.sort(arr,n);
	o1.print(arr,n);		
return 0;
}
