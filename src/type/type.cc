#include "src/includes/type/boolean_type.h"
#include "src/includes/type/integer_type.h"
#include "src/includes/type/string_type.h"
#include "src/includes/type/timestamp_type.h"

namespace simple_db {
Type *Type::k_types[] = {
    new Type(TypeId::INVALID), new BooleanType(),   new IntegerType(),
    new StringType(),          new TimestampType(),
};
}