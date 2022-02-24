#include <Arduino_JSON.h>

#include <WiFiNINA.h>






//declareer hier je globale constanten:

const int BOVEN_POORT_PIN = 8;
// pin van servo die bovenste poort regelt
const int LEEGLOOP_TIJD = 1500;   // tijd die knikkers nodig hebben om na het
// sluiten van de poort langs alle sensors te komen

char WIFI_NETWERK[] = "informatica-fast-wifi";
char WIFI_WACHTWOORD[] = "informatica-rocks!";
char SERVER_DOMEINNAAM[] = "3000-emmaus6v-21226vknikkerba-3paghfcpjtz.ws-eu33.gitpod.io";    // domeinnaam van gitpod-server, zoals 3000-lavendel-bla-bla.gitpod.io

const int TELLER_A_PIN = 5;       // pin waarop IR-sensor voor Teller A is aangesloten
const int TELLER_B_PIN = 6;       // pin waarop IR-sensor voor Teller A is aangesloten
const int TELLER_C_PIN = 3;       // pin waarop IR-sensor voor Teller A is aangesloten
