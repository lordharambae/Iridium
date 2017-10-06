#!/usr/bin/env bash

CLANG_FORMAT="/usr/local/bin/clang-format"

for DIRECTORY in Iridium
do
	echo "Formatting code under $DIRECTORY/"
	find "$DIRECTORY" \( -name '*.cpp' -or -name '*.cxx' -or -name '*.c' -or -name '*.hpp' -or -name '*.hxx' -or -name '*.h' \) -print0 | xargs -0 "$CLANG_FORMAT" -i
done
