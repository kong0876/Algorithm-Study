// [15649] ��� : C++, �޸� (KB) : 2020 , �ð�(ms) : 20

#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[9];
int used[9];

void func(int k) {// ��Ʈ��ŷ�� ��ͷ� ����, ���� k�� ������ ���� ���� ��Ȳ�� ����
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
