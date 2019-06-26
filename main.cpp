#include <iostream>
#include <queue>
#include <vector>
#include <stack>
#include <map>
#include <queue>
#include <climits>

using namespace std;

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto x = [](){ios_base::sync_with_stdio(false); cin.tie(NULL); return NULL;}();

class Solution {
public:

    int char2Number(char c) {
      return c - 'A' + 1;
    }

    int titleToNumber(string s) {
        unsigned long multiplier = 1;
        int total = 0;
        for (int i = s.size() - 1; i >= 0; --i) {
          total += multiplier * char2Number(s[i]);
          multiplier *= 26;
        }
        return total;
    }
};

void test1() {
  Solution S;
  cout << "1?" << S.titleToNumber("A") << endl;
  cout << "27?" << S.titleToNumber("AA") << endl;
  cout << "28?" << S.titleToNumber("AB") << endl;
  cout << "701?" << S.titleToNumber("ZY") << endl;
}

void test2() {
  Solution S;
}

void test3() {
  Solution S;
}

int main() {
  test1();
  test2();
  test3();
  cout << "Done!" << endl;
  
  return 0;
}