#include <iostream>
using namespace std;
class Car {

	public:
		string Brand;
		int model_Year;
		int car_Km;
		int car_Price;
		int car_Id;
		
		Car();
		void Setmodel_Year();
		void Setcar_Km();
		void Setcar_Price();
		void Setcar_Id();
		bool operator == (const MyItem&);
		friend ostream& operator <<
			(ostream&, const MyItem&);


		
		











};