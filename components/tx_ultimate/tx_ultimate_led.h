#pragma once

#include "esphome/core/component.h"
#include "esphome/components/light/light_state.h"

namespace esphome {
namespace tx_ultimate {

class TxUltimateLed : public Component {
 public:
  void setup() override;
  void loop() override;

  void enable_night_light();
  void disable_night_light();
  void toggle_night_light();

 protected:
  bool night_light_enabled_{false};
  light::LightState *night_light_{nullptr};
};

}  // namespace tx_ultimate
}  // namespace esphome
