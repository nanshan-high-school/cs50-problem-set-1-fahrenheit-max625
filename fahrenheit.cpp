#include <iostream>
using namespace std;

int main() {
    cout << "請輸入你的攝氏溫度?";
    float degree;
    cin >> degree;

    float f;
    f = (degree * 9 / 5) + 32;
    cout << f ;
}

