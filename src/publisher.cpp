//
// Created by ADP on 2/11/21.
//

#include "../include/library/publisher.h"

const std::string &library::Publisher::getName() const {
    return name_;
}

const std::string &library::Publisher::getLocation() const {
    return location_;
}

const library::Person *library::Publisher::getFounder() const {
    return founder_;
}

void library::Publisher::setName(const std::string &name) {
    name_ = name;
}

void library::Publisher::setLocation(const std::string &location) {
    location_ = location;
}

void library::Publisher::setFounder(library::Person *founder) {
    founder_ = founder;
}
