#include "university.h"

University::University(std::string name) : name_(name) {}

std::string University::name() const { return name_; }

void University::set_name(const std::string& name) { name_ = name; }

void University::AddStudent(const Student& student) {
  students_.push_back(student);
}

const std::vector<Student>& University::students() const { return students_; }

void University::AddInstructor(const Instructor& instructor) {
  instructors_.push_back(instructor);
}
const std::vector<Instructor>& University::instructors() const {
  return instructors_;
}
