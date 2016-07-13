//Problem: https://code.google.com/codejam/contest/189252/dashboard#s=a&a=2

int p[200]; // prisoners to be released.
map<pair<int, int>, int> dp;

// Finds the minimum amount of gold needed, 
// if we only consider the cells from a to b, inclusive.
int Solve(int a, int b) {
  // First, look up the cache to see if the 
  // result is computed before.
  pair<int, int> pr(a, b);
  if(mp.find(pr) != mp.end()) return mp[pr];

  // Start the computation.  
  int r = 0;
  for(int i=0; i<Q; i++) {
    if(p[i] >= a && p[i] <= b) {
      int tmp = (b-a) + Solve(a, p[i]-1) + Solve(p[i]+1, b);
      if (!r || tmp<r) r=tmp;
    }
  }
  mp[pr]=r;
  return r;
}
