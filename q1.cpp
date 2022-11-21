#include <iostream>
#include <math.h>

using namespace std;

int main(){
  int entry, sr, square;
  do{
    cout << "\nEnter number to see if it is a perfect square: ";
    cin >> entry;
    sr = sqrt(entry);
    square = sr*sr;
  }
  while(entry != square);
  cout << "\nCorrect!";
  return 0;
}
