#include<stdio.h>
int main()
{
	int a[] = {3,1,2,5,8};
	int i,hole,value;
	for(i=1 ; i<5 ; i++){
		 value = a[i];
		 hole = i;
		
		while(hole>0 && a[hole-1]>value){
			
			a[hole]=a[hole-1];
			hole--;
			
		}
		a[hole]=value;
	}
	printf("Sorted Arrray :\n\n");
	for(i=0 ; i<5 ; i++){
		printf("%d ",a[i]);
	}
	
	return 0;
	
}
