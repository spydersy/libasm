clear && nasm -f macho64 hello.s && ld -macosx_version_min 10.7.0 -o hello_world hello.o