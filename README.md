# Simple-SSH-Menu
This program provides a terminal-based SSH connection manager written in C++. Its primary purpose is to allow the user to easily select and connect to predefined SSH servers or manually enter custom server details.

# Features
-  Predefined SSH Connections: Quickly connect to frequently used servers.
-  Custom Host Option: Manually enter a hostname or IP address.
-  ser-Friendly CLI: Clean, numbered menu for easy navigation.
-  utomated Login: Uses sshpass for password-based SSH connections.

# Dependencies
- sshpass (install with brew install sshpass on macOS or sudo apt install sshpass on Linux)
- g++ (for compilation)

Clone the repository.
2.	Compile the code:

     g++ ssh_manager.cpp -o ssh_manager
3.	Run the program:
   
        ./ssh_manager

Disclaimer

For security, avoid hardcoding passwords. Use SSH key-based authentication instead.
