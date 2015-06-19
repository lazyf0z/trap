#if !defined(_TRAP_INFERIOR_H)
#define _TRAP_INFERIOR_H

#include <sys/types.h>
#include <unistd.h>

enum inferior_state_t {
  INFERIOR_RUNNING,
  INFERIOR_STOPPED,
  INFERIOR_SINGLE_STEPPING,
};

struct inferior_t {
  pid_t pid;
  enum inferior_state_t state;
};
typedef struct inferior_t inferior_t;

#endif /* _TRAP_INFERIOR_H */