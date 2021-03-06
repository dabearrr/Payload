
#ifndef _BASESTATIONCOMMSEXEC_H
#define _BASESTATIONCOMMSEXEC_H

#include "Network.h"

class BaseStationCommsExec{
    public:
		BaseStationCommsExec(PayloadStatus* payload_status);
    private:
		uint32_t myIp;
		uint8_t myPort;
		// Network object for sending packets
		Network BSNetwork(myIp,myPort);
		PacketFramer BSPacketFramer(&BSNetwork);
};

#endif
