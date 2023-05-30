#include <iomanip>
#include <iostream>
using namespace std;

inline void swap(int &a, int &b) {
  int temp;
  temp = a;
  a = b;
  b = temp;
}

inline void display(int a[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    cout << setw(5) << a[i];
  }
  cout << endl;
}


void selectionSort(int array[], int n) {
  int i, j, minIndex, minValue, count = 0;
  cout << "===== Start Selection Sort =====" << endl;
  for (i = 0; i < n - 1; i++) {
    minIndex = i;
    for (j = i + 1; j < n; j++) {
      if (array[j] < array[minIndex]) {
        minIndex = j;
        count++;
      }
    }
    swap(array[minIndex], array[i]);
    display(array, n);
  }
  cout<<"count: "<<count<<endl;
  cout << "===== END =====" << endl;
  cout << endl;
}


void insertion(int a[], int n) {
  int i, j, count=0;
  cout << "===== Start Insertion Sort =====" << endl;
  for (i = 1; i < n; i++) {
    int currentValue = a[i];
    for (j = i; j >= 0; j--) {
      int previousValue = a[j - 1];
      if (previousValue > currentValue) {
        a[j] = previousValue;
        a[j - 1] = currentValue;
        display(a, n);
        count++;
      } else {
        display(a, n);
        break;
      }
    }
  }
  cout<<"count: "<<count<<endl;
  cout << "===== END =====" << endl;
  cout << endl;
}


void bubbleSort(int array[], int n) {
  int i, j, count=0;
  int isSorted;
  cout << "===== Start Bubble Sort =====" << endl;
  for (j = 0; j < n - 1; j++) {
    isSorted = 0;
    for (i = 0; i < n - j - 1; i++) {
      if (array[i] > array[i + 1]) {
        swap(array[i], array[i + 1]);
        count++;
        isSorted = 1;
      }
      display(array, n);
    }
    if (isSorted == 0)
      break;
      cout << endl;
  }
  cout<<"count: "<<count<<endl;
  cout << "===== END =====" << endl;
  cout << endl;
}