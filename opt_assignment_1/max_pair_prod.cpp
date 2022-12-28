#include <iostream>
#include <vector>
#include <string>
using namespace std;

long long int MaxPairwiseProduct(const vector<long long int> &numbers)
{
    long long int max = 0, pmax, x;
    int n = numbers.size();

    for (int i = 0; i < n; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
            x = i;
        }
    }
    pmax = 0;
    for (int i = 0; i < n; i++)
    {
        if (max*numbers[i] > pmax && i != x)
            pmax = max*numbers[i];
    }
    return pmax;
}

int main(void)
{
    int n;
    cin >> n;
    vector<long long int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    cout << MaxPairwiseProduct(numbers) << '\n';

    return 0;
}
