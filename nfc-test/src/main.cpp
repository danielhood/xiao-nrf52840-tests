/*
 * nfc-test
 * Test the nfc functionality of the nrf52840.
 * Represent simple text strings in the nfc payload.
 */

#include "mbed.h"
#include "nfc/NFCController.h"
#include "nfc/ndef/common/URI.h"

using namespace mbed::nfc;

int main(){
// 1. Initialize EventQueue (required for Mbed NFC)
    EventQueue queue;    
    printf("NFC Tag is active. Scan with your phone!\n");
    queue.dispatch_forever();

}

// #include <bluefruit.h>
// #include <Adafruit_TinyUSB.h> // Required for USB support
// //#include "Adafruit_nfc_nci.h"
// #include "nrfx_nfct.h"
// #include "nfc_t2t_lib.h"

// // Initialize NFC
// //Adafruit_nfc_nci nfc(0); 
// nrfx_nfct_state_t state;

// void setup(void) {
//   Serial.begin(115200);

//   //nfc.begin();
//   // // Configure the NFC tag to display text
//   // nfc.setTagType(NFC_TYPE_2);
//   // nfc.setPayload("Hello from XIAO!");

//   Serial.println("NFC Tag Ready");
// }

// void loop(void) {
//   // No code needed here for a passive tag
// }
