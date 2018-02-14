#include<stdio.h>
void main(){

int a[]={2,4,3,1,5,6},n,i,temp;

for (i=0;i<6;i++){
printf("%d",a[i]);
}

//printf("\nEnter the no to be searched\n");
//scanf("%d",&n);


for(i=0;i<6;i++){
if(a[i]>a[i+1]){
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
}
printf("\nAfter sorting\n");
for(i=0;i<6;i++)
{
printf("%d",a[i]);
}
//return 0;
}
