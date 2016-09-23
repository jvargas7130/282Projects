//Jesus Vargas
//CECS 282 LAB41
#include<fstream>
#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

//publication class which derives two classes
class Publication {
private:
	 string title;
	 int price;
	 char ch;
 public:
	 void getData() {
		 cout << "Please Enter title" << endl;
		 getline(cin,title);

		 cout << "Please Enter price" << endl;
		 cin >> price;
		 ch = cin.get();
	 }
	 void putData() {
		 cout << "Title: " << title << endl;
		 cout << "Price: $" << price << endl;
	 }

};

class Sales {
private:
	 
	float  dollarSales[3];
	char ch;
public:
	void getData() {
		int sale;

		for (int i = 0; i < 3; i++) {
			cout << "Enter sale" <<endl;
			cin >> sale;
			ch = cin.get();
			dollarSales[i] = sale;
		}
		
		
	}

	void putData() {
		int counter = 1;
		for (int i = 0; i < 3; i++) {
			cout << "Month "<< counter<<"........$"<< dollarSales[i] << endl;
			counter++;
		}
	  

	}
};

class Book:public Publication, public Sales {
private: 
		int page;
	

public:
	void getData() {

		cout << "Book" << endl;
		Publication::getData();
	
		cout << "Please Enter  pages" << endl;
		cin >> page;
	
	
	
		Sales::getData();
		
		}

		void putData() {

			cout << "\n";
			cout << "Book info"<<endl;
			Publication::putData();
			Sales::putData();
			
			cout << "Pages: " << page << endl;
			
		}

};

class digitalBook:public Publication, public Sales {
private:
	int storageCapacity;
public:
		void getData() {
			cout << "\n";
			cout << "Digital Book" << endl;
			Publication::getData();
		
		
			cout << "Please Enter Storage: " << endl;
			cin >> storageCapacity;
	
			Sales::getData();
		
		 }

		 void putData() {
			 cout << "\n";
			 cout << "DigitalBook info"<<endl ;
			 Publication::putData();
			 Sales::putData();
			 cout << "Storage Capacity: " << storageCapacity << " MG Bytes"<< endl;
			
		 }

};






int main(){

	Book b;
	digitalBook db;
	b.getData();
	db.getData();
	
	b.putData();
	db.putData();

	system("pause");
	return 0;
}