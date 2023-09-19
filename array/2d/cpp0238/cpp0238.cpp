#include <bits/stdc++.h>
using namespace std;

int dx[8] = {-1, 0, 1, 0};
int dy[8] = {0, -1, 0, 1};
int visited[25][25];
char a[25][25];
int n, m;

void dfs(int i, int j) {
  visited[i][j] = 1;
  for (int k = 0; k < 4; k++) {
    int i1 = i + dx[k];
    int j1 = j + dy[k];
    if (i1 < n && j1 < m && i1 >= 0 && j1 >= 0 && visited[i1][j1] == 0 &&
        a[i1][j1] == 'O') {
      dfs(i1, j1);
    }
  }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
  int t;
  cin >> t;
  while (t--) {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> a[i][j];
      }
    }
    memset(visited, 0, sizeof(visited));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (visited[i][j] == 0 && a[i][j] == 'O' &&
            (i == 0 || j == 0 || i == n - 1 || j == m - 1)) {
          dfs(i, j);
        }
      }
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (a[i][j] == 'O') {
          if (visited[i][j] == 0) {
            a[i][j] = 'X';
          }
        }
      }
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cout << a[i][j] << " ";
      }
      cout << endl;
    }
  }
  return 0;
}
