#include <bits/stdc++.h>
using namespace std;
double f(double x) {
    return pow(x,5) + 3*pow(x,3) - 2;
}
int main()
{
    float lower, upper, integration = 0.0, stepSize, k;
    int i, subInterval;
    cout << "Enter lower limit of integration: ";
    cin >> lower;
    cout << "Enter upper limit of integration: ";
    cin >> upper;
    cout << "Enter number of sub intervals: ";
    cin >> subInterval;
    stepSize = (upper - lower) / subInterval;
    integration = f(lower) + f(upper);
    for (i = 1; i <= subInterval - 1; i++)
    {
        k = lower + i * stepSize;
        integration = integration + 2 * (f(k));
    }
    integration = integration * stepSize / 2;
    cout << "Required value of integration is: " << integration << endl;
    return 0;
}