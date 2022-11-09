#include <iostream>

using namespace std;

int power(int baseNum, int powNum) {
    int result = 1;
    for(int i =0; i < powNum; i++) {
        result = result * baseNum;
    }
    return result;

}

int main () 
{

    int result = power (5,3);
    cout << result;

    return 0;
}