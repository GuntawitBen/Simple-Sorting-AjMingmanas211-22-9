#include <iostream>
using namespace std;
#include "sorting.h"

int main(int argc,char ** argv) {
 int i;
 int N=argc-1;
 int *a=new int[N];
  for(i=1;i<argc;i++)
    a[i-1]=atoi(argv[i]);


  display(a,N);
  bubbleSort(a,N); 
  //selectionSort(a,N);
  //insertion(a,N);
}
