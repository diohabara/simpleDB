#include "src/includes/type/type.h"

namespace simple_db{
  class BooleanType: public Type {
    public:
    ~BooleanType() override = default;
    BooleanType();

  };
}