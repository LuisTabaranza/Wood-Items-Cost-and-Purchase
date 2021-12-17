#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int userDrawers();
    int userWood(char ws);
    double calculations(int Cost, int num);
    char woodType();

    double calc;
    int woodCost;
    char woods;
    int totalnum;

    totalnum = userDrawers();
    woods = woodType();
    woodCost = userWood(woods);
    calc = calculations(woodCost, totalnum);
    cout << "The total amount of your desk is: " << calc << endl;

}

int userDrawers()
{
    int totalDrawers;
    cout << "How many drawers will you like in your desk? ";
    cin >> totalDrawers;

    return totalDrawers;
}

char woodType()
{
    char Type;
    cout << "What type of Wood will your desk be? " << endl;
    cout << "m for mahogony 180php" << endl;
    cout << "o for oak 140php" << endl;
    cout << "p for pine 100php" << endl;
    cin >> Type;

    return Type;
}

int userWood(char ws)
{
    const int moh = 180;
    const int oak = 140;
    const int pine = 100;
    int wood;

    if (ws == 'M' || ws == 'm')
        wood = moh;
    if (ws== 'o' || ws == 'O')
        wood = oak;
    else
        wood = pine;

    return wood;
}

double calculations(int Cost, int num)
{
    double calc;
    calc = Cost * num;

    return calc;
}