#include "src/includes/type/type.h"

namespace simple_db {
class IntegerType : public Type {
 public:
  ~IntegerType() override = default;
  IntegerType();
};
}  // namespace simple_db