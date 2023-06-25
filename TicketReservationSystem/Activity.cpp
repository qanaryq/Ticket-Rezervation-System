#include "Activity.h"

#include <iostream>
#include <fstream>

using namespace std;

string Activity::getActivityName() {
    return activityName;
}

void Activity::setActivityName(string Name) {
    this -> activityName = Name;
}

string Activity::getActivityDate() {
    return activityDate;
}

void Activity::setActivityDate(string Date) {
    this -> activityDate = Date;
}

int Activity::getActivityCapacity() {
    return ticketCapacity;
}

void Activity::setActivityCapacity(int Capacity) {
    this -> ticketCapacity = Capacity;
}

vector<Ticket> Activity::getActivityTickets() {
    return tickets;
}

void Activity::setActivityTickets(vector<Ticket> Tickets) {
    this -> tickets = Tickets;
}

void Activity::saveActivity() {
    ofstream fileOut;
    fileOut.open("activities.txt", ios::out|ios::app);
    if (!fileOut) {
        cout << "File cannot be opened.";
        fileOut.close();
        return;
    }

    fileOut << getActivityName() << "\t" << getActivityDate() << "\t" << getActivityCapacity() << "\n";
    fileOut.close();
}

void Activity::showActivities() {
    ifstream fileIn;
    fileIn.open("activities.txt", ios::in);
    if (!fileIn) {
        cout << "File cannot be opened.";
        fileIn.close();
        return;
    }

    string tempActivityName;
    string tempActivityDate;
    string tempActivityCapacity;

    cout << "Activity Name" << " | " << "Activity Date" << " | " << "Activity Capacity" << "\n";
    for (int i=0; i<49; i++) {
        cout << "-";
    }
    cout << "\n";

    fileIn >> tempActivityName >> tempActivityDate >> tempActivityCapacity;
    while (!fileIn.eof()) {
        cout << tempActivityName << "\t\t" << tempActivityDate << "\t\t" << tempActivityCapacity << "\n";
        fileIn >> tempActivityName >> tempActivityDate >> tempActivityCapacity;
    }
    fileIn.close();
}
