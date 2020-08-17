#include <cstdio>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void numeralsToModern(string userInput);
void modernToNumerals(int userInput);

void prompt();

void defaultTest();

int main() {
	bool stopProgram = false;
	
	while(stopProgram == false){
		prompt();
		string menuChoice;
		
		while(menuChoice != "1" && menuChoice != "2" && menuChoice != "3"){
			cout << "Your selection: ";
			cin >> menuChoice;
			cout << endl;

			if(menuChoice != "1" && menuChoice != "2" && menuChoice != "3"){
				puts("I'm sorry, you did not enter a valid choice.");
				puts("Please either type '1' or '2'");
				cout << endl << "1. Roman Numerals to Modern Numbers" << endl;
				cout << "2. Modern Numbers to Roman Numerals" << endl;
				cout << "3. AUTOMATED TEST for modernToNumerals function" << endl;
			}
		} cout << endl;
		if(menuChoice == "1"){
			cout << "Please enter a roman numeral for conversion: ";
			string romanNumeral;
			cin >> romanNumeral;
			numeralsToModern(romanNumeral);
		}
		else if(menuChoice == "2"){
			cout << "Please enter a modern number for conversion: ";
			int modernNumber;
			cin >> modernNumber;
			modernToNumerals(modernNumber);
		}
		else if(menuChoice == "3"){
			defaultTest();
		}
		string whatNow;
		puts("Please enter your selection, typing in only the single digit number that corresponds to your choice.");
		while(whatNow != "1" && whatNow != "2"){
			puts("1. Main Menu");
			puts("2. Quit");
			cout << "Type in your choice: ";
			cin >> whatNow;
			
			if(whatNow != "1" && whatNow != "2"){
				whatNow = "";
				puts("I'm sorry, you did not enter a valid choice.");
				puts("Please either type '1' or '2'");
			} cout << endl;
		} cout << endl;
		if(whatNow == "1") continue;
		else stopProgram = true;
	} puts("Goodbye.");
}

void prompt(){
		puts("This program can convert modern numbers to Roman numerals, and vice versa.");
		cout << endl;
	puts("Please make a selection from the following menu, only typing in the number that corresponds to your choice");
	puts("1. Roman Numerals to Modern Numbers");
	puts("2. Modern Numbers to Roman Numerals");
	puts("3. AUTOMATED TEST for modernToNumerals function");
}

void defaultTest(){
	srand(time(0));
	for(int i = 0; i < 10; i++){
		int randomParameter = rand()%5000 + 1;
		cout << "modernToNumerals(" << randomParameter << "): ";
		modernToNumerals(randomParameter);
		cout << endl;
	}
}
void numeralsToModern(string userInput){
	int modernNumber = 0;
	int i = 0;

	while(i < userInput.size()){
		if(userInput[i+1]){
			if(userInput[i] == 'I'){
				if(userInput[i+1] != 'I'){
					if(userInput[i+1] == 'V') {
						modernNumber += 4;
						i++;
					}
					else if(userInput[i+1] == 'X') {
						modernNumber += 9;
						i++;
					}
					else modernNumber += 1;
				}
				else modernNumber += 1;
			}
			else if(userInput[i] == 'V'){
				if(userInput[i+1] != 'V'){
					if(userInput[i+1] == 'L') {
						modernNumber += 45;
						i++;
					}
					else modernNumber += 5;
				}
				else modernNumber += 5;
			}
			else if(userInput[i] == 'X'){
				if(userInput[i+1] != 'X'){
					if(userInput[i+1] == 'L') {
						modernNumber += 40;
						i++;
					}
					else if(userInput[i+1] == 'C') {
						modernNumber += 90;
						i++;
					}
					else modernNumber += 10;
				}
				else modernNumber += 10;
			}
			else if(userInput[i] == 'L'){
				if(userInput[i+1] != 'L'){
					if(userInput[i+1] == 'D') {
						modernNumber += 450;
						i++;
					}
					else modernNumber += 50;
				}
				else modernNumber += 50;
			}
			else if(userInput[i] == 'C'){
				if(userInput[i+1] != 'C'){
					if(userInput[i+1] == 'D') {
						modernNumber += 400;
						i++;
					}
					else if(userInput[i+1] == 'M') {
						modernNumber += 900;
						i++;
					}
					else modernNumber += 100;
				}
				else modernNumber += 100;
			}
			else if(userInput[i] == 'D') modernNumber += 500;
			else if(userInput[i] == 'M') modernNumber += 1000;
		}
		else {
			switch(userInput[i]){
				case 'I':
					modernNumber += 1;
					break;
				case 'V':
					modernNumber += 5;
					break;
				case 'X':
					modernNumber += 10;
					break;
				case 'L':
					modernNumber += 50;
					break;
				case 'C':
					modernNumber += 100;
					break;
				case 'D':
					modernNumber += 500;
					break;
				case 'M':
					modernNumber += 1000;
					break;
			}
		}
		i++;
	}
	cout << "The Roman Numeral entered converted to the following modern number: " << modernNumber << endl;
	
	puts("Enter another numeral?");
	string response;
	while(response != "1" && response != "2"){
		cout << "Enter '1' for yes, '2' for no: ";
		cin >> response;
		
		if(response != "1" && response != "2"){
			response = "";
			puts("Sorry, you did not enter a valid choice.");
			puts("Please try again.");
		}
	}
	if(response == "1") {
		string newNumeral;
		cout << "Please enter another roman numeral: ";
		cin >> newNumeral;
		numeralsToModern(newNumeral);
	}
	else {}
	
}

void modernToNumerals(int userInput){
	int numM = userInput/1000;
	userInput -= (1000 * numM);

	int numD = userInput/500;
	userInput -= (500 * numD);

	int numC = userInput/100;
	userInput -= (100 * numC);

	int numL = 0;
	int numX = 0;
	if((userInput/10) == 9){
		numX = 9;
		userInput -= (numX * 10);
	}
	else{
		numL = userInput/50;
		userInput -= (50 * numL);
		
		numX = userInput/10;
		userInput -= (10 * numX);	
	}
	int numV = userInput/5;
	userInput -= (5 * numV);

	int remainder = userInput;
	
	/*
	cout << "numM: " << numM << endl;
	cout << "numD: " << numD << endl;
	cout << "numC: " << numC << endl;
	cout << "numL: " << numL << endl;
	cout << "numX: " << numX << endl;
	cout << "numV: " << numV << endl;
	cout << "remainder: " << remainder << endl;
	*/
	
	string numeral = "";
	
	if(numM > 0) numeral += string(numM, 'M');
	if(numD > 0) {
		if(900 == (numD*500 + numC*100)){
			numeral += "CM";
			numD -= 500;
			numC -= 400;
		}
		else numeral += string(numD, 'D');
	}
	if(numC > 0){
		if(numC == 4) numeral += "CD";
		else numeral += string(numC, 'C');
	}
	if(numL > 0){
		if(numL == 9) numeral += "LD";
		else if(numX == 9){}
		else numeral += string(numL, 'L');
	}
	if(numX > 0){
		if(numX == 4) numeral += "XL";
		else if(numX == 9) numeral += "XC";
		else numeral += string(numX, 'X');
	}
	if(numV > 0){
		if(numV == 9) numeral += "VL";
		else if((remainder + 5) == 9){
			numeral += "IX";
			numV--;
			remainder -= remainder;
		}
		if(numV > 0) numeral += string(numV, 'V');
	}
	if(remainder > 0){
		if(remainder == 4) numeral += "IV";
		else numeral += string(remainder, 'I');
	}
	
	cout << "The modern number converted to the following Roman numeral: " << numeral << endl;
	
/*	puts("Convert another modern number?");
	string response;
	
	while(response != "1" && response != "2"){
		cout << "Type '1' for yes, '2' for no: ";
		cin >> response;
		
		if(response != "1" && response != "2"){
			response = "";
			puts("Sorry, you did not enter a valid choice.");
			puts("Please try again.");
		}
	}
	if(response == "1"){
		int newNumber;
		cout << "Please enter a new number: ";
		cin >> newNumber;
		modernToNumerals(newNumber);
	}
	else {} */
	
	
}

