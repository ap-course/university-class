#include "student.h"

const std::string& Student::major() const { return major_; }

float Student::gpa() const { return gpa_; }

void Student::set_major(const std::string& major) { major_ = major; }

void Student::set_gpa(float gpa) { gpa_ = gpa; }
