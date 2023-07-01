//3 Different way to take input using Vector
#include<bits/stdc++.h>
using namespace std;
int main(){

  //WAY 1
  vector<int>v;
  v.push_back(10);
  v.push_back(20);
  v.push_back(30);
  cout << v[0] << ' ' << v[1] << '\n';
  int sz = a.size();
  for (int i = 0; i < sz; i++) {
    cout << a[i] << ' ';
  }

  //WAY 2
  vector<int> v;
  int n; cin >> n;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    v.push_back(x);
  }
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << ' ';
  }

  //WAY3
	vector<char> v(5);
	for(int i = 0;i<5;i++){
		cin>>v[i];
	}
	for(int i = 0;i<5;i++){
		cout<<v[i];
	}
}
