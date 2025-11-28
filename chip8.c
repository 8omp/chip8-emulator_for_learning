#include <stdbool.h>
#include <stdint.h>

enum{
    MEMORY_SIZE = 4096,
    REGISTER_COUNT = 16,
    STACK_SIZE = 16,
    DISPLAY_WIDTH = 64,
    DISPLAY_HEIGHT = 32,
};

typedef struct{

    //メモリ: 4096バイト
    uint8_t memory[MEMORY_SIZE];

    //汎用レジスタ: V0〜VF (16個)
    uint8_t V[REGISTER_COUNT];

} Chip8;