#ifndef HOTELDATABASE_H_INCLUDED
#define HOTELDATABASE_H_INCLUDED

// Declare some constants
#define GUEST_NUM  50
#define ROOM_NUM   100

//////////////////////////////////////
typedef struct Hotel hotel;
struct Hotel {
	char fname[GUEST_NUM];
	char lname[GUEST_NUM];
	int stayDuration;
	float totalCost;
	int roomID[ROOM_NUM];
};

#endif // HOTELDATABASE_H_INCLUDED
