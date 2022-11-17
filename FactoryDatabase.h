#ifndef FACTORYDATABASE_H_INCLUDED
#define FACTORYDATABASE_H_INCLUDED

// Declare some constants
#define WORKER_NUM  50
#define PRODUCT_NUM   10

//////////////////////////////////////
typedef struct Factory factory;
struct Factory {
	char fname[WORKER_NUM];
	char lname[WORKER_NUM];
	int worker_hours;
	float product_price;
	int product_id[PRODUCT_NUM];
};

#endif // FACTORYDATABASE_H_INCLUDED
