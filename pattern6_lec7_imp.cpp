# include <iostream>
using namespace std;
int main ()
{
    int n;
    cout << "Enter the length and width of the pattern";
    cin >> n;
    for (int i=1;i<=n;i++)
    {
        for (int j =i; j<=n;j++)
        {
            cout <<j;
        }
        for ( int h =1 ; h<=(i-1);h++)
        {
            cout<< h;
        }
        cout <<'\n';
    }
}