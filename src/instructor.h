#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "person.h"

class Instructor : public Person {
 public:
  Instructor(const std::string& first_name = "",
             const std::string& last_name = "", const std::string& id = "")
      : Person(first_name, last_name, id) {}
};

#endif
