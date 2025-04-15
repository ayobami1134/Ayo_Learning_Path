#include <stdio.h>
#include <time.h>

void notification(char *sender, char *message, time_t timestamp); // Function prototype

// no return with arguments
void displayNum(int num) {
    // This function does not return any value and takes an integer argument
    printf("Number: %d\n", num);
}

typedef struct person {
    char *name;
    int age;
    char *address;
    char *phone;
} person;

void displayPerson(person p) {
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Address: %s\n", p.address);
    printf("Phone: %s\n", p.phone);
}

int main() {
    long t = 1744221516;
    struct tm dt = {45, 12, 17, 1, 9, 2023-1900, 0, 0, 0};
    char *sender = "%s is the sender\n";
    char sen[] = "Ayo";
    char d[] = {'A', 'y', 'o', 'b', 'a', 'm', 'i', '\0'};

    person p1 = {"Ayo", 25, "123 Main St, City, Country", "000000000000"};
    person p2 = {"Ayo", 25, "123 Main St, City, Country", "000000000000"};
    person p3 = {"Ayo", 25, "123 Main St, Man City, UK", "0123456789"};
    person p4 = {"Tolu", 5, "123 Main St, Lagos, NG", "000000000000"};
    person p5 = {"Ayo", 25, "123 Main St, City, Country", "000000000000"};

    printf("Year of timestamp: %d\n", localtime(&t)->tm_year + 1900);

    // Function call
    displayPerson(p3);
    displayPerson(p4);

    //print d
    printf("d: %s\n", d);
    printf(sender, sen);
    printf(sender, d);

    // Function call
    displayNum(100); // No return value
    notification("Ayo", "Hello!", mktime(localtime(&t))); // Function call with arguments
    notification("Ayo", "Hello!", mktime(&dt));
    notification("Ayo", "Hello!", time(&t));
    return 0;
}


void notification(char *sender, char *message, time_t timestamp) {
    // This function does not return any value and takes a string and an integer argument
    printf("Timestamp: %ld\n", timestamp);
    printf("Sender: %s\n", sender);
    printf("Notification: %s\n\n", message);
    printf("%s\t\t%s\n", sender, ctime(&timestamp));
    printf("%s\n\n\n", message);
}

// timestamp is a time_t type, which is an integer type that represents the number of seconds since the epoch (00:00:00 UTC on 1 January 1970). The ctime() function converts this time_t value to a human-readable string format. The output will show the sender's name and the message along with the timestamp in a readable format.
// struct tm example
// struct tm {
//     int tm_sec;   // seconds after the minute [0, 59]
//     int tm_min;   // minutes after the hour [0, 59]
//     int tm_hour;  // hours since midnight [0, 23]
//     int tm_mday;  // day of the month [1, 31]
//     int tm_mon;   // months since January [0, 11]
//     int tm_year;  // years since 1900
//     int tm_wday;  // days since Sunday [0, 6]
//     int tm_yday;  // days since January 1 [0, 365]
//     int tm_isdst; // Daylight Saving Time flag
// };

// timestamp to struct tm
// struct tm *localtime(const time_t *timep);
