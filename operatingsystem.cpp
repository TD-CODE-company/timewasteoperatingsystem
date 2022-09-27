#include "iostream"
#include "string"
#include "cstdlib"
#include "ctime"
#include "Windows.h"
#include "cmath"
using namespace std;
int main(){
    int goAhead= 1;
    int x;
    int load=1;
    cout << "Loading....";
    while (load==1){
      for (size_t i = 0; i < 5; i++) {
        Sleep(500);
        Beep(1000,500);
        cout<<".";
    }
    cout << endl;
    break;

  }
    Beep(2000,500);
    Sleep(100);
    Beep(1000,500);
    cout << "Welcome to the timewaste operating system!" << endl;
    while (true) {
        if (goAhead==0){
          break;
        }
        while (goAhead==1) {
          //initialize variables
          cout << "Please select any command from 1 to 7. Type 7 for help\n";
          cout << "Type 8 to shutdown system\n";
          cout << "Command: ";
          cin >> x;

          // command execution

          if (x==1) {
                   int radius;
                   string choice;
                   const double pi=3.14;
                   cout << "Executing Command 1: Area/Circumference finder of circle." << endl;
                   cout << "Area or Circumference?\n";
                   cin >> choice;
                   if (choice=="Area" || choice=="area") {
                     cout << "Area" << endl;
                     cout << "Enter the radius of a circle: ";
                     cin >> radius;
                     cout << "Find area..." << '\n';
                     float area = pi*pow(radius,2);
                     cout << "Area: " << area << endl;
                     cout << endl;
                   }
                   if (choice=="Circumference" || choice=="circumference"){
                     int radius2;
                     cout << "Circumference\n";
                     cout << "Enter Radius of Circle: ";
                     cin >> radius2;
                     cout << "Finding Circumference...." << endl;
                     float circum = radius2*2*pi;
                     cout << "Circumference: " << circum << endl;
                   }
                   cout << endl;
            }
          //command 2
          if (x==2) {
              float number1;
              float number2;
              char oper;
              cout << "Executing Command 2: Calculator" << endl;
              cout << "Enter the first number: ";
              cin >> number1;
              cout << "Enter the second number: ";
              cin >> number2;
              cout << "Enter the operation: ";
              cin >> oper;
              if (oper=='+') {
                cout << number1 << " plus " << number2 << " is "
                     << number1 + number2 << endl;
              }
              if (oper=='-') {
                cout << number1 << " minus " << number2 << " is "
                     << number1 - number2 << endl;
              }
              if (oper=='*') {
                cout << number1 << " times " << number2 << " is "
                     << number1 * number2 << endl;
              }
              if (oper=='/') {
                cout << number1 << " divided by " << number2 << " is "
                     << number1 / number2 << endl;
              }
              cout << endl;
            }
            // command 3
            if (x==3) {
              cout << "Executing Command 3. Time waste game\n";
              int totalInventory;
              cout << "Will you like to play this game? yes or no(case sensitive): ";
              string consent;
              cin >> consent;
              while (consent=="yes") {
                cout << "Would you like to mine diamonds?\n";
                string mine;
                int output;
                int inventory;
                int mined;
                cin >> mine;

                if (mine=="yes"){
                      srand(time(0));
                      output = rand()%5;
                      cout <<"You got "<< output <<" diamonds!"<< endl;
                }
                if (mine=="no"){
                  consent=="no";
                  break;
                }
              }
            }
            //command 4
            if (x==4){
              cout << "Executing command 4: Temperature converter." << endl;
              cout << "To select unit converions, please type option number:"
                   << endl;
              while (true){
                int unit;
                cout << "To exit please type 5\n";
                cout << "Option 1: Farenheit to celcius" << endl;
                cout << "Option 2: Celcius to Farenheit" << endl;
                cout << "Option 3: Celcius to KELVIN" << endl;
                cout << "Option 4: KELVIN To celcius" << endl;
                cout << "Unit: ";
                cin >> unit;
                  if (unit==1){
                    double tempCelcius;
                    double tempFaren;
                    cout << "Farenheit to celcius\n";
                    cout << "Farenheit: ";
                    cin >> tempFaren;
                    tempCelcius= ((tempFaren-32)*5)/9;
                    cout << tempFaren << "*F in celcius is "
                         << tempCelcius << "*C" << endl;
                   tempCelcius = 0;
                   tempFaren = 0;
                  }
                  if (unit==2){
                    double tempCelcius;
                    double tempFaren;
                    cout << "Celcius to Farenheit\n";
                    cout << "Celcius: ";
                    cin >> tempCelcius;
                    tempFaren= ((tempCelcius*9)/5)+32;
                    cout << tempCelcius << "*C in Farenheit is "
                         << tempFaren << "*F" << endl;
                    tempCelcius = 0;
                    tempFaren = 0;
                  }
                if (unit==3) {
                  double tempCelcius;
                  double tempKelvin;
                  cout << "Celcius to KELVIN\n";
                  cout << "Celcius: ";
                  cin >> tempCelcius;
                  tempKelvin = tempCelcius+273.15;
                  cout << tempCelcius << "*C in kelvin is "
                       << tempKelvin << "K" << endl;
                }
                if (unit==4) {
                  double tempCelcius;
                  double tempKelvin;
                  cout << "KELVIN to Celcius\n";
                  cout << "KELVIN: ";
                  cin >> tempKelvin;
                  tempCelcius = tempKelvin-273.15;
                  cout << tempKelvin << "K in celcius is "
                       << tempCelcius << "*C" << endl;
                }
                if (unit==5){
                  break;
                }
              }
            }
            //command 5 Multiplication Table Generator
            if (x==5){
              cout << "Executing Command 5: Multiplication Table Generator"
                 << endl;
              int multiple;
              int factor;
              cout << "Enter a number for the table: ";
              cin >> multiple;
              cout << endl;
              cout << "Enter the amount of times for " << multiple
                   << " to be multiplied: ";
              cin >> factor;
              cout << "Multiplication table for the number " << multiple
                   << " till " << factor << " factors is:" << endl;
              for (int i =1; i <= factor; i++){
                cout << multiple << " times " << i << " is " << multiple*i
                     << endl;
              }
          }

            //shut down
            if (x==8) {
              cout << "SYSTEM SHUTTING DOWN. WILL YOU WISH TO PROCEED?" << endl;
              string shutDown;
              cin >> shutDown;
              if (shutDown=="yes" || shutDown=="Yes"){
                cout << "SHUTTING DOWN SYSTEM" << endl;
                Beep(2000,2000);
                goAhead=0;
              }
            }
          }

    }
}
