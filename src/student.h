#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"

class Student : public Person {
 public:
  Student(const std::string& first_name = "", const std::string& last_name = "",
          const std::string& id = "")
      : Person(first_name, last_name, id) {}

  const std::string& major() const;
  float gpa() const;

  void set_major(const std::string& major);
  void set_gpa(float gpa);

 private:
  std::string major_;
  float gpa_;
};

#endif
