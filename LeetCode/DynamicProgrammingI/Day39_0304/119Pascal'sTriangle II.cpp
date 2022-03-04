//119. Pascal's Triangle II

//(smarter ...)
class Solution {
 public:
  vector<int> getRow(int rowIndex) {
    vector<int> ans = vector<int>(rowIndex + 1, 1);

    for (int i = 1; i < rowIndex; i++)
      for (int j = i; j > 0; j--)
        ans[j] += ans[j - 1];  // ans[j] = ans[j-1] + ans[j]

    return ans;
  }
};
//DP (offficial solution)
class Solution {
  unordered_map<size_t, int> cache;

  // use a better hashing function like `boost::hash_combine` in the real world.
  int key(int i, int j) const {
    size_t hash_i = hash<int>{}(i), hash_j = hash<int>{}(j);
    int hashed = (int)(hash_i ^ (hash_i >> 32));
    return (hashed << 5) - 1 + (int)(hash_j ^ (hash_j >> 32));
  }

 public:
  int getNum(int row, int col) {
    auto rowCol = key(row, col);

    if (cache.count(rowCol) > 0)
      return cache[rowCol];

    if (row == 0 || col == 0 || row == col)
      return (cache[rowCol] = 1);

    return (cache[rowCol] = getNum(row - 1, col - 1) + getNum(row - 1, col));
  }

  vector<int> getRow(int rowIndex) {
    vector<int> ans;

    for (int i = 0; i <= rowIndex; i++)
      ans.push_back(getNum(rowIndex, i));

    return ans;
  }
};

//exceed time limit
class Solution {
public:
  int getNum(int row, int col) {
    if (row == 0 || col == 0 || row == col)
      return 1;

    return getNum(row - 1, col - 1) + getNum(row - 1, col);
  }

  vector<int> getRow(int rowIndex) {
    vector<int> ans;

    for (int i = 0; i <= rowIndex; i++)
      ans.push_back(getNum(rowIndex, i));

    return ans;
  }
};