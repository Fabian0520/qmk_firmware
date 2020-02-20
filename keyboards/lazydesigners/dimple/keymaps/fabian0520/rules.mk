ifndef QUANTUM_DIR
        include ../../../../Makefile
endif

TAP_DANCE_ENABLE = no
MIDI_ENABLE = no            # MIDI support (+2400 to 4200, depending on config)
AUDIO_ENABLE = no
UNICODEMAP_ENABLE = yes
MOUSEKEY_ENABLE = no
CONSOLE_ENABLE = yes
BOOTMAGIC_ENABLE = lite

EXTRAFLAGS += -flto

