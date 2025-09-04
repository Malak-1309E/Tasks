#include <iostream>
#include <vector>
using namespace std;


void countApplesAndOranges(
    int s, int t, 
    int a, int b, 
    const vector<int> & d1, const vector<int> & d2){
        int apples = 0;
        int oranges = 0;
        for (int k = 0; k < d1.size(); k++){
            if ((a + d1[k]) >= s && (a + d1[k]) <= t){
                apples++;
            }
        }
        for (int z = 0; z < d2.size(); z++){
            if ((b + d2[z]) >= s && (b + d2[z]) <= t){
                oranges++;
            }
        }
        cout << "The number of apples fallen within the region of the house = "<< apples << endl;
        cout << "The number of oranges fallen within the region of the house = "<< oranges<<endl;
    }
int main()
{

    int s, t, a, b, m, n;
    vector<int> d1, d2;

    cout << "Enter the start point of the house" << endl;
    cin >> s;

    while (s < 1 || s > 100000)
    {
        cout << "Invalid value entered. Please try again";
        cin >> s;
    }

    cout << "Enter the end point of the house" << endl;
    cin >> t;

    while (t < s || t > 100000)
    {
        cout << "Invalid value entered. Please try again";
        cin >> t;
    }

    cout << "Enter the point at which the apple tree is located" << endl;
    cin >> a;

    while (a < 1 || a > s)
    {
        cout << "Invalid value entered. Please try again";
        cin >> a;
    }

    cout << "Enter the point at which the orange tree is located" << endl;
    cin >> b;

    while (b < t || b > 100000)
    {
        cout << "Invalid value entered. Please try again";
        cin >> b;
    }

    cout << "Enter the number of fallen apples" << endl;
    cin >> m;

    while (m < 1 || m > 100000)
    {
        cout << "Invalid value entered. Please try again (1-100000)";
        cin >> m;
    }

    cout << "Enter the number of fallen oranges" << endl;
    cin >> n;

    while (n < 1 || n > 100000)
    {
        cout << "Invalid value entered. Please try again (1-100000)";
        cin >> n;
    }

    d1.resize(m);
    d2.resize(n);
    for (int i = 0; i < m; i++)
    {
        cout << "Enter the distance between apple " << i + 1 << " and its tree from it had fell (-ve value of d means apple fell on left side of the tree, and +ve value of d means apple fell on the right side of the tree)" << endl;
        cin >> d1[i];

        while (d1[i] < -100000 || d1[i] > 100000)
        {
            cout << "Invalid value entered. Please try again (-100000-100000)";
            cin >> d1[i];
        }
    }

    for (int j = 0; j < n; j++)
    {

        cout << "Enter the distance between orange " << j + 1 << " and its tree from it had fell (-ve value of d means apple fell on left side of the tree, and +ve value of d means apple fell on the right side of the tree)" << endl;
        cin >> d2[j];

        while (d2[j] < -100000 || d2[j] > 100000)
        {
            cout << "Invalid value entered. Please try again (1-100000)";
            cin >> d2[j];
        }
    }
    countApplesAndOranges(s,t,a,b,d1,d2);
    return 0;
}