#include<iostream>
#include<unordered_map>

using namespace std;

template<class T>
void print_snap(T map){
  cout << "SNAP = [" << map["open"] << " -> " << map["close"] << " {^" << map["high"] << " /" << map["low"] << "}] V:" << map["volume"] << "\n";
}

int main(){
  unordered_map<string, float> stock_snap;

  stock_snap["low"] = 9.12;
  stock_snap["high"] = 39.22;
  stock_snap["volume"] = 93.52;
  stock_snap["open"] = 99.22;
  stock_snap["close"] = 29.23;

  print_snap(stock_snap);

  return 0;
}