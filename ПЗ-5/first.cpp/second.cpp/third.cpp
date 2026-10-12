


//с помощью do while
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int st[1001], top = 0, ans = 0;

    int i = 0;
    if (n > 0) {              // do-while выполняется минимум 1 раз, поэтому проверяем n
        do {
            int x;
            cin >> x;
            if (top > 0 && st[top - 1] == x) {
                top--;
                ans += 2;
            } else {
                st[top++] = x;
            }
            i++;
        } while (i < n);
    }
    cout << ans;
    return 0;
}
