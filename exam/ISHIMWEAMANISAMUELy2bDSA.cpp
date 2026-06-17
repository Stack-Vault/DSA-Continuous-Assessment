#include <iostream>
using namespace std;


struct Patient {
    int patient_id;
    string name;
    string dob;
    string gender;
    Patient* next;
};


struct Doctor {
    int doctor_id;
    string name;
    string specialization;
    Doctor* next;
};

struct Appointment {
    int appointment_id;
    int patient_id;
    int doctor_id;
    string appointment_date;
    Appointment* next;
};

Patient* patientHead = NULL;
Doctor* doctorHead = NULL;
Appointment* appointmentHead = NULL;

bool patientExists(int id) {
    Patient* temp = patientHead;

    while (temp != NULL) {
        if (temp->patient_id == id)
            return true;
        temp = temp->next;
    }

    return false;
}


bool doctorExists(int id) {
    Doctor* temp = doctorHead;

    while (temp != NULL) {
        if (temp->doctor_id == id)
            return true;
        temp = temp->next;
    }

    return false;
}


bool appointmentExists(int id) {
    Appointment* temp = appointmentHead;

    while (temp != NULL) {
        if (temp->appointment_id == id)
            return true;
        temp = temp->next;
    }

    return false;
}


void registerPatient() {
    Patient* p = new Patient();

    cout << "\nPATIENT REGISTRATION";
    cout << "\n----------------------";
    cout << "\nEnter Patient ID: ";
    cin >> p->patient_id;

    if (patientExists(p->patient_id)) {
        cout << "Patient ID already exists!\n";
        delete p;
        return;
    }

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, p->name);

    cout << "Enter Date of Birth: ";
    getline(cin, p->dob);

    cout << "Enter Gender: ";
    getline(cin, p->gender);

    p->next = patientHead;
    patientHead = p;

    cout << "Patient registered successfully.\n";
}


void registerDoctor() {
    Doctor* d = new Doctor();

    cout << "\nDOCTOR REGISTRATION";
    cout << "\n----------------------";
    cout << "\nEnter Doctor ID: ";
    cin >> d->doctor_id;

    if (doctorExists(d->doctor_id)) {
        cout << "Doctor ID already exists!\n";
        delete d;
        return;
    }

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, d->name);

    cout << "Enter Specialization: ";
    getline(cin, d->specialization);

    d->next = doctorHead;
    doctorHead = d;

    cout << "Doctor registered successfully.\n";
}


void registerAppointment() {
    Appointment* a = new Appointment();

    cout << "\nAPPOINTMENT REGISTRATION";
    cout << "\n----------------------";
    cout << "\nEnter Appointment ID: ";
    cin >> a->appointment_id;

    if (appointmentExists(a->appointment_id)) {
        cout << "Appointment ID already exists!\n";
        delete a;
        return;
    }

    cout << "Enter Patient ID: ";
    cin >> a->patient_id;

    if (!patientExists(a->patient_id)) {
        cout << "Patient ID does not exist!\n";
        delete a;
        return;
    }

    cout << "Enter Doctor ID: ";
    cin >> a->doctor_id;

    if (!doctorExists(a->doctor_id)) {
        cout << "Doctor ID does not exist!\n";
        delete a;
        return;
    }

    cin.ignore();

    cout << "Enter Appointment Date: ";
    getline(cin, a->appointment_date);

    a->next = appointmentHead;
    appointmentHead = a;

    cout << "Appointment registered successfully.\n";
}


void displayPatients() {
    Patient* temp = patientHead;

    cout << "\n===== PATIENTS =====\n";

    if (temp == NULL) {
        cout << "No patients found.\n";
        return;
    }

    while (temp != NULL) {
        cout << "ID: " << temp->patient_id
             << ", Name: " << temp->name
             << ", DOB: " << temp->dob
             << ", Gender: " << temp->gender << endl;

        temp = temp->next;
    }
}


void displayDoctors() {
    Doctor* temp = doctorHead;

    cout << "\n===== DOCTORS =====\n";

    if (temp == NULL) {
        cout << "No doctors found.\n";
        return;
    }

    while (temp != NULL) {
        cout << "ID: " << temp->doctor_id
             << ", Name: " << temp->name
             << ", Specialization: " << temp->specialization << endl;

        temp = temp->next;
    }
}

void displayAppointments() {
    Appointment* temp = appointmentHead;

    cout << "\n===== APPOINTMENTS =====\n";

    if (temp == NULL) {
        cout << "No appointments found.\n";
        return;
    }

    while (temp != NULL) {
        cout << "Appointment ID: " << temp->appointment_id
             << ", Patient ID: " << temp->patient_id
             << ", Doctor ID: " << temp->doctor_id
             << ", Date: " << temp->appointment_date << endl;

        temp = temp->next;
    }
}

// Main Function
int main() {
    int choice;

    do {
        cout << "\n====================================";
        cout << "\nRUHENGERI REFERRAL HOSPITAL SYSTEM";
        cout << "\n====================================";
        cout << "\n1. Register Patient";
        cout << "\n2. Register Doctor";
        cout << "\n3. Register Appointment";
        cout << "\n4. Display Patients";
        cout << "\n5. Display Doctors";
        cout << "\n6. Display Appointments";
        cout << "\n7. Exit";
        cout << "\n\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                registerPatient();
                break;

            case 2:
                registerDoctor();
                break;

            case 3:
                registerAppointment();
                break;

            case 4:
                displayPatients();
                break;

            case 5:
                displayDoctors();
                break;

            case 6:
                displayAppointments();
                break;

            case 7:
                cout << "Thank you for using the system.\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 7);

    return 0;
}