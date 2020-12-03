#include "src/includes/type/type.h"

namespace simple_db {
class TimestampType : public Type {
 public:
  ~TimestampType() override = default;
  TimestampType();
};
}  // namespace simple_db