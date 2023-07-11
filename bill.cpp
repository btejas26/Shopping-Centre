#include<bits/stdc++.h>
using namespace std;

class shop {
private:
	int pdt_code;
	float pdt_price;
	float dis;
	string pdt_name;

public:
	void menu();
	void admin();
	void customer();
	void add_pdt();
	void modify_pdt();
	void remove_pdt();
	void list();
	void receipt();

};

void shop::menu() {
m:
	int choice;
	string username;
	string password;

	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|                  Shopping Bazaar Menu               |\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|   1. Admin                                          |\n";
	cout << "\t\t\t\t|   2. Customer                                       |\n";
	cout << "\t\t\t\t|   3. Exit                                           |\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|   Please Select your Choice.                        |\n";
	cin >> choice;

	switch (choice) {
	case 1:
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|                  Please Login                       |\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|   Enter Username :                                  |\n";
		cin >> username;
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|                  Please Login                       |\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|   Enter Password :                                  |\n";
		cin >> password;

		if (username == "tejasbhale@email.com" && password == "12345678") {
			admin();
		}
		else {
			cout << "\t\t\t\t|_____________________________________________________|\n";
			cout << "\t\t\t\t|_____________________________________________________|\n";
			cout << "\t\t\t\t|                  Shopping Bazaar Menu               |\n";
			cout << "\t\t\t\t|_____________________________________________________|\n";
			cout << "\t\t\t\t|_____________________________________________________|\n";
			cout << "\t\t\t\t|   				   ATTENTION REQUIRED              |\n";
			cout << "\t\t\t\t|   					 INVALID EMAIL!!               |\n";
			cout << "\t\t\t\t|                                              	   |\n";
			cout << "\t\t\t\t|_____________________________________________________|\n";
			cout << "\t\t\t\t|_____________________________________________________|\n";

		}

	case 2:
	{
		customer();
	}
	case 3:
	{
		exit(0);
	}
	default:
	{
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|                  Shopping Bazaar Menu               |\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|   			  Please enter a VALID choice          |\n";
		cout << "\t\t\t\t|                                              	   |\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
	}
	}
	goto m;
}
void shop::admin() {
m:
	int choice;
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|                  Shopping Bazaar Menu               |\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|   			           Admin Menu                  |\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|   1. Add the product                                |\n";
	cout << "\t\t\t\t|   2. Modify the product                             |\n";
	cout << "\t\t\t\t|   3. Delete the product                             |\n";
	cout << "\t\t\t\t|   4. Back to Main Menu                              |\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|Enter your choice                                    |\n";
	cin >> choice;

	switch (choice) {
	case 1:
		add_pdt();
		break;
	case 2:
		modify_pdt();
		break;
	case 3:
		remove_pdt();
		break;
	case 4:
		menu();
		break;
	default:
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|                  Shopping Bazaar Menu               |\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|   			  Please enter a VALID choice          |\n";
		cout << "\t\t\t\t|                                              	   |\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";


	}
	goto m;

}

void shop::customer() {
m:
	int choice;
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|                  Shopping Bazaar Menu               |\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|   			           Customer                    |\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|   1. Buy Product                                    |\n";
	cout << "\t\t\t\t|   2. Back to Main Menu                              |\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|Enter your choice                                    |\n";
	cin >> choice;

	switch (choice) {
	case 1:
		receipt();
		break;
	case 2:
		menu();
	default:
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|                  Shopping Bazaar Menu               |\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|   			  Please enter a VALID choice          |\n";
		cout << "\t\t\t\t|                                              	   |\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
	}
	goto m;

}

void shop::add_pdt() {
m:
	fstream input;
	int k;
	int token = 0;
	float x;
	float y;
	string s;
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|                  Shopping Bazaar Menu               |\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|   			           Admin Menu                  |\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|   Add new product                                   |\n";
	cout << "\t\t\t\t|   Enter Product Code                                |\n";
	cin >> pdt_code;
	cout << "\t\t\t\t|   Enter the Name of the Product                     |\n";
	cin >> pdt_name;
	cout << "\t\t\t\t|   Enter the Price of the Product                    |\n";
	cin >> pdt_price;
	cout << "\t\t\t\t|   Enter the Discount on the Product                 |\n";
	cin >> dis;

	input.open("pdt_list.txt", ios::in);
	if (!input) {
		input.open("pdt_list.txt", ios::app | ios::out);
		input << " " << pdt_code << ", " << pdt_name << ", " << pdt_price << ", " << dis << "." << endl;
	}
	else {
		input >> k >> s >> x >> y;
		while (!input.eof()) {
			if (k == pdt_code) {
				token++;
			}
			input >> k >> s >> x >> y;
		}
		input.close();
	}
	if (token == 1) {
		goto m;
	}
	else {
		input.open("pdt_list.txt", ios::app | ios::out);
		input << " " << pdt_code << " " << pdt_name << " " << pdt_price << " " << dis << endl;
		input.close();
	}
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|                  Shopping Bazaar Menu               |\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|   			           Admin Menu                  |\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|   			        Record Inserted                |\n";
	cout << "\t\t\t\t|                                              	   |\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";

}

void shop::modify_pdt() {
	fstream input, input1;
	int pdt_key;
	int token = 0;
	int k;
	float x;
	float y;
	string s;
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|                  Shopping Bazaar Menu               |\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|   			           Admin Menu                  |\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|   Modify the product                                |\n";
	cout << "\t\t\t\t|   Enter Product Code                                |\n";
	cin >> pdt_key;
	input.open("pdt_list.txt", ios::in);
	if (!input) {
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|                  Shopping Bazaar Menu               |\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|   			       File Doesn't Exist!             |\n";
		cout << "\t\t\t\t|                                              	   |\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
	}
	else {
		input1.open("pdt_list1.txt", ios::app | ios::out);
		input >> pdt_code >> pdt_name >> pdt_price >> dis;
		while (!input.eof()) {
			if (pdt_key == pdt_code) {
				cout << "\t\t\t\t|_____________________________________________________|\n";
				cout << "\t\t\t\t|_____________________________________________________|\n";
				cout << "\t\t\t\t|                  Shopping Bazaar Menu               |\n";
				cout << "\t\t\t\t|_____________________________________________________|\n";
				cout << "\t\t\t\t|_____________________________________________________|\n";
				cout << "\t\t\t\t|   			           Admin Menu                  |\n";
				cout << "\t\t\t\t|_____________________________________________________|\n";
				cout << "\t\t\t\t|_____________________________________________________|\n";
				cout << "\t\t\t\t|   Enter Product New Code                            |\n";
				cin >> k;
				cout << "\t\t\t\t|   Enter the Name of the Product                     |\n";
				cin >> s;
				cout << "\t\t\t\t|   Enter the Price of the Product                    |\n";
				cin >> x;
				cout << "\t\t\t\t|   Enter the Discount on the Product                 |\n";
				cin >> y;
				cout << "\t\t\t\t|_____________________________________________________|\n";
				cout << "\t\t\t\t|_____________________________________________________|\n";
				cout << "\t\t\t\t|                  Shopping Bazaar Menu               |\n";
				cout << "\t\t\t\t|_____________________________________________________|\n";
				cout << "\t\t\t\t|_____________________________________________________|\n";
				cout << "\t\t\t\t|   			           Admin Menu                  |\n";
				cout << "\t\t\t\t|_____________________________________________________|\n";
				cout << "\t\t\t\t|_____________________________________________________|\n";
				cout << "\t\t\t\t|   			        Record Modified                |\n";
				cout << "\t\t\t\t|                                              	   |\n";
				cout << "\t\t\t\t|_____________________________________________________|\n";
				cout << "\t\t\t\t|_____________________________________________________|\n";
			}
			else {
				input1 << " " << pdt_code << " " << pdt_name << " " << dis << endl;
			}
			input >> pdt_code >> pdt_name >> pdt_price >> dis;
		}
		input.close();
		input1.close();
		remove("pdt_list.txt");
		rename("pdt_list1.txt", "pdt_list.txt");

		if (token == 0) {
			cout << "\t\t\t\t|_____________________________________________________|\n";
			cout << "\t\t\t\t|_____________________________________________________|\n";
			cout << "\t\t\t\t|                  Shopping Bazaar Menu               |\n";
			cout << "\t\t\t\t|_____________________________________________________|\n";
			cout << "\t\t\t\t|_____________________________________________________|\n";
			cout << "\t\t\t\t|   			           Admin Menu                  |\n";
			cout << "\t\t\t\t|_____________________________________________________|\n";
			cout << "\t\t\t\t|_____________________________________________________|\n";
			cout << "\t\t\t\t|   			    Record Not found Sorry!            |\n";
			cout << "\t\t\t\t|                                              	   |\n";
			cout << "\t\t\t\t|_____________________________________________________|\n";
			cout << "\t\t\t\t|_____________________________________________________|\n";
		}

	}

}

void shop::remove_pdt() {
	fstream input, input1;
	int pdt_key;
	int token = 0;
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|                  Shopping Bazaar Menu               |\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|   			           Admin Menu                  |\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|   			         Delete Product                |\n";
	cout << "\t\t\t\t|Enter Product Code:                                  |\n";
	cin >> pdt_key;
	input.open("pdt_list.txt", ios::in);
	if (!input) {
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|                  Shopping Bazaar Menu               |\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|   			       File Doesn't Exist!             |\n";
		cout << "\t\t\t\t|                                              	   |\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
	}
	else {
		input1.open("pdt_list1.txt", ios::app | ios::out);
		input >> pdt_code >> pdt_name >> pdt_price >> dis;
		while (!input.eof()) {
			if (pdt_code == pdt_key) {
				cout << "\t\t\t\t|_____________________________________________________|\n";
				cout << "\t\t\t\t|_____________________________________________________|\n";
				cout << "\t\t\t\t|                  Shopping Bazaar Menu               |\n";
				cout << "\t\t\t\t|_____________________________________________________|\n";
				cout << "\t\t\t\t|_____________________________________________________|\n";
				cout << "\t\t\t\t|   			           Admin Menu                  |\n";
				cout << "\t\t\t\t|_____________________________________________________|\n";
				cout << "\t\t\t\t|_____________________________________________________|\n";
				cout << "\t\t\t\t|   			  Product Deleted Successfully!!       |\n";
				cout << "\t\t\t\t|                                              	   |\n";
				cout << "\t\t\t\t|_____________________________________________________|\n";
				cout << "\t\t\t\t|_____________________________________________________|\n";
				token++;
			}
			else {
				input1 << " " << pdt_code << " " << pdt_name << " " << pdt_price << " " << dis << endl;
			}
			input >> pdt_code >> pdt_name >> pdt_price >> dis;
		}
		input.close();
		input1.close();
		remove("pdt_list.txt");
		rename("pdt_list1.txt", "pdt_list.txt");
		if (token == 0) {
			cout << "\t\t\t\t|_____________________________________________________|\n";
			cout << "\t\t\t\t|_____________________________________________________|\n";
			cout << "\t\t\t\t|                  Shopping Bazaar Menu               |\n";
			cout << "\t\t\t\t|_____________________________________________________|\n";
			cout << "\t\t\t\t|_____________________________________________________|\n";
			cout << "\t\t\t\t|   			           Admin Menu                  |\n";
			cout << "\t\t\t\t|_____________________________________________________|\n";
			cout << "\t\t\t\t|_____________________________________________________|\n";
			cout << "\t\t\t\t|   			    Record Not found Sorry!            |\n";
			cout << "\t\t\t\t|                                              	   |\n";
			cout << "\t\t\t\t|_____________________________________________________|\n";
			cout << "\t\t\t\t|_____________________________________________________|\n";

		}
	}

}
void shop::list() {
	fstream input ;
	input.open("pdt_list.txt", ios::in);
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|                  Shopping Bazaar Menu               |\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|   			              List                     |\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|Pdt_No.\tPdt_Name\tPdt_Price                         |\n";
	while (!input.eof()) {
		cout << pdt_code << "\t" << pdt_name << "\t" << pdt_price << endl;
		input >> pdt_code >> pdt_name >> pdt_price >> dis;
	}
	input.close();
}
void shop::receipt() {
	fstream input;
	int codes[100];
	int quantity[100];
	char choice;
	int k = 0;
	float amt = 0;
	float dis = 0;
	float total = 0;
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|                  Shopping Bazaar Menu               |\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|   			            Receipt                    |\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	cout << "\t\t\t\t|_____________________________________________________|\n";
	input.open("pdt_list", ios::in);
	if (!input) {
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|                  Shopping Bazaar Menu               |\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|   			          Empty List                   |\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
	}
	else {
		input.close();
		list();
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|   			        Place the Order                |\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
		cout << "\t\t\t\t|_____________________________________________________|\n";
		do {
m:
			cout << "Enter Product Code: ";
			cin >> codes[k];
			cout << "Enter the Product quantity: ";
			cin >> quantity[k];
			for (int i = 0; i < k; i++) {
				if (codes[k] == codes[i]) {
					cout << "\t\t\t\t|_____________________________________________________|\n";
					cout << "\t\t\t\t|_____________________________________________________|\n";
					cout << "\t\t\t\t|Duplicate product code. Please try again!!           |\n";
					cout << "\t\t\t\t|_____________________________________________________|\n";
					cout << "\t\t\t\t|_____________________________________________________|\n";
					goto m;
				}

			}
			k++;
			cout << "\t\t\t\t|_____________________________________________________|\n";
			cout << "\t\t\t\t|_____________________________________________________|\n";
			cout << "\t\t\t\t|Do you want to buy another product? if yes then press|\n";
			cout << "\t\t\t\t|y else no    										   |\n";
			cout << "\t\t\t\t|_____________________________________________________|\n";
			cout << "\t\t\t\t|_____________________________________________________|\n";
			cin >> choice;
		}
		while (choice == 'y');

		cout << "\t\t\t\t|____________________________________________________________________|\n";
		cout << "\t\t\t\t|                         Shopping Bazaar Menu              	      |\n";
		cout << "\t\t\t\t|____________________________________________________________________|\n";
		cout << "\t\t\t\t|____________________________________________________________________|\n";
		cout << "\t\t\t\t|   			                   Receipt                            |\n";
		cout << "\t\t\t\t|____________________________________________________________________|\n";
		cout << "\t\t\t\t|____________________________________________________________________|\n";
		cout << "Pdt_No.\t Pdt_Name\t Pdt_Quantity\t Pdt_Price\t T_Amount\t Total with Discount\n";

		for (int i = 0; i < k; i++) {
			input.open("pdt_list.txt", ios::in);
			input >> pdt_code >> pdt_name >> pdt_price >> dis;
			while (!input.eof()) {
				if (pdt_code == codes[i]) {
					amt = pdt_price * codes[i];
					dis = amt - (amt * dis / 100);
					total = total + dis;
					cout << "\n" << pdt_code << "\t" << pdt_name << "\t" << codes[i] << "\t" << pdt_price << "\t" << amt << "\t" << dis;
				}
				input >> pdt_code >> pdt_name >> pdt_price >> dis;
			}
		}
		input.close();

	}
	cout << "\n Total Amount : " << total << endl;
}

int main() {
	shop s;
	s.menu();
	return 0;
}