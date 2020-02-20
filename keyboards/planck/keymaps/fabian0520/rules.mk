SRC += muse.c
ifndef QUANTUM_DIR
	include ../../../../Makefile
endif
#LAYOUTS += planck_2x2u

TAP_DANCE_ENABLE = no
RGBLIGHT_ENABLE = no
MIDI_ENABLE = yes            # MIDI support (+2400 to 4200, depending on config)
AUDIO_ENABLE = yes           # Audio output on port C6
ENCODER_ENABLE = no
MOUSEKEY_ENABLE = no      # Mouse keys(+4700)
BOOTMAGIC_ENABLE = full
