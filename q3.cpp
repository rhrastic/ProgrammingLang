#include <iostream>

using namespace std;

int main()
{
    bool prime[1000];
    std::fill_n(prime, 1000, true);
    int index = 0;
    while(index<999){
        if (index == 0 || index == 1){
            prime[index] = false;
        }
          for (int i = 2; i <= index / 2; ++i) {
              if (index % i == 0) {
                prime[index] = false;
              }
          }
        index++;      
    }
    index = 0;
    while(index<999){
        if(prime[index] == true){
            cout << index << "\n";
        }
        index++;
    }
    
}
