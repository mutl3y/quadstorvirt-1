#ifndef DISKINFO_H_
#define DISKINFO_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/ioctl.h>
#include <unistd.h>

dev_t get_device_id(char *devname, int *error);
int disk_getsize(char *device, uint64_t *size);

#endif /* DISKINFO_H_ */
