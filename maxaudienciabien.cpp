#include <iostream>
#include <string>
#include <vector>
using namespace std;
int mejor=0, sum =0;
for (int k = 0; k < n; k++) {
    sum = max(array[k], sum+array[k]);
    best = max(mejor,sum);
}
cout << mejor << "\n";