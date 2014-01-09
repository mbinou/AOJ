#include<iostream>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define N 100
using namespace std;

struct Card{
  char suit;
  char value;
};

void trace (Card C[], int n) {
  int i;
  rep(i,n) {
    cout << C[i].suit << C[i].value;
    if (i < n-1) cout << " ";
  }
  cout << endl;
}

void swap (Card* C1, Card* C2) {
  Card tmp;
  tmp = *C1;
  *C1 = *C2;
  *C2 = tmp;
}

void BubbleSort (Card C[], int n) {
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = n - 1; j > i; j--) {
      if (C[j].value < C[j-1].value) swap(C[j],C[j-1]);
    }
  }
}

void SelectionSort (Card C[], int n) {
  int i, j, mini;
  for (i = 0; i < n; i++) {
    mini = i;
    for (j = i; j < n; j++) {
      if (C[j].value < C[mini].value) mini = j;
    }
    swap(C[i], C[mini]);
  }
}

bool IsStable (Card C1[], Card C2[], int n) {
  int i;
  rep(i,n) if (C1[i].suit != C2[i].suit) return false;
  return true;
}
  

int main () {
  Card C1[N],C2[N];
  int n,i;
  string card;
  
  // input
  cin >> n;
  rep(i,n) {
    cin >> card;
    C1[i].suit = card[0];
    C1[i].value = card[1];
  }
  rep(i,n) C2[i] = C1[i];

  // sort
  BubbleSort(C1,n);
  SelectionSort(C2,n);

  // output
  trace(C1,n);
  cout << "Stable" << endl;
  trace(C2,n);
  (IsStable(C1, C2, n))? cout << "Stable" : cout << "Not stable";
  cout << endl;
  return 0;
}
