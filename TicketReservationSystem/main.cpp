#include <iostream>

using namespace std;

#include "Ticket.h"
#include "Activity.h"


int main() {
    Ticket myTicket1 = Ticket(1, "Cem", "kk", "Concert");
    Ticket myTicket2 = Ticket(2, "Selim", "kk", "Festival");

    myTicket1.saveTicket();
    myTicket2.saveTicket();

    Activity myActivity1 = Activity("Concert", "26.03.2023", 150);
    Activity myActivity2 = Activity("Music", "27.03.2023", 200);

    myActivity1.saveActivity();
    myActivity2.saveActivity();

    myTicket1.showTickets();
    cout << "\n";
    myActivity1.showActivities();

    return 0;
}
