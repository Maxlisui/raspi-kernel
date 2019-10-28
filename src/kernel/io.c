#include <kernel/io.h>
#include <kernel/kerio.h>


void test() {
    KMI_MMIO volatile *mmio;
    mmio = (KMI_MMIO*)KMI_KB_BASE;
    mmio->cr = 0x4;
    mmio->data = 0xF4;
    printf("Keyboard turned on\n");

    while(1) {
        uint32_t read = mmio->stat;
        printf("Read %d\n", read);

        if(read == 0xFA){
            break;
        }
    }

}