#include <iostream>
using namespace std ;

int main() {
	cout <<"__________________________________________________________________________________________________________________"<< endl;
	cout <<"                       ENROLLMENT PROGRAM FOR NEW STUDENTS                       "<< endl;
	cout <<"__________________________________________________________________________________________________________________"<< endl; 
	
	string name , address;
	int gender , age , choice , totalgrade ;
	cout << "ENTER YOUR NAME: "<<endl;
	cin >> name;
	
	cout << "ENTER YOUR PROGRAM CHOICE: \n 1. BSc Information Technology \n 2. BSc Computer Science \n 3. BSc Computer Engineering"<< endl;
	cin >> choice;
	if (choice==1){
		cout << "BSC INFORMATION TECHNOLOGY " <<endl;
	} else if (gender==2){
		cout << "BSC COMPUTER SCIENCE " << endl;
	} else if (gender==3){
		cout << "BSC COMPUTER ENGINEERING " << endl;
	} else {
		cout << "WE DO NOT OFFER THE PROGRAM YOU HAVE SELECTED" << endl;
	}
	
	cout << "ENTER YOUR GENDER: \n 1. MALE \n 2. FEMALE" << endl;
	cin >> gender;
	if (gender==1){
		cout << "MALE" << endl;
	} else if (gender==2) {
		cout << "FEMALE" << endl;	
	} else {
		cout << "OPTION IS NOT A GENDER" << endl;
	}
	
	cout << "ENTER YOUR AGE: "<< endl;
	cin >> age;
	if (age < 18){
		cout << "YOU DO NOT QUALIFY FOR THIS INSTITUITION." << endl;
	} else {
		cout <<"YOU QUALIFY FOR THIS INSTITUITION" << endl;
	}
	
	
	cout <<"INPUT YOUR ADDRESS: "<< endl;
	cin >> address;
	
	cout << "WHAT WAS YOUR TOTAL GRADE POINT IN THE WEST AFRICAN SENIOR SCHOOL CERTIFICATE EXAMINATION: " << endl;
	cin >> totalgrade;
	if (totalgrade >= 20){
		cout <<"YOU HAVE NOT MET THE STANDARDS TO PURSUE A COURSE IN OUR INSTITUITION " << endl;
	} else if (totalgrade >= 15){
		cout <<"YOU WILL BE PUT ON A PROBATIONARY PERIOD " << endl;
	} else {
		cout <<"CONGRATULATIONS!!! YOU CAN PURSUE A COURSE WITH OUR INSTITUITION " << endl;
	}
	
	cout << "NAME: " << name << endl;
	cout << "PROGRAM CHOICE: " << choice << endl;
	cout << "GENDER: " << gender << endl;
	cout << "AGE: " << age << endl;
	cout << "ADDRESS: " << address << endl;
	return 0;
}
