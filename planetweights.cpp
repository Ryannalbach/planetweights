
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
    cout << right; // this allows us to justify our output to the right
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
    float weight; //establish decimals can be used for a variable called weight
    cout << setw(78) << "Please enter your weight :"; // a prompt to enter the users weight
    cin >> weight; // input prompt for the variable of weight

    bool answer; //a true or false variable called answer
    string input; // a variable called input which allows words to be used

    cout << setw(20) << "to confirm your weight it is" << weight << "(yes/no): "; // a prompt to input the answer variable
    cin >> input; // the input variable as a string

    if(input == "yes"){ // an if else statement to check the input to see its boolean value
        answer = true; //this is if its true
    } else if (input == "no") { // this is if it isn't
        answer = false; // what the next step is if it isn't true
    } else {
        cout << setw(20) << "invalid input. please answer with yes or no .\n"; //a prompt to move to the next step
        return 1; 
    }

    if (answer) {
        cout << setw(20) << "Great! lets calculate your weight throughout our solar system \n"; // this is what happens if it is true
    } else {
        cout << setw(20) << "Lets enter the correct weight : \n"; //this is what happens if it isn't
        cin >> weight ; //repeat the input
    }


    

    //constant float factors for each planet to define the ratio to be multiplied
    const float MercuryGravity = 0.38;
    const float VenusGravity = 0.91;
    const float EarthGravity = 1.00;
    const float MarsGravity =  0.38;
    const float JupiterGravity = 2.34;
    const float SaturnGravity = 1.06;
    const float UranusGravity = 0.92;
    const float NeptuneGravity = 1.19;
    const float PlutoGravity = 0.06;
    const float MoonGravity = 0.166;
    const float SunGravity = 27.00;

    //now time to print each of these multiplied by the user weight
    cout << setw(76) << "Your weight on Mercury is " << weight * MercuryGravity << " lbs. \n"; 
    // setw allows us to move the text right by 75 spaces
    // with the cout >> right; above the setw allows us to justify right
    cout << setw(75) << "your weight on Venus is " << weight * VenusGravity << " lbs. \n";
    cout << setw(76) << "your weight on Mars is " << weight * MarsGravity << " lbs. \n";
    cout << setw(75) << "your weight on Jupiter is " << weight * JupiterGravity << " lbs. \n";
    cout << setw(75) << "your weight on Saturn is " << weight * SaturnGravity << " lbs. \n";
    cout << setw(75) << "your weight on Uranus is " << weight * UranusGravity << " lbs. \n";
    cout << setw(75) << "your weight on Neptune is " << weight * NeptuneGravity << " lbs. \n";
    cout << setw(76) << "your weight on Pluto is " << weight * PlutoGravity << " lbs. \n";
    cout << setw(76) << "your weight on the Moon is " << weight * MoonGravity << " lbs. \n";
    cout << setw(74) << "If you could stand on the Sun your weight would be " << weight * SunGravity << " lbs. \n";
    cout << setw(88) << "Thank you for using this gravity weight calculator! \n";

    return (0);



}
