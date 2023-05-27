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

// selection sort function module in C
void selectionSort(int data[], int length) {
  int i, j, m, mi;
  for (i = 0; i < length - 1; i++) {
    mi = i;
    for (int j = i + 1; j < length; j++) {
      if (data[j] < data[mi]) {
        mi = j;
      }
    }
    swap(data[mi], data[i]);
    display(data, length);
    cout << "\n";
  }
  /*cout<<"\n";
  display(data, length);*/
}

void insertion(int a[], int n) {
  int i, j;
  cout << "===== Start Insertion Sort =====" << endl;
  for (i = 1; i < n; i++) {
    int currentValue = a[i];
    for (j = i; j >= 0; j--) {
      int previousValue = a[j - 1];
      if (previousValue > currentValue) {
        // Swap previous and current (move up)
        a[j] = previousValue;
        a[j - 1] = currentValue;
        display(a, n);
      } else {
        display(a, n);
        break;
      }
    }
  }
  cout << "===== END =====" << endl;
}

void bubbleSort(int a[], int n) {
  int i, j;
  int sorted;
  // how may pair to compare?
  for (j = 0; j < n - 1; j++) {
    sorted = 0;
    for (i = 0; i < n - j - 1; i++) {
      if (a[i] > a[i + 1]) {
        swap(a[i], a[i + 1]);
        sorted = 1;
      }
      display(a, n);
    }
    if (sorted == 0)
      break;
    cout << endl;
    display(a, n);
  }
}