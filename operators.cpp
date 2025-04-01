#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
void solve(double meal_cost, double tip_percent, double tax_percent) {
    double total_cost;
    double tip=0;
    double tax=0;
    tip=meal_cost*(tip_percent/100);
    tax=meal_cost*(tax_percent/100);
    total_cost=meal_cost+tip+tax;
    cout<<tip<<endl;
    cout<<tax<<endl;

    cout<<round(total_cost);


}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
