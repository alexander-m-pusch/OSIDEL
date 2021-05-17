/**
 *
 * OSIDEL 
 * (C) Alexander Pusch 2021
 * OSIDEL is free software under the terms of the GNU LGPLv2.1, the License
 * can be found in the project root directory.
 *
 *
 */

#include <stdio.h>
#include <string.h>
#include <osidel/version.h>
#include <osidel/loader.h>

static void osidel_print_usage(char* program_name) {
	printf("Program usage: \n");
	printf("\t %s --help prints this screen.\n", program_name);
	printf("\t %s --version prints version information.\n", program_name);
	printf("\t %s --run <pib-executable> loads and runs the platform-independent binary (short: pib) <pib-executable>.\n", program_name);
	printf("\t %s --info <pib-executable> loads the platform-independent binary (short: pib) <pib-executable> and opens inspection mode.\n", program_name);
}

static void osidel_print_version(char* program_name) {
	printf("This is %s version %s\n", program_name, VERSION);
}

int main(int argc, char** argv) {
	if (argc == 1) {
		printf("Invalid arguments. See %s --help for help.\n", argv[0]);
	} else {
		if (strcmp(argv[1], "--help") == 0) {
			osidel_print_usage(argv[0]);
		} else if (strcmp(argv[1], "--version") == 0) {
		       	osidel_print_version(argv[0]);
		} else if (strcmp(argv[1], "--run") == 0) {
			if (argc != 3) {
				fprintf(stderr, "Invalid amount of arguments: only %s --run <path> is permitted with --run option!\n", argv[0]);
			} else {
				osidel_load_binary(argv[2], OSIDEL_MODE_EXECUTE);
			}
		}
	}
}
