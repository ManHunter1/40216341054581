#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 6; i++)
{
    for (int j = 0; j <= 10; j++)
{
    if (i % 2 == 0)
{
    cout << "# ";
}
    else
{
    cout << "& ";
}
}
    cout << endl;
}
}
