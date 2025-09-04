#include <iostream>
using namespace std;
#include <algorithm>

int main(){

    int k2,k3,k5,k6;

    cin >> k2 >> k3 >> k5 >> k6 ;

    int Number_Of_256 = min ({k2,k5,k6});
    k2 -= Number_Of_256;
    int Number_Of_32 = min (k2,k3);

    cout << (Number_Of_256*256 + Number_Of_32*32) << endl;

    return 0;
}