#include <iostream>
#include <vector>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, t;
    cin >> n >> t;

    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    auto ok = [&](ll mid) {
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            sum += mid / a[i];
            if (sum >= t) return true;
        }
        return false;
    };

    ll l = 0, r = 1e18;
    ll ans = -1;
    while (l <= r) {
        ll mid = (l + r) / 2;

        if (ok(mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    cout << ans << "\n";

    return 0;
}
