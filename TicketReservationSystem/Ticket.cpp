#include "Ticket.h"

#include <iostream>
#include <fstream>

using namespace std;

int Ticket::getTicketID() {
    return ticketID;
}

void Ticket::setTicketID(int TicketID) {
    this -> ticketID = TicketID;
}

string Ticket::getPersonFirstName() {
    return personFirstName;
}

void Ticket::setPersonFirstName(string PersonFirstName) {
    this -> personFirstName = PersonFirstName;
}

string Ticket::getPersonLastName() {
    return personLastName;
}

void Ticket::setPersonLastName(string PersonLastName) {
    this -> personLastName = PersonLastName;
}

string Ticket::getActivityName() {
    return activityName;
}

void Ticket::setActivityName(string ActivityName) {
    this -> activityName = ActivityName;
}

void Ticket::saveTicket() {
    ofstream fileOut;
    fileOut.open("tickets.txt", ios::out|ios::app);
    if (!fileOut) {
        cout << "File cannot be opened.";
        fileOut.close();
        return;
    }

    fileOut << getTicketID() << "\t" << getPersonFirstName() << "\t" << getPersonLastName() << "\t" << getActivityName() << "\n";
    fileOut.close();
}

void Ticket::showTickets() {
    ifstream fileIn;
    fileIn.open("tickets.txt", ios::in);
    if (!fileIn) {
        cout << "File cannot be opened.";
        fileIn.close();
        return;
    }

    int tempID;
    string tempPersonFirstName;
    string tempPersonLastName;
    string tempActivityName;

    cout << "Ticket ID" << " | " << "Person First Name" << " | " << "Person Last Name" << " | " << "Activity Name" << "\n";
    for (int i=0; i<64; i++) {
        cout << "-";
    }
    cout << "\n";

    fileIn >> tempID >> tempPersonFirstName >> tempPersonLastName >> tempActivityName;
    while (!fileIn.eof()) {
        cout << tempID << "\t\t" << tempPersonFirstName << "\t\t" << tempPersonLastName << "\t\t" << tempActivityName << "\n";
        fileIn >> tempID >> tempPersonFirstName >> tempPersonLastName >> tempActivityName;
    }
    fileIn.close();
}
