#include <stdio.h>
#include <stdlib.h>

#define COUNTRY "country=IN\n"
#define UPDATE "update_config=1\n"
#define INTERFACE "ctrl_interface=/var/run/wpa_supplicant\n"
#define NETWORK_I "network={\n\tscan_ssid=1\n\tssid=\""
#define NETWORK_II "\"\n\tpsk=\""
#define NETWORK_III "\"\n}"
#define MAX_LIMIT 100

void main()
{
    FILE *ssh, *wpaf;
    char ssid[MAX_LIMIT], psk[MAX_LIMIT];
    ssh = fopen("ssh", "w");
    fclose(ssh);
    wpaf = fopen("wpa_supplicant.conf", "w");
    fprintf(wpaf, COUNTRY);
    fprintf(wpaf, UPDATE);
    fprintf(wpaf, INTERFACE);
    fprintf(wpaf, NETWORK_I);
    printf("Enter the WIFI SSID\n");
    fgets(ssid, MAX_LIMIT, stdin);
    fprintf(wpaf,"%s",ssid);
    fprintf(wpaf, NETWORK_II);
    printf("Enter the WIFI Password\n");
    fgets(psk, MAX_LIMIT, stdin);
    fprintf(wpaf,"%s",psk);
    fprintf(wpaf, NETWORK_III);
    fclose(wpaf);
    printf("File generated!\nPress Enter to exit.");
    
}
