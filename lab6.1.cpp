#include <iostream>
using namespace std;

double Mas(int a[], int n)
{
    int sum = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0) 
        {  
            sum += a[i]; 
            count++;
        }
    }

    if (count == 0) 
    {
        return 0;  
    }

    return static_cast<double>(sum) / count;
}

int main() {
    int n;
    cout << "Count: ";
    cin >> n;

    int* a = new int[n];  // динамічний
    cout << "Enter elements: "; 
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    double result = Mas(a, n); 
    cout << "Half result: " << result << endl; 

    delete[] a;  
    return 0;
}
