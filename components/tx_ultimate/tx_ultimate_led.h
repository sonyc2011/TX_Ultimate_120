#pragma once

#include "esphome/core/component.h"

namespace esphome {
namespace tx_ultimate {

class TxUltimateLed : public Component {
 public:
  void setup() override;
  void loop() override;
};

}  // namespace tx_ultimate
