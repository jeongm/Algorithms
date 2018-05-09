# Arrays
- Clear arrays : ```memset(a,0/-1,sizeof(a))```

# Print double precision
`cout << setprecision(3) << fixed << result << '%' << '\n';`
  - `fixed` declares how many `setprecision(digits)` below decimal point

# Tricky input
- Accept until new line
```
        string temp;
        getline(cin, temp);
        istringstream iss(temp);
        while (iss >> a)    coefficients.push_back(a);
```    
  - `cin.ignore()` to avoid `getline()` approaching wrong line

# Huge integer
- When working with integers beyond `int` or even `long long int` just use python or Java's BigInteger

# `tuple` and `pair`
- `pair` is basically `tuple` with two elements.
- `pair.first` and `pair.second`
- `get<i>(tuple)` 

# `vector.emplace_back()`
- No need to use temporary values

# Copy `set` to `vector`
- `std::copy(input.begin(), input.end(), std::back_inserter(output));`
- `std::vector<double> output(input.size());`
   `std::copy(input.begin(), input.end(), output.begin());`

# `Priority_queue`
- `pq.top()` by default returns biggest value in priority queue. 
- push negative values to return smallest value

# Handling inputs
- `input()`: get one line at a time
  - `a, b, c = input().split()`
  - `a, b, c = map(int, input().split())` : convert return value of `input()` to other types

- When input length is unknown
```
import sys
a = sys.stdin.read()
sys.stdout.write(a)
```

# Pythonic functions
- `for index, value in enumerate(some_list):`
