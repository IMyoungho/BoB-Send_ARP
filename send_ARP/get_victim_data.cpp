#include "get_victim_data.h"

void get_victim_data(parse_data *parse){ //fix here
    //***************************Make ARP target request Packet*****************************
    uint8_t ask_victim_packet[42]{0};
    make_request_packet(parse,ask_victim_packet,*parse->using_victim_ip());
    parse->get_victim_mac(send_receive_packet(parse,ask_victim_packet,42));
}
