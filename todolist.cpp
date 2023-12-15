#include <iostream>
#include <vector>
using namespace std;

vector<string> tasks;   // define vector outside of int main so all functions can access it without declaring parameters

void addTask() {
    string description;
    cout << "Enter your task description: ";
    getline(cin, description);
    tasks.push_back(description);  // adds description to first vector index and any subsequent entries will be put on the end in order.
    cout << "Task added!" << endl;
}

void displayTasks() {
    cout << "Tasks:" << endl;
    
    for (int i = 0; i < tasks.size(); i++) {
        cout << tasks[i] << endl;               // displays tasks in order by index
    }
}

void removeTask() {
    int index;
    cout << "Enter task index (0 for 1, 1 for 2, etc) to remove a task: ";
    cin >> index;
    cin.ignore();       // cin.ignore is necessary to negate the program using previous cin's for subsequent functions
    
    if (index >= 0 && index < tasks.size()) { // makes sure that the index entered is viable to removal.
        tasks.erase(tasks.begin() + index);
        cout << "Task removed!" << endl;
    } else {
        cout << "Invalid task input!" << endl;
    }
}

void markTaskAsCompleted() {
    int index;
    cout << "Enter task index (0 for 1, 1 for 2, etc) to mark as completed: ";
    cin >> index;
    cin.ignore();
    
    if (index >= 0 && index < tasks.size()) {
        tasks[index] += " [X]";                         // this appends an x to the end of the task to mark it as complete
        cout << "Task marked as completed!" << endl;
    } else {
        cout << "Invalid task input!" << endl;
    }
}

int main() {
    while (true) {  // will always be true until case 5.
        int choice;
        cout << "1. Add Task" << endl;
        cout << "2. Display Tasks" << endl;
        cout << "3. Remove Task" << endl;
        cout << "4. Mark Task as Completed" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {       // simple switch function to choose between the four options.
            case 1:
                addTask();
                break;
            case 2:
                displayTasks();
                break;
            case 3:
                removeTask();
                break;
            case 4:
                markTaskAsCompleted();
                break;
            case 5:
                return 0;  // returns 0 which means false in a boolean to the while loop, ending it and ending the loop.
            default:
                cout << "Invalid choice! Please enter a valid choice." << endl;
        }
    }

    return 0;    // this then ends the program.
}