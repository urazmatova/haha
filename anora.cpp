#include <iostream>
#include <string>

using namespace std;
class Clinic {
public:
	
    string Clinicname;

    void inputclinics() {
        cout << "Vvedite nazvaniya kliniki: ";
        cin >> Clinicname;
    }
};
class Bookingdoctor {
public:
    string Name;
    string Surame;
    string Doctor;
	
    void inputDoctorDetails() {
        cout << "Vvedite imya doktora: ";
        cin >> Name;
        cout << "Vvedite familiya doktora: ";
        cin >> Surame;
        cout << "Vvedite nujnuyu spetsialnost doktora: ";
        cin >> Doctor;
		
    }
};
class Problem {
public:
    string Problemname;

    void inputProblemname() {
        cout << "Vvedite problemu: ";
        cin >> Problemname;
    }
};
class time {
public:
    string time;

    void inputtime() {
        cout << "Vvedite udobnoe vremya: ";
        cin >> time;
    }
};
class DepartureCity {
public:
    string cityName;

    void inputDepartureCity() {
        cout << "Vvedite gorod: ";
        cin >> cityName;
        
    }
};

class Clientname {
public:
    string clientName;

    void inputClientn() {
        cout << "Vvedite vashe imya: ";
        cin >> clientName;
    }
};
class Clientsurname {
public:
    string clientsurname;

    void inputClients() {
        cout << "Vvedite vashu familyu: ";
        cin >> clientsurname;
    }
};

class Number {
public:
    string clientNumber;

    void inputNumber() {
        cout << "Vvedite vash nomer telefona: ";
        cin >> clientNumber;
    }
};

class Adress {
public:
    double Adress;

    void inputAdress() {
        cout <<"Vvedite svoy adress: ";
        cin >> Adress;
    }
};


int main() {
  setlocale(LC_ALL, "Russian");
   
    Clinic myClinic;
    myClinic.inputclinics();
    
	Bookingdoctor myBookingdoctor;
    myBookingdoctor.inputDoctorDetails();

	Problem myProblem;
	myProblem.inputProblemname();
	
    DepartureCity mydeparture;
    mydeparture.inputDepartureCity();
    
    time mytime;
    mytime.inputtime();
    
    Clientname myClientname;
    myClientname.inputClientn();
    
	Clientsurname myClientsurname;
    myClientsurname.inputClients();
    
    Number mynumber;
    mynumber.inputNumber();
    
    Adress myadress;
    myadress.inputAdress();
    
        
    cout << "Vi zabranovali priyom k vrachu" << endl;

    return 0;
}
