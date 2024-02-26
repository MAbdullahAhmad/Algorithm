#include<iostream>
#include<deque>
using namespace std;

void print_queue(deque<int> dq){
  for(auto &a: dq)
    cout << "[" << a << "]" << " -> ";
  cout << "E\n";
}

int main(){

  deque<int> funny_numbers;

  funny_numbers.push_back(9);
  funny_numbers.push_back(2);
  funny_numbers.push_back(11);

  cout << "push_back: 9,2,11:\n";
  print_queue(funny_numbers);

  funny_numbers.push_front(7);
  funny_numbers.push_front(2);
  funny_numbers.push_front(14);

  cout << "\npush_front: 7,2,14:\n";
  print_queue(funny_numbers);

  funny_numbers.pop_front();

  cout << "\npop_front():\n";
  print_queue(funny_numbers);

  funny_numbers.pop_back();

  cout << "\npop_back():\n";
  print_queue(funny_numbers);


  return 0;
}