#include <iostream>

#include "university.h"

void TestUniversityClass() {
  University amirkabir("Amirkabir University of Technology");
  std::cout << "University " << amirkabir.name() << " created successfully"
            << std::endl;

  amirkabir.AddInstructor(Instructor("Amin", "Gheibi", "007"));
  amirkabir.AddStudent(Student("Arya", "Hadi", "9513035"));

  std::cout << amirkabir.students()[0].id() << std::endl;
  std::cout << amirkabir.instructors()[0].id() << std::endl;
}

int main() {
  TestUniversityClass();

  return 0;
}
