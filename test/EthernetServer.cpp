#include <Arduino.h>
#include <ArduinoUnitTests.h>

#include <string>
#include <vector>

#include "TankControllerLib.h"

unittest(test) {
  EthernetServer_TC* server = EthernetServer_TC::instance();
  assertEqual("EthernetServer_TC", server->className());
  assertEqual(80, server->getPort());
}

unittest_main()
