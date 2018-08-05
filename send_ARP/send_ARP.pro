TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
LIBS += -lpcap
SOURCES += \
        main.cpp \
    char_to_binary.cpp \
    get_target_data.cpp \
    get_victim_data.cpp \
    make_request_packet.cpp \
    make_send_replay_packet.cpp \
    parse_data.cpp \
    parse_data_in_linux.cpp \
    send_packet.cpp

HEADERS += \
    char_to_binary.h \
    get_target_data.h \
    get_victim_data.h \
    make_request_packet.h \
    make_send_reply_packet.h \
    parse_data.h \
    parse_data_in_linux.h \
    send_packet.h
