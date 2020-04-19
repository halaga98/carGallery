#include<iostream>
#include"Car.h"
#include"car_Gallery_List.h"
using namespace std;
int const MAX_VALUE = 25;
string Default_Admin_Id[MAX_VALUE] = {"Admin"};
int Defaul_Admin_Password[MAX_VALUE] = { 12345 };
string User_Id[MAX_VALUE] = {};
int User_Password[MAX_VALUE] = {};
static int count1 = 0;
void creatAccount(string name,int password) {
	User_Id[count1] = name;
	User_Password[count1] = password;
	count1++;


}
void Login() {

}


int main() {
	int a,b;
	string Id;
	int password;
	bool test= true;
	bool test1 = true;
	Car c1;
	car_Gallery_List<Car> car_list(1000);
	cout <<  "    Welcome to the CAR GALLERY  \n";
	while(true){
	cout << "To sing in press'1'.\n"<<
		"press '2' to create an account.\n"<<
		"For quit prees different key.\n";
	cin >> a;
	if (a == 1) {
		cout << "For user login press'1'.\n"<<
			"For administrator login press '2'.\n"<<
			"For quit prees different key. \n";
		cin >> b;
		if (b == 1) {
			cout << " Please write your user ýd\n";
			cin >> Id;
			cout << " Please write your password\n";
			cin >> password;
			if (count1 == 0) {
				
			}
			test = true;
			for (int i = 0; i <= count1; i++) {
				if (User_Id[i] == Id) {
					if (User_Password[i] == password) {
						test = false;
						// kullanýcý giriþ yapýldý iþlemleri yaptýr
						cout << "logged in the System \n";
						cout << "Press '1' to list of car\n" <<
							"Press '2'to sort by price \n" <<
							"Press '3' to sort by Id number\n" <<
							"Press '4' to buy a car\n";

					}
				}

			
			}
			if (test) {
				cout << "User name or Password wrong\n";
				test = true;
			}
			
		}
		else if (b == 2) {
			cout << " Please write your user ýd\n";
			cin >> Id;
			cout << " Please write your password\n";
			cin >> password;
			test1 = true;
			if (Default_Admin_Id[0] == Id) {
				if (Defaul_Admin_Password[0] == password) {
					test1 = false;
					
					// Admin giriþ yapýldý iþlemleri yaptýr
					cout << "admin giriþi yapýldý";

				}
			}
			if(test1) {
				cout << "Administrator name or Password wrong\n";
				
			}


		}
		else {
			cout << "Closing the System\n";//b
			return 0;
		}

	}


	else if (a == 2) {
		cout << "Please write your user name\n";
		cin >> Id;
		cout << "Please write your password\n";
		cin >> password;
		creatAccount(Id, password);
		cout << "Created\n";
		

	}
	else {
		cout << "Closing the System\n";
		return 0 ;
	}



	}







	c1.Create_Car("BMW", 2013, 70000, 1304444, 1);
	car_list.insert(c1);
	c1.Create_Car("BMW", 2013, 70000, 13004, 9);
	car_list.insert(c1);
	c1.Create_Car("BMW", 2013, 70000, 100, 7);
	car_list.insert(c1);
	c1.Create_Car("BMW", 2013, 70000, 130000, 3);
	car_list.insert(c1);
	car_list.print();
	car_list.car_Sort_By_Id();
	car_list.print();
	car_list.car_Sort_By_Price();
	car_list.print();



	system("pause");
	return 0;

}