#include<iostream>
#include "string"
using namespace std;
template <typename T>

class car_Gallery_List {
private:
	int max_Car;
	int car_Count;
	T* car_Array;


public:
	car_Gallery_List(int max_Car) {
		this->max_Car = max_Car;
		car_Array = new T[this->max_Car];
		this->car_Count = 0;
	}

	bool isFull() const {
		return (this->car_Count == this->max_Car);
	}

	bool isEmpty() const {
		return (this->car_Count == 0);
	}

	  int GetCount_car_Gallery_List() const {
		return this->car_Count;
	}

	bool found_delete(int id) {

		for (int i = 0; i < car_Count; i++) {
			if (id == car_Array[i]) {
				car_Array[i] = car_Array[car_Count - 1];
				this->car_Count--;
				return true;
			}
		}
		return false;
	}

	void insert(T Car) {
		if (this->isFull()) {
			cout << "Not inserted !!! List is full." << endl;
			return;
		}

		car_Array[this->car_Count] = Car;
		this->car_Count++;
	}

	void remove(T Car) {
		if (this->isEmpty()) return;
		for (int i = 0; i < this->car_Count; i++) {
			if (Car == car_Array[i]) {
				car_Array[i] = car_Array[car_Count - 1];
				this->car_Count--;
				return;
			}
		}
	}

	void makeEmpty() {
		this->car_Count = 0;
	}

	void print() const {
		cout << endl;
		for (int i = 0; i < this->car_Count; i++) {
			cout << car_Array[i] << " " << endl;
		}
			cout << endl;
	}

	void car_Remove(int Id) {
		if (this->isEmpty()) {
			cout << "Galaride araba yok ";
			return;
		}
		for (int i = 0; i < this->car_Count; i++) {
			if (Id == car_Array[i].Getcar_Id()) {
				car_Array[i] = car_Array[car_Count - 1];
				this->car_Count--;
				return;
			}
		}
		cout << "yanlýþ Id girdiniz";
		return;
	}

	void find_Car(int Id)
	{
		if (this->isEmpty()) return false;
		for (int i = 0; i < this->car_Count; i++) {
			if (Id == car_Array[i].Getcar_Id()) {
				cout << car_Array[i];
			}
		}
			
	}
	void car_Sort_By_Id()
	{
		T tmp;
		for (int i = 0; i < car_Count - 1; i++)
			for (int j = i + 1; j < car_Count; j++)
				if (car_Array[i].Getcar_Id() > car_Array[j].Getcar_Id())
				{
					tmp = car_Array[i];
					car_Array[i] = car_Array[j];
					car_Array[j] = tmp;
				}
		
	}
	void car_Sort_By_Price()
	{
		T tmp;
		for (int i = 0; i < car_Count - 1; i++)
			for (int j = i + 1; j < car_Count; j++)
				if (car_Array[i].Getcar_Price() > car_Array[j].Getcar_Price())
				{
					tmp = car_Array[i];
					car_Array[i] = car_Array[j];
					car_Array[j] = tmp;
				}

	}

};