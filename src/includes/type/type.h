#include <cstdint>

#include "src/includes/type/type_id.h"

namespace simple_db {
class Type {
 public:
  explicit Type(TypeId type_id) : type_id_(type_id) {}

  virtual ~Type() = default;

  static uint64_t GetTypeSize(TypeId type_id);

  inline TypeId GetTypeId() const { return type_id_; }

 protected:
  TypeId type_id_;
  static Type *k_types[14];
};
}  // namespace simple_db