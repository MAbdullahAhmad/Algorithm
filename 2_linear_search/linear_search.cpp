#include<iostream>
using namespace std;

int main(){
  int arr[10], i, n, counter=0;

  cout << "Enter 10 Numbers in Followings\n";
  for(i=0; i<10; i++){
    cout << "Number-" << i + 1 << ": ";
    cin >> arr[i];
  }

  cout << "Enter Number to Search: ";
  cin >> n;

  for(i=0; i<10; i++){
    counter++;
    if(arr[i] == n){
      cout << "Number Found at index " << i << "\n";
      break;
    } else if(i==9){
      cout << "Number Not found in array!\n";
    }
  }

  cout << "Number of Iterations: " << counter << '\n';
  return 0;
}