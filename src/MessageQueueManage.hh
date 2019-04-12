#include <utility>

//
// Created by dos DRTT on 2019-04-11.
//

#ifndef GUNMQ_MESSAGEQUEUEMANAGE_HH
#define GUNMQ_MESSAGEQUEUEMANAGE_HH

#include <string>


#include "MessageQueu.hh"

class MessageQueueManage : public hashble {
private:
    MessageQueu **broken;
    int stasize = 4;

    long getHash(std::string &key) {
        int hash = 0;
        for (int i = 0; i < key.length(); ++i) {
            hash += key[i];
        }
    }

public:
    int init() {
        broken = new MessageQueu *[stasize]{nullptr};

    }

    long getHashCode() override {

    }


    int createMessageQueue(std::string name) {
        auto *queue = new MessageQueu();
        queue->setName(std::move(name));
        int hash = getHash(name) & (stasize - 1);
        if (broken[hash] == nullptr) {
            broken[hash] = queue;
        } else {
            return -4;
        }
        return 0;
    }

    int writeMessageTo(std::string name, message_std message) {
        int hash = getHash(name) & (stasize - 1);
        if (broken[hash] == nullptr) {
            return -2;
        } else {
            broken[hash]->setMessage(message);
        }
        return 0;
    }

};


#endif //GUNMQ_MESSAGEQUEUEMANAGE_HH
