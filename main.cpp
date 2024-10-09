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

ll n;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;
  ll ans = 0;
  if (n >= 100) {
    const auto& q = n / 100;
    ans += q;
    n -= q * 100;
  }
  if (n >= 20) {
    const auto& q = n / 20;
    ans += q;
    n -= q * 20;
  }
  if (n >= 10) {
    const auto& q = n / 10;
    ans += q;
    n -= q * 10;
  }
  if (n >= 5) {
    const auto& q = n / 5;
    ans += q;
    n -= q * 5;
  }
  ans += n;

  cout << ans;

  return 0;
}