#include <iostream>
#include <memory>
using namespace std;

class A {
public:
    A(char** ptr) {
    
        for (int i = 0; i < 3; ++i) {
            cout << ptr[i] << endl;
        }
    }
};

int main() {
    char arr1[6] = "abcde";
    char arr2[6] = "efghi";
    char arr3[6] = "klmno";

    
    char* p[3];
    p[0] = arr1;
    p[1] = arr2;
    p[2] = arr3;

    
    char** dp = p;

    
    //for (int i = 0; i < 1; ++i) {
        auto_ptr<A> ptr(new A(dp));
    //}

    return 0;
}