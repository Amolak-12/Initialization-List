#include <iostream>
using namespace std;

class abc {
  public:
    const int x;
    const int* y;
    const int z;

// //Way to constructor by old Style
//  abc(int _x, int _y, int _z = 0 ){ // Z variable is a default argument
//    x = _x;
//    y = new int(_y);
//    z = _z;

//    }

//Way to constructor by new Style 
// Initialization list
//can  reinitialize const variables
 abc(int _x, int _y, int _z = 0 ):x(_x), y(new int(_y)), z(_z){}
};
int main() {

  abc a(10,20,30);
}