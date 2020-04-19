#include "Car.h"

Car::Car() {

}
void Car::Create_Car(string brand, int year, int km, int price, int Id) {
	Setbrand_name(brand);
	Setmodel_Year(year);
	Setcar_Km(km);
	Setcar_Price(price);
	Setcar_Id(Id);
}
void Car::Setbrand_name(string brand_Name) {
	this->brand_Name = brand_Name;
}
void Car::Setmodel_Year(int model_Year) {
	this->model_Year = model_Year;

}
void Car::Setcar_Km(int car_Km) {
	this->car_Km = car_Km;

}
void Car::Setcar_Price(int car_Price) {
	this->car_Price = car_Price;
}
int Car::Getcar_Price() {
	return car_Price;
}
void Car::Setcar_Id(int car_Id) {
	this->car_Id = car_Id;
}
int Car::Getcar_Id() {
	return car_Id;
}
bool Car::operator == (const Car& otherItem) {
	if (this->car_Id == otherItem.car_Id)
		return true;
	return false;
}
ostream& operator << (ostream& os, const
	Car& item) {
	os << item.brand_Name << " " << item.model_Year << " " << item.car_Km << " " << item.car_Price << " " << item.car_Id;
	return os;
}