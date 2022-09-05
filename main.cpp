#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, a, b;
  cin >> n >> a >> b;
  // to find the position he is at we can take both a + 1 and n - b to find his position
  int result = n - max(a+1, n-b) + 1;
  cout << result << endl;
