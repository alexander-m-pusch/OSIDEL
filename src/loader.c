/**
 *
 * OSIDEL
 *
 * #### #### #    # #### #
 * #  # #         # #  # #
 * #  # #### # #### #### #
 * #  #    # # #  # #    #
 * #### #### # #### ####  ##
 *r
 *
 */

#include <stdio.h>
#include <osidel/loader.h>

void osidel_load_binary(const char* path, unsigned int mode) {
	printf("Beginning to load binary \"%s\"\n", path);

	switch(mode){
		case OSIDEL_MODE_LOAD:
			break;		
		case OSIDEL_MODE_EXECUTE:
			break;
	}
}



