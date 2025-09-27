// This program outputs the number of customers who meet certain criteria in a survey, using percentages given in the program document.
#include <iostream>

using namespace std;

int main()
{
    // The variables this program uses, with 2 variables to hold the two answers it outputs.
    int totalCustomers = 16500;
    float percentOneOrMore = 0.15f;
    float percentCitrus = 0.58f;
    int answer1, answer2;

    // Gives the number of customers who purchase one or more energy drinks per day
    answer1 = totalCustomers * percentOneOrMore;
    cout << "Of the 16,500 surveyed customers, " << answer1 << " of them purchase 1 or more energy drinks per week." << endl;

    // Gives the number of customers who both meet the previous criteria and prefer energy drinks of citrus flavor.
    answer2 = answer1 * percentCitrus;
    cout << "And of those " << answer1 << " customers, " << answer2 << " of them prefer citrus-flavored energy drinks." << endl;

    return 0;
}
