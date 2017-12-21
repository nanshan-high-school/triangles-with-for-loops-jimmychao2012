\\******
#include <iostream>

using namespace std;

int main()
{
    int i;
    cout << "請輸入有幾行";
    cin >> i;
    
    for(int x = 0; x < i; x++){
        for(int y = 0; y <= x; y++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}