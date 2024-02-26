#include<iostream>
using namespace std;


// Print an arr
void print_arr(int*arr, int n){
  cout << "arr(" << n << "): [";
  for(int i=0; i<n; i++){
    cout << arr[i] << (i < n - 1 ? ", " : "]\n");
  }
}

void bs(int *arr, int n) {
    for (int i=0; i<n-1; i++) {
      for (int j=0; j<n-i-1; j++) {
        if (arr[j]>arr[j+1])
          swap(arr[j], arr[j+1]);
      }
    }
}

void selectionSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int min_idx = i;
    if(i + 1 < n-1) cout << "min_idx: " << min_idx << " [j:" << i + 1 << " -> " << n-1 << "]:\n";
    for (int j = i + 1; j < n; j++) {
      cout << "\t| <"<<j<<", "<<min_idx<<">"<<" | <"<<arr[j]<<", "<<arr[min_idx]<<"> -> "<<(arr[j] < arr[min_idx] ? "T" : "F") << " | min_idx="<<min_idx<<"\n";
      if (arr[j] < arr[min_idx])
        min_idx = j;
    }

    // put min at the correct position
    swap(arr[min_idx], arr[i]);
    cout << "\n";
    print_arr(arr, n);
    cout << "\n\n";
  }
}
int main(){
  int arr[] = {92, 41, 45, 52, 14, 35, 31, 55};
  int n = sizeof(arr) / sizeof(arr[0]);

  print_arr(arr, n);
  selectionSort(arr, n);

  return 0;
}