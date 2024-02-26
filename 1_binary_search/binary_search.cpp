#include<iostream>
using namespace std;

// Print an Array
void print_array(int*arr, int size){
  cout << "Array: [";
  for(int i=0; i<size; i++){
    cout << arr[i] << (i < size - 1 ? ", " : "]\n");
  }
}

int main(){
  int INPUT = false; // set true to take input from stdin
  int i, n, first, middle, last;
  int arr[10] = {0, 5, 11, 20, 22, 23, 34, 58, 72, 170}; // must be sorted

  if (INPUT){
  // Input Array
  cout << "Enter 10 Nmbers in ascending order in Followings\n";
    for(i=0; i<10; i++){
      cout << "Number-" << i + 1 << ": ";
      cin >> arr[i];
    }
  }

  print_array(arr, 10);
  n = 22;

  if(INPUT){
    // Get Number to Search
    cout << "Enter Number to Search in Array: ";
    cin >> n;
  }

  // Find Index
  first=0;
  last=9;
  middle=(first+last)/2;

  int counter = 0;

  while(first<=last){
    counter++;

    if(arr[middle] < n){
      first = middle + 1;
    }
    else if(arr[middle] == n){
      cout << "Suspect Found at index " << middle << " in array.\n";
      break;
    }
    else if(arr[middle] > n){
      last = middle - 1;
    }
    middle=(first+last)/2;
  }
  if(first > last){
    cout << "Suspect 404.\n";
  }

  cout << "Number of Iterations : " << counter << "\n";

  return 0;
}