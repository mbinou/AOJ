#include <iostream>
#include <list>

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

using namespace std;



int main () {
  std::cin.tie(0); // tie
  std::ios::sync_with_stdio(false); // sync

  list<int> data;
  list<int>::iterator it;
  int key, n, i;
  string command;
  
  cin >> n;
  rep(i,n) {
    cin >> command;
    if (command == "insert") {
      cin >> key;
      data.push_front(key);
    } else if (command == "delete") {
      cin >> key;
      it = data.begin();
      while(it != data.end()) {
	if (*it == key) {
	  data.erase(it);  break;
	}
	it++;
      }
    } else if (command == "deleteFirst") {
      data.pop_front();
    } else if (command == "deleteLast") {
      data.pop_back();
    }
  }
  
  it = data.begin();
  while (it != data.end()) {
    cout << *it;
    it++;
    if (it != data.end()) cout << " ";
  }
  cout << endl;
  
  return 0;
}
  
