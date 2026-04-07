#include <stdio.h>

void app_main() {
    while (1) {
        printf("Hello, temperature monitor!\n");
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}
