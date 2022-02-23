#include <iostream>
using namespace std;

int main() {
    float x=0;
    float d=0.0001;
    
    cout << "podaj x" << endl;
    cin >> x;
    
    float a=1;
    do {
        a=(x/a + a)/2;
    }
    while (a- x/a > d);
    
    cout << a << endl;
    
    
    return 0;
}
