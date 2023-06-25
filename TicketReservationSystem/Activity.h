#ifndef ACTIVITY_H
#define ACTIVITY_H

#include <string>
#include <vector>

#include "Ticket.h"

using namespace std;

class Activity {
    private:
        string activityName;
        string activityDate;
        int ticketCapacity;
        vector<Ticket> tickets;

    public:
        Activity(string ActivityName, string ActivityDate, int ActivityCapacity)
                : activityName(ActivityName), activityDate(ActivityDate), ticketCapacity(ActivityCapacity) {};

        string getActivityName();
        void setActivityName(string Name);
        string getActivityDate();
        void setActivityDate(string Date);
        int getActivityCapacity();
        void setActivityCapacity(int Capacity);
        vector<Ticket> getActivityTickets();
        void setActivityTickets(vector<Ticket> Tickets);

        void saveActivity();
        void showActivities();
};


#endif //ACTIVITY_H
