// http://mrl.kr/lavida1161/
#include <iostream>
using namespace std;

int d[10000 + 1];
int coin[20];

void test_case(){
    d[0] = 1;
    int n, money;
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> coin[i];
    cin >> money;
    for (int i = 1; i <= money; ++i) d[i] = 0;
    for (int i = 0; i < n; ++i){
        for (int j = coin[i]; j <= money; ++j){
            d[j] += d[j - coin[i]];
        }
    }
    cout << d[money] << endl;
}


int main(){
    int T;
    cin >> T;
    while (T--){
        test_case();
    }
    return 0;
}