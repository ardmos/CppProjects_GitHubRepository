#include <sys/socket.h>
#include <netinet/in.h>

class SocketAddress
{
public:
    SocketAddress(uint32_t inAddress, uint16_t inPort){
        GetAsSockAddIn()->sin_family = AF_INET;
        GetAsSockAddIn()->sin_addr.S_un.S_addr = htonl(inAddress);
        GetAsSockAddIn()->sin_port = htonl(inPort);
    }

    SocketAddress(const sockaddr& inSockAddr){
        memcpy(&mSockAddr, &inSockAddr, sizeof(sockaddr));
    }

    size_t GetSize() const { return sizeof(sockaddr); }

private:
    sockaddr mSockAddr;

    sockaddr_in* GetAsSockAddrIn(){
        return reinterpret_cast<sockaddr_in*>(&mSockAddr);
    }

};

using SocketAddressPtr = shared_ptr<SocketAddress>;
