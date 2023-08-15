// [9663] 언어 : C++, 메모리 (KB) :  , 시간(ms) : 

#include <bits/stdc++.h>
using namespace std;

int n, cnt;
bool chk1[40], chk2[40], chk3[40]; // |, /, \

void func(int cur) {
    if (cur == n) { // 퀸을 n개 놓은 상태, 성공
        cnt++;
        return;
    }
    for (int i = 0; i < n; i++) {
        if (chk1[i] || chk2[i] || chk3[i]) { // 퀸을 배치하지 못하는 상태
            continue;
        }
        chk1[i] = 1; // y좌표 일치하는 경우 (|)
        chk2[i + cur] = 1; // x+y가 같은경우 (/)
        chk3[cur - i + n - 1] = 1; // x-y가 같은경우(\)
        func(cur + 1);
        chk1[i] = 0;
        chk2[i + cur] = 0;
        chk3[cur - i + n - 1] = 0;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    func(0);
    cout << cnt;

    return 0;
}
