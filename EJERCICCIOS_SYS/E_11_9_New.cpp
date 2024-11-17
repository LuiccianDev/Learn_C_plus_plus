#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Worker {
    int code;
    string name;
    double salary; // Hourly wage
    int hoursWorked;
};

// Function to register workers
void RegisterData(vector<Worker>& workers) {
    Worker w;
    cout << "Enter the worker's code: ";
    cin >> w.code;
    cin.ignore(); // Clear the buffer
    cout << "Enter the worker's name: ";
    getline(cin, w.name);
    cout << "Enter the hourly salary: ";
    cin >> w.salary;
    cout << "Enter the hours worked: ";
    cin >> w.hoursWorked;
    workers.push_back(w);
}

// Function to delete a worker by code
void DeleteWorker(vector<Worker>& workers, int code) {
    auto it = std::remove_if(workers.begin(), workers.end(), 
                            [code](Worker& w) { return w.code == code; });
    if (it != workers.end()) {
        workers.erase(it, workers.end());
        cout << "Worker successfully deleted." << endl;
    } else {
        cout << "Code not found." << endl;
    }
}

// Function to show workers sorted by name
void ShowByName(const vector<Worker>& workers) {
    vector<Worker> copy = workers; // Make a copy to sort
    sort(copy.begin(), copy.end(), [](const Worker& a, const Worker& b) {
        return a.name < b.name;
    });
    for (const auto& w : copy) {
        cout << "Code: " << w.code << ", Name: " << w.name << ", Salary: " 
            << w.salary << ", Hours Worked: " << w.hoursWorked << endl;
    }
}

// Function to show workers sorted by total salary
void ShowBySalary(const vector<Worker>& workers) {
    vector<Worker> copy = workers; // Make a copy to sort
    sort(copy.begin(), copy.end(), [](const Worker& a, const Worker& b) {
        double salaryA = a.salary * a.hoursWorked;
        double salaryB = b.salary * b.hoursWorked;
        return salaryA < salaryB;
    });
    for (const auto& w : copy) {
        double salary = w.salary * w.hoursWorked;
        cout << "Code: " << w.code << ", Name: " << w.name << ", Salary: " 
            << salary << endl;
    }
}

int main() {
    vector<Worker> workers;
    int option, code;

    // Interactive menu
    while (true) {
        cout << "Select an option:\n";
        cout << "1. Register worker\n";
        cout << "2. Delete worker by code\n";
        cout << "3. Show workers sorted by name\n";
        cout << "4. Show workers sorted by total salary\n";
        cout << "5. Exit\n";
        cout << "Enter your option: ";
        cin >> option;

        switch (option) {
            case 1:
                RegisterData(workers);
                break;
            case 2:
                cout << "Enter the code of the worker to delete: ";
                cin >> code;
                DeleteWorker(workers, code);
                break;
            case 3:
                ShowByName(workers);
                break;
            case 4:
                ShowBySalary(workers);
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid option." << endl;
        }
    }

    return 0;
}
