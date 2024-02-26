#define INPUT_FROM_TERMINAL 0

#include<iostream>
using namespace std;

/**
 * @param a a number
 * @param b nother number
 * 
 * @returns true if a > b else returns false
*/
int max(int a, int b){
  return a > b ? a : b;
}


/**
 * @param W: maxmimum weight that can be assigned
 * @param weights array of weights for items (size = n)
 * @param profits array of profits for items (size = n)
 * @param n number of items
 * 
 * @returns maximum profit we can gain
*/
int knapstack(int W, int* weights, int* profits, int n){
  // zero profit if no items or capacity remains 
  if(n == 0 || W == 0)
    return 0;

  // if current item weight is more than capacity, skip it
  if(weights[n-1] > W)
    return knapstack(W, weights, profits, n - 1);


  return max( // return max of
    profits[n-1] + knapstack(W - weights[n - 1], weights, profits, n - 1), // current item included
    knapstack(W, weights, profits, n - 1) // current item excluded
  );
}

/**
 * @var n: total number of items
 * @var weights: array of weights for items (size = n)
 * @var profits: array of profits for items (size = n)
 * @var W: maxmimum weight that can be assigned
*/
int main(){
  int n;
  int *weights;
  int *profits;
  int W;


  if(INPUT_FROM_TERMINAL) {cout << "Enter Count of Items: "; cin >> n;}
  else                     n = 5;

  weights = new int[n];
  profits = new int[n];

  if(INPUT_FROM_TERMINAL) {cout << "Enter Max Weight of Bag: "; cin >> W;}
  else                     W = 5;

  if(INPUT_FROM_TERMINAL) {
    cout << "Enter Weights and Profits:\n\n";
    for(int i=0; i<n; i++){
      cout << "\tItem-" << i+1 << '\n';
      cout << "\t\tWeight = "; cin >> weights[i];
      cout << "\t\tProfit = "; cin >> profits[i];
      cout << "\n\n";
    }
  }
  else {
    weights[0] = 2; profits[0] = 1;
    weights[1] = 1; profits[1] = 5;
    weights[2] = 5; profits[2] = 9;
    weights[3] = 4; profits[3] = 7;
    weights[4] = 2; profits[4] = 2;
  }

  cout << "Max Profit = " << knapstack(W, weights, profits, n) << '\n';
}