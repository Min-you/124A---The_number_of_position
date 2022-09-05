#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
  int n, a, b;
  cin >> n >> a >> b;
  //We can find his position by adding 1 to a (as he will be the next position)
  // We can also find his position by subtrating b from n (as he will be in the previous position)
  //However this will give us two different numbers
  // To tackle this we look at the test cases and we can see that the algorithm for this would be n-max(a+1,n-b)+1
  int answer = n-max(a+1,n-b)+1;
  cout << answer << endl;
}
