#include <iostream>

struct p_t {
  int x, y;
};

struct IDraw {
  virtual p_t begin() const;
  virtual p_t next(p_t) const;
  virtual ~IDraw();
};

int main() {
  return 0;
}
