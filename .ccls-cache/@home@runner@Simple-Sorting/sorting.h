#include <iomanip>

inline void display(int *a, int n){
  int i;
  for(i=0;i<n;i++){
    cout<<setw(5)<<a[i];
  }
  cout<<endl;

}

// selection sort function module in C 
void selectionSort(int data[], int length) { 
	int i, j, m, mi; 

  
  m=data[0];// m is the smallest number
	for (i = 0; i < length - 1; i++) 
	{ 
	   /* find the minimum */
           if(m>data[i]){
             m=data[i];
  }
	  
     display(data,length);
     
	} 
} 



void insertion(int a[],int n){
 int i,j;
  int new_number= 2; //decendingly
  int temp;
 

}

inline void swap(int &a,int &b){
 int temp;
  temp=a;
  a=b;
  b=temp;
  
}
//Break until 11:15
void bubbleSort(int *a,int n){

int i,j;
int sorted;
for(j=0;j<n-1;j++){
  sorted=0;
 for(i=0;i<n-1-j;i++){
   if(a[i] >a[i+1] ) {
     swap(a[i],a[i+1]);
    sorted=1;
   }
   display(a,n);
 }  
  
  cout<<"=============="<<endl;
   if(sorted==0) break;

}
}