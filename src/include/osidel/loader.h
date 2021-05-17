

#ifndef _OSIDEL_LOADER_HEADER
#define _OSIDEL_LOADER_HEADER

#define OSIDEL_MODE_LOAD 0
#define OSIDEL_MODE_EXECUTE 1

typedef struct {
	void* base_address;
} pbi_header; 

void osidel_load_binary(const char* path, unsigned int mode);

#endif
