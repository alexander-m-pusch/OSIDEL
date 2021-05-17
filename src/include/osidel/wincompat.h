
#ifndef _OSIDEL_HEADER_WINCOMPAT
#define _OSIDEL_HEADER_WINCOMPAT

/*
 * This hideous header is here to provide compatibility to Microsoft goddamn Windows. The reason I wrote OSIDEL in the
 * first place is to get rid of the necessity for hideous headers such as this one. Microsoft, make your damn OS POSIX
 * compatible for crying out loud!!!!!
 */

# ifdef _WIN32

#  warning Warning to shame you that you're using Windows

#  define posix_memalign(p, a, s) (((*(p)) = _aligned_malloc((s), (a))), *(p) ? 0 :errno)
/*
 * Shamelessly stolen off of stackoverflow. I mean, I could try to be less blatant about it, but only people that code anyway
 * will ever look at my source code (or god forbid, this header), so anyone who sees this is in the know about SO anyways,
 * so hello, fellow coder, let's have a toast for the brilliant folks over at StackOverflow.
 *
 * (To StackOverflow! *sips beer*)
 */

# endif

#endif
