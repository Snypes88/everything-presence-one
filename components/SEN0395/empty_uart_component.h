#pragma once

#include "esphome/core/component.h"
#include "esphome/components/uart/uart.h"

namespace esphome {
namespace SEN0395_distance {

class EmptyUARTComponent : public uart::UARTDevice, public Component {
  public:
    void setup() override;
    void loop() override;
    void dump_config() override;
};


}  // namespace empty_uart_component
}  // namespace esphome