# Required Settings
# These are the settings used by both compilers
main_compiler =
main_output = a.out
secondary_compiler =
secondary_output = a.exe
files =

# Optional Settings
main_flags =
secondary_flags =
source_dir =
build_dir =

# Targets (Required)
# target options: main secondary
target = main secondary

all: $(target)

main:
	# Check if the source dir exists, if not create it.
	if [ ! -d "./$(source_dir)" ]; then mkdir ./$(source_dir); fi
	# Check if the build dir exists, if not create it.
	if [ ! -d "./$(build_dir)" ]; then mkdir ./$(build_dir); fi
	# Compile the code using the above settings
	$(main_compiler) $(source_dir)$(files) $(main_flags) -o $(build_dir)$(main_output)

secondary:
	# Check if the source dir exists, if not create it.
	if [ ! -d "./$(source_dir)" ]; then mkdir ./$(source_dir); fi
	# Check if the build dir exists, if not create it.
	if [ ! -d "./$(build_dir)" ]; then mkdir ./$(build_dir); fi
	# Compile the code using the above settings
	$(secondary_compiler) $(source_dir)$(files) $(secondary_flags) -o $(build_dir)$(secondary_output)
