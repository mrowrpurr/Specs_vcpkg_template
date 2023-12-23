#define SPEC_GROUP Basic_Example

#include "SpecHelper.h" // IWYU pragma: keep

Test("Just a regular std::exception") {
  throw std::exception("Just a regular std::exception");
}

Test("Just a regular std::runtime_error") {
  throw std::runtime_error("Just a regular std::runtime_error");
}

Test("Just a thrown literal C-string") {
  throw "Just a thrown literal C-string";
}
