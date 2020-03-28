#include "head.h"

int make_nonblock_ioctl(int fd) {
    unsigned long ul = -1;
    ioctl(fd, FIONBIO, &ul);
}

int make_block_ioctl(int fd) {
    unsigned long ul = 0;
    ioctl(fd, FIONBIO, &ul);
}
