#include <iostream>

#include "university.h"

void test_university_class() {
  University amirkabir("Amirkabir University of Technology");
  std::cout << "University " << amirkabir.name() << " created successfully"
            << std::endl;

  amirkabir.AddInstructor(Instructor("Amin", "Gheibi", "007"));
  amirkabir.AddStudent(Student("Arya", "Hadi", "9513035"));

  std::cout << amirkabir.students()[0].id() << std::endl;
  std::cout << amirkabir.instructors()[0].id() << std::endl;
}

int main() {
  test_university_class();

  return 0;
}
