#include "src/includes/type/type.h"

namespace simple_db {
class StringType : public Type {
 public:
  ~StringType() override = default;
  StringType();
};
}  // namespace simple_db