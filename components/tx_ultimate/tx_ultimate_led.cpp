#include "tx_ultimate_led.h"
#include "esphome/core/log.h"

namespace esphome {
namespace tx_ultimate {

static const char *const TAG = "tx_ultimate_led";

void TxUltimateLed::setup() {
  ESP_LOGI(TAG, "TX Ultimate LED component started");
}

void TxUltimateLed::loop() {
}
void TxUltimateLed::enable_night_light() {
  night_light_enabled_ = true;
  ESP_LOGI(TAG, "Night Light ON");
}

void TxUltimateLed::disable_night_light() {
  night_light_enabled_ = false;
  ESP_LOGI(TAG, "Night Light OFF");
}

void TxUltimateLed::toggle_night_light() {
  if (night_light_enabled_) {
    disable_night_light();
  } else {
    enable_night_light();
  }
}
}  // namespace tx_ultimate
}  // namespace esphome
