// [11729] 언어 : C++, 메모리 (KB) : 2020 , 시간(ms) : 124

#include <bits/stdc++.h>
using namespace std;

int n; // 원판의 갯수, n-1개의 원판을 원하는 곳으로 옮길 수 있다면 n개의 원판 처리 가능

// func(n)에서 단순히 func(n-1)을 호출하는 재귀로는 구현 불가 (상황마다 기둥이 다름)

void func(int a, int b, int n) { // 시작기둥과 도착기둥을 인자로 받을 수 있어야함 (n개의 원판 a기둥 -> b기둥)
    if (n == 1) {
        cout << a << ' ' << b << '\n';
        return;
    }
    func(a, 6 - a - b, n - 1); // n-1개의 원판을 a -> c
    cout << a << ' ' << b << '\n'; 
    func(6 - a - b, b, n - 1); // n-1개의 원판을 c -> a
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n;
    cout << (1 << n) - 1 << '\n';
    func(1, 3, n);

    return 0;
}
