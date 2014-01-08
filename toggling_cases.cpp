#include<stdio.h>
#include<cctype>

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
using namespace std;


int main () {
  char ch;

  while (1) {
    scanf("%c", &ch);

    if (ch == '\n') {
      break;
    } else if (islower(ch)) {
      printf("%c", toupper(ch));
    } else {
      printf("%c", tolower(ch));
    }
  }
  printf("\n");
  return 0;
}
