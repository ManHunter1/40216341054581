#include <iostream>
using namespace std;
int main()
{
    // 1
    for (int i = 1; i <= 8; i++)
{
    for (int j = i; j >= 1; j--)
{
    cout << j << " ";
}
    cout << endl;
}
    cout << endl;

    // 2
    for (int i = 0; i < 8; i++)
{
    for (int j = 0; j < 8; j++)
{
    if (j < i)
{
    cout << "  ";
}
    else
{
    cout << "# ";
}
}
    cout << endl;
}
    cout << endl;

    // 3
    for (int i = 7; i >= 0; i--)
{
    for (int j = 0; j <= i; j++)
{
    cout << "# ";
}
    cout << endl;
}
    cout << endl;

    // 4
    for (int i = 1; i <= 8; i++)
{
    for (int j = 1; j <= 15; j++)
{
    if ((i + j) % 2 == 0)
{
    cout << "# ";
}
    else
{
    cout << "* ";
}
}
    cout << endl;
}
}
