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

}  // namespace tx_ultimate
}  // namespace esphome
