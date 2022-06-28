# Required Settings
compiler =
files =
output = a.out

# Optional Settings
flags =
source_dir =
build_dir =

all:
	# Check if the source dir exists, if not create it.
	if [ ! -d "./$(source_dir)" ]; then mkdir ./$(source_dir); fi
	# Check if the build dir exists, if not create it.
	if [ ! -d "./$(build_dir)" ]; then mkdir ./$(build_dir); fi
	# Compile the code using the above settings
	$(compiler) $(source_dir)$(files) $(flags) -o $(build_dir)$(output)
