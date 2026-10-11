#include <bits/stdc++.h>
using namespace std;

int sumDiv(int n) {
    int sum = 0;
    for(int i = 1; i < n; i++) {
        if(n % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int L, R;
    cout<<"Input the Range:"<<endl;
    while(cin >> L >> R) {
        if(L == 0 && R == 0) {
            break;
        }
        
        int ans = 0;
        for(int a = L; a <= R; a++) {
            int b = sumDiv(a);
            if(b > a && b <= R) {
                if(sumDiv(b) == a) {
                    ans++;
                }
            }
        }
        cout << ans << "\n";
    }
    
    return 0;
}