#include "person.h"

const std::string &Person::first_name() const { return first_name_; }

const std::string &Person::last_name() const { return last_name_; }

const std::string &Person::id() const { return id_; }

void Person::set_first_name(const std::string &first_name) {
  first_name_ = first_name;
}

void Person::set_last_name(const std::string &last_name) {
  last_name_ = last_name;
}

void Person::set_id(const std::string &id) { id_ = id; }
