
/*******************************************************************************
* Program Name: Planet Weight Calcuator
* Created Date: 2/2/2025
* Created By: Ryan Nalbach
* Purpose: TO calculate your weight on other planets in our solar system
* Acknowledgements: Tony Gaddis C++ pearson book, professor Cayton Polen
*******************************************************************************/
#include <iostream> //to print to console and have input
#include <iomanip> //to change configuration of output
using namespace std;

/*******************************************************************************
* Function Name: main()
* Parameters: None
* Return Value: int
* Purpose: to multiple weight input and output answer
*******************************************************************************/

int main ()
{
    //Set flags for the input-output stream to format the output to 2 decimal places, always shown even if it is .0
    cout << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << setprecision(2);
    cout << "this program will calculate your weight throught out the different planets in our solar system \n"; 
    //opening text to tell user what this program does
    cout << "lets get started by inputting your weight in pounds \n";
    /*****I need to put these values into the program to calculate, this is just a note of the palnets
    different weights
    Mercury: 0.38
    Venus: 0.91
    Earth: 1.00
    Mars: 0.38
    Jupiter: 2.34
    Saturn: 1.06
    Uranus: 0.92
    Neptune: 1.19
    Pluto: 0.06
    Moon: 0.166
    Sun: 27.00 ****/
    float weight;
    cout << "Please enter your weight :";
    cin >> weight;

    bool answer;
    std::string input;

    std::cout << "to confirm your weight it is" << weight << "(yes/no): ";
    std::cin >> input;

    if(input == "yes"){
        answer = true;
    } else if (input == "no") {
        answer = false;
    } else {
        std::cout << "invalid input. please answer with yes or no ." << std::endl;
        return 1;
    }

    if (answer) {
        std::cout << "Great! lets calculate your weight throughout our solar system"<< std::endl;
    } else {
        std::cout << "Lets enter the correct weight :" << std::endl;
        cin >> weight ;
    }
    return 0;


}
