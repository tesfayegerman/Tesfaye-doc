#include <iostream>
#include <string>

using namespace std;

void sendMoneyMenu();
void cashOutMenu();
void myAccountMenu();

void sendMoney() {
	string phoneNumber;
	double amount;
	int pin, confirm;

	cout << "Enter receiver phone number: ";
	cin >> phoneNumber;
	cout << "Enter amount: ";
	cin >> amount;
	cout << "Enter PIN: ";
	cin >> pin;

	cout << "1. OK\n0. Cancel\nChoose: ";
	cin >> confirm;

	if (confirm == 1) {
		cout << "Transaction successful.\n";
	} else {
		cout << "Transaction canceled.\n";
	}
}

void transferToCBEAccount() {
	string accountNumber;
	double amount;
	int pin, confirm;

	cout << "Enter CBE bank account number: ";
	cin >> accountNumber;
	cout << "Enter amount: ";
	cin >> amount;
	cout << "Enter PIN: ";
	cin >> pin;

	cout << "1. OK\n0. Cancel\nChoose: ";
	cin >> confirm;

	if (confirm == 1) {
		cout << "Transaction successful.\n";
	} else {
		cout << "Transaction canceled.\n";
	}
}

void sendMoneyMenu() {
	int choice;
	cout << "1. Send Money\n2. Transfer to CBE Account\nChoose: ";
	cin >> choice;

	switch (choice) {
		case 1:
			sendMoney();
			break;
		case 2:
			transferToCBEAccount();
			break;
		default:
			cout << "Invalid option.\n";
	}
}

void requestATMWithdrawVoucher() {
	int option, pin;
	double amount;
	string receiverPhoneNumber;

	cout << "1. For yourself\n2. For others\nChoose: ";
	cin >> option;

	if (option == 1) {
		cout << "Enter amount (less than 4001 Birr): ";
		cin >> amount;
		cout << "Enter PIN: ";
		cin >> pin;
		cout << "1. OK\n0. Cancel\nChoose: ";
		cin >> option;

		if (option == 1) {
			cout << "Your request is being processed. Please wait for CBE Birr confirmation message.\n";
		} else {
			cout << "Request canceled.\n";
		}
	} else if (option == 2) {
		cout << "Enter receiver's phone number: ";
		cin >> receiverPhoneNumber;
		cout << "Enter amount (less than 4001 Birr, multiple of 100): ";
		cin >> amount;
		cout << "Enter PIN: ";
		cin >> pin;
		cout << "1. OK\n0. Cancel\nChoose: ";
		cin >> option;

		if (option == 1) {
			cout << "Your request is being processed. Please wait for CBE Birr confirmation message.\n";
		} else {
			cout << "Request canceled.\n";
		}
	} else {
		cout << "Invalid option.\n";
	}
}

void cashOutMenu() {
	int choice;
	cout << "1. Request ATM Withdraw Voucher\n2. Cash Out at Agent\n3. Apply Cash Out at Branch Voucher\n* Back\nChoose: ";
	cin >> choice;

	switch (choice) {
		case 1:
			requestATMWithdrawVoucher();
			break;
		case 2:
			cout << "Cash Out at Agent menu under development.\n";
			break;
		case 3:
			cout << "Apply Cash Out at Branch Voucher menu under development.\n";
			break;
		default:
			cout << "Invalid option.\n";
	}
}

void myAccountMenu() {
	int choice;
	cout << "1. Balance\n2. Mini Statement\n3. Change PIN\n4. Change Language\n5. Change Secret Word\n6. Manage Beneficiary\n* Back\nChoose: ";
	cin >> choice;

	switch (choice) {
		case 1:
		case 2:
			cout << "Enter PIN: ";
			int pin;
			cin >> pin;
			cout << "Your request is being processed. Please wait for CBE Birr confirmation message.\n";
			break;
		case 3:
			cout << "Change PIN functionality under development.\n";
			break;
		default:
			cout << "Invalid option.\n";
	}
}

int main() {
	int mainMenuChoice;

	cout << "*847#\nWelcome to CBE Birr\n";

	do {
		cout << "1. Send Money\n2. Cash Out\n3. My Account\n* Back\nChoose: ";
		cin >> mainMenuChoice;

		switch (mainMenuChoice) {
			case 1:
				sendMoneyMenu();
				break;
			case 2:
				cashOutMenu();
				break;
			case 3:
				myAccountMenu();
				break;
			default:
				cout << "Invalid option.\n";
		}
	} while (mainMenuChoice != 0);

	cout << "Thank you for using CBE Birr.\n";
	return 0;
}
