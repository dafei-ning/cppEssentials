#include <iostream>
#include <vector>

using namespace std;

int main() {
  cout << endl;

  //创建 2 维grid，3个row，4个column，起始值为 5.
  vector<vector<int>> grid(3, vector<int>(4, 5));

  for (int i = 0; i < grid.size(); i++) {
    for (int j = 0; j < grid[i].size(); j++) {
      cout << grid[i][j] << " " << flush;
    }
    cout << endl;
  }

  return 0;
}