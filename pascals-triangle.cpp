/*this is the pattern for pascals triangle
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
*/
#include <iostream>
using namespace std;

int fact(int num) //function begins after calling it
{
    int factorial = 1;
    for (int i = 2; i <= num; i++) //loop for calculating the factorial
    {
        factorial *= i;
    }
    return factorial; //returning the factorial
}

int main()
{
    int n,ans;
    cout << "enter the number of raws" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            
            cout << fact(i)/(fact(i-j)*fact(j))<<" ";//in pascals triangle there is a logic of iCj print
        }
        cout<<endl;
    }
    return 0;
}
