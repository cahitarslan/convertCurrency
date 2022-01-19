#include <iostream>
using namespace std;

//global variables defined so all functions can access
int convertMoney;
int convertToMoney;
double howMany;

//function that displays the menu
void ShowMenu(){
    cout << "The currencies are:\n";
    cout << "1.\tAED: Emeriti Dirham\n2.\tINR: Indian Rupee\n3.\tUSD: US Dollar\n4.\tGBP: Britch Pound\n5.\tEUR: Euro \n6.\tAUD: Australian Dollar\n7.\tJOD: Jordanian Dinar\n8.\tTRY: Turkish Lira\n9.\tPHP: Philippine Peso\n10.\tKWD: Kuwaiti Dinar\n";
    cout << "What currency would you like to convert?\n";
    cin >> convertMoney;
    cout << "What currency would you like to convert to?\n";
    cin >> convertToMoney;
    cout << "How much money would you like to convert?\n";
    cin >> howMany;
    cout << "\n";
}

//functions that change the type and amount of currencies by parameter
double AEDConvert(int moneyType, double amount){
  double changeAmount;
  switch (moneyType){
    case 2:
      changeAmount = amount * 20.45;
      break;
    case 3:
      changeAmount = amount * 0.27;
      break;
    case 4:
      changeAmount = amount * 0.21;
      break;
    case 5:
      changeAmount = amount * 0.24;
      break;
    case 6:
      changeAmount = amount * 0.38;
      break;
    case 7:
      changeAmount = amount * 0.19;
      break;
    case 8:
      changeAmount = amount * 3.67;
      break;
    case 9:
      changeAmount = amount * 13.73;
      break;
    case 10:
      changeAmount = amount * 0.082;
      break;
    default:
      break;
  }
  return changeAmount;
}

double INRConvert(int moneyType, double amount){
  double changeAmount;
  switch (moneyType){
    case 1:
      changeAmount = amount * 0.049;
      break;
    case 3:
      changeAmount = amount * 0.013;
      break;
    case 4:
      changeAmount = amount * 0.010;
      break;
    case 5:
      changeAmount = amount * 0.012;
      break;
    case 6:
      changeAmount = amount * 0.019;
      break;
    case 7:
      changeAmount = amount * 0.0094;
      break;
    case 8:
      changeAmount = amount * 0.18;
      break;
    case 9:
      changeAmount = amount * 0.67;
      break;
    case 10:
      changeAmount = amount * 0.0040;
      break;
    default:
      break;
  }
  return changeAmount;
}

double USDConvert(int moneyType, double amount){
  double changeAmount;
  switch (moneyType){
    case 1:
      changeAmount = amount * 3.67;
      break;
    case 2:
      changeAmount = amount * 75.12;
      break;
    case 4:
      changeAmount = amount * 0.75;
      break;
    case 5:
      changeAmount = amount * 0.88;
      break;
    case 6:
      changeAmount = amount * 1.41;
      break;
    case 7:
      changeAmount = amount * 0.71;
      break;
    case 8:
      changeAmount = amount * 13.41;
      break;
    case 9:
      changeAmount = amount * 50.36;
      break;
    case 10:
      changeAmount = amount * 0.30;
      break;
    default:
      break;
  }
  return changeAmount;
}

double GBPConvert(int moneyType, double amount){
  double changeAmount;
  switch (moneyType){
    case 1:
      changeAmount = amount * 4.87;
      break;
    case 2:
      changeAmount = amount * 99.65;
      break;
    case 3:
      changeAmount = amount * 1.33;
      break;
    case 5:
      changeAmount = amount * 1.17;
      break;
    case 6:
      changeAmount = amount * 1.87;
      break;
    case 7:
      changeAmount = amount * 0.94;
      break;
    case 8:
      changeAmount = amount * 17.79;
      break;
    case 9:
      changeAmount = amount * 66.79;
      break;
    case 10:
      changeAmount = amount * 0.40;
      break;
    default:
      break;
  }
  return changeAmount;
}

double EURConvert(int moneyType, double amount){
  double changeAmount;
  switch (moneyType){
    case 1:
      changeAmount = amount * 4.16;
      break;
    case 2:
      changeAmount = amount * 85.02;
      break;
    case 3:
      changeAmount = amount * 1.13;
      break;
    case 4:
      changeAmount = amount * 0.85;
      break;
    case 6:
      changeAmount = amount * 1.59;
      break;
    case 7:
      changeAmount = amount * 0.80;
      break;
    case 8:
      changeAmount = amount * 15.18;
      break;
    case 9:
      changeAmount = amount * 56.99;
      break;
    case 10:
      changeAmount = amount * 0.34;
      break;
    default:
      break;
  }
  return changeAmount;
}

double AUDConvert(int moneyType, double amount){
  double changeAmount;
  switch (moneyType){
    case 1:
      changeAmount = amount * 2.61;
      break;
    case 2:
      changeAmount = amount * 53.39;
      break;
    case 3:
      changeAmount = amount * 0.71;
      break;
    case 4:
      changeAmount = amount * 0.54;
      break;
    case 5:
      changeAmount = amount * 0.63;
      break;
    case 7:
      changeAmount = amount * 0.50;
      break;
    case 8:
      changeAmount = amount * 9.53;
      break;
    case 9:
      changeAmount = amount * 35.79;
      break;
    case 10:
      changeAmount = amount * 0.22;
      break;
    default:
      break;
  }
  return changeAmount;
}

double JODConvert(int moneyType, double amount){
  double changeAmount;
  switch (moneyType){
    case 1:
      changeAmount = amount * 5.18;
      break;
    case 2:
      changeAmount = amount * 105.93;
      break;
    case 3:
      changeAmount = amount * 1.41;
      break;
    case 4:
      changeAmount = amount * 1.06;
      break;
    case 5:
      changeAmount = amount * 1.25;
      break;
    case 6:
      changeAmount = amount * 1.98;
      break;
    case 8:
      changeAmount = amount * 18.92;
      break;
    case 9:
      changeAmount = amount * 71.03;
      break;
    case 10:
      changeAmount = amount * 0.43;
      break;
    default:
      break;
  }
  return changeAmount;
}

double TRYConvert(int moneyType, double amount){
  double changeAmount;
  switch (moneyType){
    case 1:
      changeAmount = amount * 0.28;
      break;
    case 2:
      changeAmount = amount * 5.63;
      break;
    case 3:
      changeAmount = amount * 0.075;
      break;
    case 4:
      changeAmount = amount * 0.057;
      break;
    case 5:
      changeAmount = amount * 0.066;
      break;
    case 6:
      changeAmount = amount * 0.11;
      break;
    case 7:
      changeAmount = amount * 0.053;
      break;
    case 9:
      changeAmount = amount * 3.77;
      break;
    case 10:
      changeAmount = amount * 0.023;
      break;
    default:
      break;
  }
  return changeAmount;
}

double PHPConvert(int moneyType, double amount){
  double changeAmount;
  switch (moneyType){
    case 1:
      changeAmount = amount * 0.073;
      break;
    case 2:
      changeAmount = amount * 1.49;
      break;
    case 3:
      changeAmount = amount * 0.020;
      break;
    case 4:
      changeAmount = amount * 0.015;
      break;
    case 5:
      changeAmount = amount * 0.018;
      break;
    case 6:
      changeAmount = amount * 0.028;
      break;
    case 7:
      changeAmount = amount * 0.014;
      break;
    case 8:
      changeAmount = amount * 0.26;
      break;
    case 10:
      changeAmount = amount * 0.0060;
      break;
    default:
      break;
  }
  return changeAmount;
}

double KWDConvert(int moneyType, double amount){
  double changeAmount;
  switch (moneyType){
    case 1:
      changeAmount = amount * 12.14;
      break;
    case 2:
      changeAmount = amount * 248.28;
      break;
    case 3:
      changeAmount = amount * 3.31;
      break;
    case 4:
      changeAmount = amount * 2.49;
      break;
    case 5:
      changeAmount = amount * 2.92;
      break;
    case 6:
      changeAmount = amount * 4.65;
      break;
    case 7:
      changeAmount = amount * 2.34;
      break;
    case 8:
      changeAmount = amount * 44.04;
      break;
    case 9:
      changeAmount = amount * 166.47;
      break;
    default:
      break;
  }
  return changeAmount;
}

//function that parameterized which currency to change to and runs the unit switching functions
void Convert(){ 
  if(convertMoney == 1) {
    cout << AEDConvert(convertToMoney, howMany);
    cout << "\n";
  }
  if(convertMoney == 2) {
    cout << INRConvert(convertToMoney, howMany);
    cout << "\n";
  }
  if(convertMoney == 3) {
    cout << USDConvert(convertToMoney, howMany);
    cout << "\n";
  }
  if(convertMoney == 4) {
    cout << GBPConvert(convertToMoney, howMany);
    cout << "\n";
  }
  if(convertMoney == 5) {
    cout << EURConvert(convertToMoney, howMany);
    cout << "\n";
  }
  if(convertMoney == 6) {
    cout << AUDConvert(convertToMoney, howMany);
    cout << "\n";
  }
  if(convertMoney == 7) {
    cout << JODConvert(convertToMoney, howMany);
    cout << "\n";
  }
  if(convertMoney == 8) {
    cout << TRYConvert(convertToMoney, howMany);
    cout << "\n";
  }
  if(convertMoney == 9) {
    cout << PHPConvert(convertToMoney, howMany);
    cout << "\n";
  }
  if(convertMoney == 10) {
    cout << KWDConvert(convertToMoney, howMany);
    cout << "\n";
  }
}

int main(){
  //a loop is set up so that the program can run over and over again
  char continuity = 'y';
  while(continuity == 'y'){
    ShowMenu();
    Convert();

    cout << "\n\nPress 'y' to continue\n";
    cout << "Press 'n' to exit\n";   
    cin >> continuity;

    if(continuity == 'n') 
      break;
    else if(continuity != 'y'){
      cout << "Please enter a valid character\n";
      cin >> continuity;
    } 
  }
    return 0;
}



