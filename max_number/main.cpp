#include <iostream>
using namespace std;
int main() {
    int Numbers[11] = {0, 60,1,5,2,5,7,9,12,15,19};
    int Max = Numbers[0];
    for (int i=0; i<11; i++)
    {
        if (Numbers[i]>Max)
        {
            Max = Numbers[i];
        }
    }
    cout << "Max: " << Max;
    return 0;
}
