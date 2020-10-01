#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, i, j, ans = 1;
  cin >> n;
  vector<int> v1(n), v2(n, 1);
  for (i = 0; i < n; i++)
  {
    cin >> v1[i];
  }
  for (i = 1; i < n; i++)
  {
    for (j = 0; j < i; j++)
    {
      if (v1[i] != v1[j] && (v1[j] > max(v1[j - 1], v1[j + 1])) || (v1[j] < min(v1[j - 1], v1[j + 1])))
      {
        v2[i] = max(v2[i], v2[i] + 1);
      }
    }
  }
  cout << *max_element(v2.begin(), v2.end());
}