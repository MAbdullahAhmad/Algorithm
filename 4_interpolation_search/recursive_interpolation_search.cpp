#include<iostream>
using namespace std;

// Recursive Search
int interpolation_search(int *arr, int start, int end, int num){
  if(num >= arr[end] || num <= arr[start]) return -1;

  int pos = start + (num - arr[start]) * (end - start) / (arr[end] - arr[start]);
  cout << "Pos : " << pos << " - Start : " << start << " - Num : " << num << " - End : " << end << '\n';


  if(start==num) return -1;
  if(arr[pos] < num){
    return interpolation_search(arr, pos+1, end, num);
  }
  if(arr[pos] > num){
    return interpolation_search(arr, start, pos-1, num);
  }
  return pos;
}

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

  if((i=interpolation_search(arr, 0, 9, n)) > -1) cout << "Number found at index " << i << '\n';
  else cout << "Number not found!\n";

  return 0;
}