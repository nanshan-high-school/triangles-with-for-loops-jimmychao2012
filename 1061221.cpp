\\****** for的應用
#include <iostream>
using namespace std;

int main()
{
    int i, h;
    cout << "請輸入 1(直角在左下的三角形) 或 2(直角在左上的三角形) 或 3(直角在右下的三角形)\n";
    cin >> h;
    
    if(h == 1){
        cout << "請輸入有幾行";
        cin >> i;
        
        for(int x = 0; x < i; x++){
            for(int y = 0; y <= x; y++){
                cout << "*";
            }
            cout << "\n";
        }
    }
    
    else if(h == 2){
        cout << "請輸入有幾行";
        cin >> i;
    
        for(int x = i; x > 0; x--){
            for(int y = x; y > 0; y--){
                cout << "*";
            }
            cout << "\n";
        }
    }
    
    else if(h == 3){
        cout << "請輸入有幾行";
        cin >> i;
    
        for(int x = 0; x < i; x++){
            for(int y = i - x; y > 0; y--){
                cout << " ";
            }for(int y = 0; y <= x; y++){
                cout << "*";
            }
            cout << "\n";
        }
    }
    return 0;
}