# This is OSIDEL, an attempt at a unified ABI for multiple Operating Systems

This program attempts to provide a similar environment like the JVM, but running native x86 code as well as 
enabling low-level memory operations (such as pointers etc) at the same time as providing exception handling 
as well reflection to languages such as C. It is small and fast, because no virtualization is taking place at all
and OSIDEL simply provides an abstraction layer.

## Building

Prerequisites: autoconf, automake, libtools

1. Clone this repository to a place of your choosing.
2. run autoreconf. If it complains that install-sh and the likes are missing from build-aux/, run "automake --add-missing".
3. run ./configure
4. run make
5. Done.

