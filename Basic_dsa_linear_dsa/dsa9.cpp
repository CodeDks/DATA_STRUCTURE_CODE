// Code to calculate a to the power b..(a^b)

// Method I (without using function)

#include <iostream>
using namespace std;
/* int main()
{
    int a, b;
    int ans = 1;
    cout << "Enter the value of 'a' and 'b' : ";
    cin >> a >> b;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    cout << ans << endl;
}
*/

// Method II ( Using function )

int power(int, int);  // This is function prototyping..

int main()
{
    int a, b;
    int answer;
    cout << "Enter the value of 'a' and 'b' : ";
    cin >> a >> b;
    answer = power(a, b);
    cout << "The answer is : " << answer << endl;
}

int power(int a, int b)
{
    int ans = 1;   
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}