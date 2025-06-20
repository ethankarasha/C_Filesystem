// config.h

#ifndef CONFIG_H
#define CONFIG_H

#define BLOCK_SIZE 512            // or 1024, depending on your system design
#define NUM_BLOCKS 1024           // total blocks on your virtual disk
#define MAX_FILENAME 32           // max length for filenames
#define MAX_FILES_PER_DIR 64      // or whatever fits in one block

typedef struct {
    char data[BLOCK_SIZE];        // generic block structure
} Block;

#endif
