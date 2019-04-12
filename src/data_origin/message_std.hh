//
// Created by dos DRTT on 2019-04-11.
//

#ifndef GUNMQ_MESSAGE_STD_HH
#define GUNMQ_MESSAGE_STD_HH


#include <cstdint>

typedef struct __attribute__ ((__packed__)) message_std0 {
    uint8_t id;
    uint8_t *data;
} message_std;


#endif //GUNMQ_MESSAGE_STD_HH
