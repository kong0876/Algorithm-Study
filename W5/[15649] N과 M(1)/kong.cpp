// [15649] 언어 : C++, 메모리 (KB) : 2020 , 시간(ms) : 20

#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[9];
int used[9];

void func(int k) {// 백트래킹도 재귀로 구현, 현재 k개 까지의 수를 정한 상황을 가정
    if (k == m) {
        for (int i = 0; i < m; i++) {
            cout << arr[i] << '\n';
        }
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (!used[i]) {
            arr[k] = i;
            used[i] = 1;
            func(k + 1);
            used[i] = 0;
        }

    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    func(0);
    return 0;
}
