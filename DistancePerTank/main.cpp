// This program will give the user the number of miles a full tank of gas can get you, one for traveling through town and one for the highway.
#include <iostream>

using namespace std;

int main()
{
    // Sets the variables for miles per gallon on the highway and town respectively, the distance that will be outputted by the program, and the number of gallons in a full tank of gas.
    float distance;
    float milesPerGallonHighway = 28.9f;
    float milesPerGallonTown = 23.5f;
    int fullTank = 20;

    // Gives how far a full tank gets you on the highway
    distance = fullTank * milesPerGallonHighway;
    cout << "On a full tank of gas, you can travel " << distance << " miles on the highway.\n";

    // Gives how far a full tank gets you moving through town
    distance = fullTank * milesPerGallonTown;
    cout << "On a full tank of gas, you can travel " << distance << " miles through town.\n";

    return 0;
}
