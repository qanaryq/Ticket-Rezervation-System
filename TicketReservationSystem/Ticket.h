#ifndef TICKET_H
#define TICKET_H

#include <string>

using namespace std;

class Ticket {
    private:
        int ticketID;
        string personFirstName;
        string personLastName;
        string activityName;

    public:
        Ticket(int TicketID, string PersonFirstName, string PersonLastName, string ActivityName) {
            setTicketID(TicketID);
            setPersonFirstName(PersonFirstName);
            setPersonLastName(PersonLastName);
            setActivityName(ActivityName);
        };

        int getTicketID();
        void setTicketID(int TicketID);
        string getPersonFirstName();
        void setPersonFirstName(string PersonFirstName);
        string getPersonLastName();
        void setPersonLastName(string PersonLastName);
        string getActivityName();
        void setActivityName(string ActivityName);

        void saveTicket();
        void showTickets();
};


#endif //TICKET_H
