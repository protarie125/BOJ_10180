#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll t, n, d;
double v, f, c;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> t;
  while (0 < (t--)) {
    cin >> n >> d;
    ll ans = 0;
    while (0 < (n--)) {
      cin >> v >> f >> c;

      const auto& dist = v * (f / c);
      if (d <= dist) {
        ++ans;
      }
    }

    cout << ans << '\n';
  }

  return 0;
}