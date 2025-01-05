#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

// Function to handle SSH connection
void connectToServer(const string& server, const string& password) {
    string command = "sshpass -p '" + password + "' ssh " + server;

    // Execute the SSH command
    int result = system(command.c_str());

    if (result != 0) {
        cerr << "\nSSH connection failed with error code " << result << endl;
    } else {
        cout << "\nConnected successfully to " << server << "!" << endl;
    }
}

// Function to display a cool CLI menu
void displayMenu() {
    cout << "\n==============================" << endl;
    cout << "      SSH Connection Menu     " << endl;
    cout << "==============================" << endl;
    cout << setw(3) << "1. Infinite Void" << endl;
    cout << setw(3) << "2. Infinite Void Remote" << endl;
    cout << setw(3) << "3. Raspberry Pi" << endl;
    cout << setw(3) << "4. Raspberry Pi 5" << endl;
    cout << setw(3) << "5. Enter Host Manually" << endl;
    cout << setw(3) << "6. Exit" << endl;
    cout << "==============================" << endl;
    cout << "Enter your choice: ";
}

// Main program logic
int main() {
    string password = "Hyma1491$$";  // Replace with your SSH password
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                connectToServer("yeti@infinitevoid", password);
                break;
            case 2:
                connectToServer("yeti@infinitevoidremote", password);
                break;
            case 3:
                connectToServer("yeti@raspberrypi", password);
                break;
            case 4:
                connectToServer("yeti@raspberrypi5", password);
                break;
            case 5: {
                string customServer;
                cout << "\nEnter the hostname or IP address: ";
                cin >> customServer;
                connectToServer(customServer, password);
                break;
            }
            case 6:
                cout << "\nExiting. Goodbye!" << endl;
                break;
            default:
                cerr << "\nInvalid option! Please try again." << endl;
        }

    } while (choice != 6);

    return 0;
}