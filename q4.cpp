#include <iostream>
#include <cstring>

using namespace std;


void revString(char* ptr)
{
    string s = ptr;
    char revS[10];
    int length = s.length;
    int index = 0;
    while(length>=0){
        revS[index] = s[length];
        index++;
        length--;
    }
    cout << revS;
}

int main()
{
    char s[10] = "abcde"; 
    revString(s);
    return 0;
}

