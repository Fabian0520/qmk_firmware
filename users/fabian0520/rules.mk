SRC += fabian0520.c

ifeq ($(strip $(TAP_DANCE_ENABLE)), yes)
  SRC += tap_fabi.c
endif
