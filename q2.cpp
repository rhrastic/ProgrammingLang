#include <iostream>
using namespace std;


void sum_positive(int a[], int arraylength){
    int sum = 0;
    int i = 0;
    while(i<arraylength){
        int d = a[i];
        if(d>0){
            sum = sum + d;
        }
        i++;
    }
    cout << sum;
}

int main()
{
    int a[6] = {3, -3, 5, 2, -1, 2};
    int arraylength = sizeof(a)/sizeof(a[0]);
    sum_positive(a, arraylength);

    return 0;
}
