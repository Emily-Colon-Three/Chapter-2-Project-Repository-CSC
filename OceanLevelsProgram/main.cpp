// This program finds the increase in ocean levels, in millimeters, in a certain number of years. The number of mm risen is output for 5, 7, and 10 years.

#include <iostream>

using namespace std;

int main()
{
    // Used Variables
    int years;
    float oceanRisingRate, mmRisen;
    oceanRisingRate = 1.5f;

    // Levels in 5 years
    years = 5;
    mmRisen = years * oceanRisingRate;
    cout << "In " << years << " years, ocean levels will have risen by " << mmRisen << " millimeters.\n";

    // Levels in 7 years
    years = 7;
    mmRisen = years * oceanRisingRate;
    cout << "In " << years << " years, ocean levels will have risen by " << mmRisen << " millimeters.\n";

    // Levels in 10 years
    years = 10;
    mmRisen = years * oceanRisingRate;
    cout << "In " << years << " years, ocean levels will have risen by " << mmRisen << " millimeters.\n";

    return 0; // end program
}
