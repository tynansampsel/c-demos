
#include <stdio.h>
#include <time.h>

displaytime() {
	struct tm local;
    time_t currentTime;
    time(&currentTime);
    //localtime_s(&local, &currentTime);
	printf("Seconds from the epoch is %d", currentTime);

	return 0;
}