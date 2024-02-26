#define INPUT_FROM_TERMINAL 0

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

typedef pair<vector<int>, int> _pair;

/**
 * @param a a number
 * @param b nother number
 * 
 * @returns true if a > b else returns false
*/
_pair max__pair(_pair a, _pair b){
  return a.second > b.second ? a : b;
}

_pair add_profit(_pair p, int profit){
  return _pair(p.first, p.second+profit);
}


/**
 * @param W: maxmimum weight that can be assigned
 * @param weights array of weights for items (size = n)
 * @param profits array of profits for items (size = n)
 * @param n number of items
 * 
 * @returns maximum profit we can gain
*/
_pair knapstack(int W, int* weights, int* profits, int n, vector<int> items){
  vector<int> prev_items(items);
  items.push_back(n);

  // zero profit if no items or capacity remains 
  if(n == 0 || W == 0)
    return _pair(prev_items, 0);

  // if current item weight is more than capacity, skip it
  if(weights[n-1] > W)
    return knapstack(W, weights, profits, n - 1, prev_items);


  return max__pair( // return max of
    // current item included
    add_profit(
      knapstack(W - weights[n - 1], weights, profits, n - 1, items),
      profits[n-1]
    ),
    
    // current item excluded
    knapstack(W, weights, profits, n - 1, prev_items)
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
    /* #1 */ weights[0] = 5; profits[0] = 1;
    /* #2 */ weights[1] = 4; profits[1] = 5;
    /* #3 */ weights[2] = 3; profits[2] = 9;
    /* #4 */ weights[3] = 2; profits[3] = 7;
    /* #5 */ weights[4] = 1; profits[4] = 2;
  }

  _pair result = knapstack(W, weights, profits, n, vector<int>());
  cout << "Max Profit = " << result.second << '\n';

  cout << "Max Profit Items = ";
  for(const int &item: result.first){
    cout << item << ", ";
  }
  cout << "\b\b.\n";
}