#include <iostream>
using namespace std;
class Car {

	public:
		string brand_Name;
		int model_Year;
		int car_Km;
		int car_Price;
		int car_Id;
		
		Car();
		void Create_Car(string,int,int,int,int);
		void Setbrand_name(string);
		void Setmodel_Year(int);
		void Setcar_Km(int);
		void Setcar_Price(int);
		int Getcar_Price();
		void Setcar_Id(int);
		int Getcar_Id();
		bool operator == (const Car&);
		friend ostream& operator <<
			(ostream&, const Car&);


		
		











};