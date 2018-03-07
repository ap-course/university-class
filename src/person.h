#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
 public:
  Person(const std::string& first_name = "", const std::string& last_name = "",
         const std::string& id = "")
      : first_name_(first_name), last_name_(last_name), id_(id) {}

  const std::string& first_name() const;
  const std::string& last_name() const;
  const std::string& id() const;

  void set_first_name(const std::string& first_name);
  void set_last_name(const std::string& last_name);
  void set_id(const std::string& id);

 private:
  std::string first_name_, last_name_, id_;
};

#endif
