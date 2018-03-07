#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <string>
#include <vector>

#include "instructor.h"
#include "student.h"

#define UNKNOWN_UNIVERSITY_NAME "Unknown"

class University {
 public:
  University(std::string name = UNKNOWN_UNIVERSITY_NAME);

  std::string name() const;
  void set_name(const std::string& name);

  void AddStudent(const Student& student);
  const std::vector<Student>& students() const;

  void AddInstructor(const Instructor& instructor);
  const std::vector<Instructor>& instructors() const;

 private:
  std::string name_;

  std::vector<Student> students_;
  std::vector<Instructor> instructors_;
};

#endif
