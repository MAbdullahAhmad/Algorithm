#include<iostream>
using namespace std;

int main(){
  int arr[10], n;
  int i;

  cout << "Enter 10 Numbers : \n";
  for(i=0; i<10; i++){
    cout << "Number-" << i+1 << ": ";
    cin >> arr[i];
  }

  cout << "Enter Number to Search: ";
  cin >> n;


  int start = 0;
  int end = 9;
  int pos;

  // Iterative Search
  while(start <= end && n >= arr[start] && n <= arr[end]){
    pos = start + (n - arr[start]) * (end - start) / (arr[end] - arr[start]);

    if(arr[pos] > n){
      end = pos - 1;
    }
    else if(arr[pos] < n){
      start = pos + 1;
    } else {
      cout << "Number found at index " << pos << '\n';
      break;
    }
  }
  if(start > end || n < arr[start] || n > arr[end]){
    cout << "Not Found!\n";
  }

  // if((i=interpolation_search(arr, 0, 9, n)) > -1) cout << "Number found at index " << i << '\n';
  else cout << "Number not found!\n";

  return 0;
}