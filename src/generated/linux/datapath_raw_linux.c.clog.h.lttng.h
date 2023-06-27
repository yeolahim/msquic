


/*----------------------------------------------------------
// Decoder Ring for XdpSkipOrEndofBuffer
// [ xdp] Skip or End of Buffer %d/%d
// QuicTraceLogVerbose(
                            XdpSkipOrEndofBuffer,
                            "[ xdp] Skip or End of Buffer %d/%d",
                            i, PacketCount);
// arg2 = arg2 = i = arg2
// arg3 = arg3 = PacketCount = arg3
----------------------------------------------------------*/
TRACEPOINT_EVENT(CLOG_DATAPATH_RAW_LINUX_C, XdpSkipOrEndofBuffer,
    TP_ARGS(
        int, arg2,
        int, arg3), 
    TP_FIELDS(
        ctf_integer(int, arg2, arg2)
        ctf_integer(int, arg3, arg3)
    )
)



/*----------------------------------------------------------
// Decoder Ring for XdpChainingBuffer
// [ xdp] Done chaining buffer %d/%d
// QuicTraceLogVerbose(
                        XdpChainingBuffer,
                        "[ xdp] Done chaining buffer %d/%d",
                        i, PacketCount);
// arg2 = arg2 = i = arg2
// arg3 = arg3 = PacketCount = arg3
----------------------------------------------------------*/
TRACEPOINT_EVENT(CLOG_DATAPATH_RAW_LINUX_C, XdpChainingBuffer,
    TP_ARGS(
        int, arg2,
        int, arg3), 
    TP_FIELDS(
        ctf_integer(int, arg2, arg2)
        ctf_integer(int, arg3, arg3)
    )
)



/*----------------------------------------------------------
// Decoder Ring for XdpSocketNotFound
// [ xdp] Socket not found LocalAddr=%!ADDR! RemoteAddr=%!ADDR!
// QuicTraceLogVerbose(
                XdpSocketNotFound,
                "[ xdp] Socket not found LocalAddr=%!ADDR! RemoteAddr=%!ADDR!",
                CASTED_CLOG_BYTEARRAY(sizeof(PacketChain->Route->LocalAddress), &PacketChain->Route->LocalAddress),
                CASTED_CLOG_BYTEARRAY(sizeof(PacketChain->Route->RemoteAddress), &PacketChain->Route->RemoteAddress));
// arg2 = arg2 = CASTED_CLOG_BYTEARRAY(sizeof(PacketChain->Route->LocalAddress), &PacketChain->Route->LocalAddress) = arg2
// arg3 = arg3 = CASTED_CLOG_BYTEARRAY(sizeof(PacketChain->Route->RemoteAddress), &PacketChain->Route->RemoteAddress) = arg3
----------------------------------------------------------*/
TRACEPOINT_EVENT(CLOG_DATAPATH_RAW_LINUX_C, XdpSocketNotFound,
    TP_ARGS(
        unsigned int, arg2_len,
        const void *, arg2,
        unsigned int, arg3_len,
        const void *, arg3), 
    TP_FIELDS(
        ctf_integer(unsigned int, arg2_len, arg2_len)
        ctf_sequence(char, arg2, arg2, unsigned int, arg2_len)
        ctf_integer(unsigned int, arg3_len, arg3_len)
        ctf_sequence(char, arg3, arg3, unsigned int, arg3_len)
    )
)



/*----------------------------------------------------------
// Decoder Ring for DatapathResolveHostNameFailed
// [%p] Couldn't resolve hostname '%s' to an IP address
// QuicTraceLogError(
        DatapathResolveHostNameFailed,
        "[%p] Couldn't resolve hostname '%s' to an IP address",
        Datapath,
        HostName);
// arg2 = arg2 = Datapath = arg2
// arg3 = arg3 = HostName = arg3
----------------------------------------------------------*/
TRACEPOINT_EVENT(CLOG_DATAPATH_RAW_LINUX_C, DatapathResolveHostNameFailed,
    TP_ARGS(
        const void *, arg2,
        const char *, arg3), 
    TP_FIELDS(
        ctf_integer_hex(uint64_t, arg2, arg2)
        ctf_string(arg3, arg3)
    )
)



/*----------------------------------------------------------
// Decoder Ring for AllocFailure
// Allocation of '%s' failed. (%llu bytes)
// QuicTraceEvent(
            AllocFailure,
            "Allocation of '%s' failed. (%llu bytes)",
            "CXPLAT_DATAPATH",
            sizeof(CXPLAT_ROUTE_RESOLUTION_WORKER));
// arg2 = arg2 = "CXPLAT_DATAPATH" = arg2
// arg3 = arg3 = sizeof(CXPLAT_ROUTE_RESOLUTION_WORKER) = arg3
----------------------------------------------------------*/
TRACEPOINT_EVENT(CLOG_DATAPATH_RAW_LINUX_C, AllocFailure,
    TP_ARGS(
        const char *, arg2,
        unsigned long long, arg3), 
    TP_FIELDS(
        ctf_string(arg2, arg2)
        ctf_integer(uint64_t, arg3, arg3)
    )
)



/*----------------------------------------------------------
// Decoder Ring for LibraryErrorStatus
// [ lib] ERROR, %u, %s.
// QuicTraceEvent(
            LibraryErrorStatus,
            "[ lib] ERROR, %u, %s.",
            Status,
            "CxPlatThreadCreate");
// arg2 = arg2 = Status = arg2
// arg3 = arg3 = "CxPlatThreadCreate" = arg3
----------------------------------------------------------*/
TRACEPOINT_EVENT(CLOG_DATAPATH_RAW_LINUX_C, LibraryErrorStatus,
    TP_ARGS(
        unsigned int, arg2,
        const char *, arg3), 
    TP_FIELDS(
        ctf_integer(unsigned int, arg2, arg2)
        ctf_string(arg3, arg3)
    )
)



/*----------------------------------------------------------
// Decoder Ring for DatapathCreated
// [data][%p] Created, local=%!ADDR!, remote=%!ADDR!
// QuicTraceEvent(
        DatapathCreated,
        "[data][%p] Created, local=%!ADDR!, remote=%!ADDR!",
        *NewSocket,
        CASTED_CLOG_BYTEARRAY(Config->LocalAddress ? sizeof(*Config->LocalAddress) : 0, Config->LocalAddress),
        CASTED_CLOG_BYTEARRAY(Config->RemoteAddress ? sizeof(*Config->RemoteAddress) : 0, Config->RemoteAddress));
// arg2 = arg2 = *NewSocket = arg2
// arg3 = arg3 = CASTED_CLOG_BYTEARRAY(Config->LocalAddress ? sizeof(*Config->LocalAddress) : 0, Config->LocalAddress) = arg3
// arg4 = arg4 = CASTED_CLOG_BYTEARRAY(Config->RemoteAddress ? sizeof(*Config->RemoteAddress) : 0, Config->RemoteAddress) = arg4
----------------------------------------------------------*/
TRACEPOINT_EVENT(CLOG_DATAPATH_RAW_LINUX_C, DatapathCreated,
    TP_ARGS(
        const void *, arg2,
        unsigned int, arg3_len,
        const void *, arg3,
        unsigned int, arg4_len,
        const void *, arg4), 
    TP_FIELDS(
        ctf_integer_hex(uint64_t, arg2, arg2)
        ctf_integer(unsigned int, arg3_len, arg3_len)
        ctf_sequence(char, arg3, arg3, unsigned int, arg3_len)
        ctf_integer(unsigned int, arg4_len, arg4_len)
        ctf_sequence(char, arg4, arg4, unsigned int, arg4_len)
    )
)



/*----------------------------------------------------------
// Decoder Ring for DatapathRecv
// [data][%p] Recv %u bytes (segment=%hu) Src=%!ADDR! Dst=%!ADDR!
// QuicTraceEvent(
                        DatapathRecv,
                        "[data][%p] Recv %u bytes (segment=%hu) Src=%!ADDR! Dst=%!ADDR!",
                        Socket,
                        Packets[i]->BufferLength,
                        Packets[i]->BufferLength,
                        CASTED_CLOG_BYTEARRAY(sizeof(Packets[i]->Route->LocalAddress), &Packets[i]->Route->LocalAddress),
                        CASTED_CLOG_BYTEARRAY(sizeof(Packets[i]->Route->RemoteAddress), &Packets[i]->Route->RemoteAddress));
// arg2 = arg2 = Socket = arg2
// arg3 = arg3 = Packets[i]->BufferLength = arg3
// arg4 = arg4 = Packets[i]->BufferLength = arg4
// arg5 = arg5 = CASTED_CLOG_BYTEARRAY(sizeof(Packets[i]->Route->LocalAddress), &Packets[i]->Route->LocalAddress) = arg5
// arg6 = arg6 = CASTED_CLOG_BYTEARRAY(sizeof(Packets[i]->Route->RemoteAddress), &Packets[i]->Route->RemoteAddress) = arg6
----------------------------------------------------------*/
TRACEPOINT_EVENT(CLOG_DATAPATH_RAW_LINUX_C, DatapathRecv,
    TP_ARGS(
        const void *, arg2,
        unsigned int, arg3,
        unsigned short, arg4,
        unsigned int, arg5_len,
        const void *, arg5,
        unsigned int, arg6_len,
        const void *, arg6), 
    TP_FIELDS(
        ctf_integer_hex(uint64_t, arg2, arg2)
        ctf_integer(unsigned int, arg3, arg3)
        ctf_integer(unsigned short, arg4, arg4)
        ctf_integer(unsigned int, arg5_len, arg5_len)
        ctf_sequence(char, arg5, arg5, unsigned int, arg5_len)
        ctf_integer(unsigned int, arg6_len, arg6_len)
        ctf_sequence(char, arg6, arg6, unsigned int, arg6_len)
    )
)



/*----------------------------------------------------------
// Decoder Ring for DatapathRecvXdp
// [ xdp][%p] Recv %u bytes (segment=%hu) Src=%!ADDR! Dst=%!ADDR!
// QuicTraceEvent(
                        DatapathRecvXdp,
                        "[ xdp][%p] Recv %u bytes (segment=%hu) Src=%!ADDR! Dst=%!ADDR!",
                        Socket,
                        Packets[i]->BufferLength,
                        Packets[i]->BufferLength,
                        CASTED_CLOG_BYTEARRAY(sizeof(Packets[i]->Route->LocalAddress), &Packets[i]->Route->LocalAddress),
                        CASTED_CLOG_BYTEARRAY(sizeof(Packets[i]->Route->RemoteAddress), &Packets[i]->Route->RemoteAddress));
// arg2 = arg2 = Socket = arg2
// arg3 = arg3 = Packets[i]->BufferLength = arg3
// arg4 = arg4 = Packets[i]->BufferLength = arg4
// arg5 = arg5 = CASTED_CLOG_BYTEARRAY(sizeof(Packets[i]->Route->LocalAddress), &Packets[i]->Route->LocalAddress) = arg5
// arg6 = arg6 = CASTED_CLOG_BYTEARRAY(sizeof(Packets[i]->Route->RemoteAddress), &Packets[i]->Route->RemoteAddress) = arg6
----------------------------------------------------------*/
TRACEPOINT_EVENT(CLOG_DATAPATH_RAW_LINUX_C, DatapathRecvXdp,
    TP_ARGS(
        const void *, arg2,
        unsigned int, arg3,
        unsigned short, arg4,
        unsigned int, arg5_len,
        const void *, arg5,
        unsigned int, arg6_len,
        const void *, arg6), 
    TP_FIELDS(
        ctf_integer_hex(uint64_t, arg2, arg2)
        ctf_integer(unsigned int, arg3, arg3)
        ctf_integer(unsigned short, arg4, arg4)
        ctf_integer(unsigned int, arg5_len, arg5_len)
        ctf_sequence(char, arg5, arg5, unsigned int, arg5_len)
        ctf_integer(unsigned int, arg6_len, arg6_len)
        ctf_sequence(char, arg6, arg6, unsigned int, arg6_len)
    )
)



/*----------------------------------------------------------
// Decoder Ring for DatapathSend
// [data][%p] Send %u bytes in %hhu buffers (segment=%hu) Dst=%!ADDR!, Src=%!ADDR!
// QuicTraceEvent(
        DatapathSend,
        "[data][%p] Send %u bytes in %hhu buffers (segment=%hu) Dst=%!ADDR!, Src=%!ADDR!",
        Socket,
        SendData->Buffer.Length,
        1,
        (uint16_t)SendData->Buffer.Length,
        CASTED_CLOG_BYTEARRAY(sizeof(Route->RemoteAddress), &Route->RemoteAddress),
        CASTED_CLOG_BYTEARRAY(sizeof(Route->LocalAddress), &Route->LocalAddress));
// arg2 = arg2 = Socket = arg2
// arg3 = arg3 = SendData->Buffer.Length = arg3
// arg4 = arg4 = 1 = arg4
// arg5 = arg5 = (uint16_t)SendData->Buffer.Length = arg5
// arg6 = arg6 = CASTED_CLOG_BYTEARRAY(sizeof(Route->RemoteAddress), &Route->RemoteAddress) = arg6
// arg7 = arg7 = CASTED_CLOG_BYTEARRAY(sizeof(Route->LocalAddress), &Route->LocalAddress) = arg7
----------------------------------------------------------*/
TRACEPOINT_EVENT(CLOG_DATAPATH_RAW_LINUX_C, DatapathSend,
    TP_ARGS(
        const void *, arg2,
        unsigned int, arg3,
        unsigned char, arg4,
        unsigned short, arg5,
        unsigned int, arg6_len,
        const void *, arg6,
        unsigned int, arg7_len,
        const void *, arg7), 
    TP_FIELDS(
        ctf_integer_hex(uint64_t, arg2, arg2)
        ctf_integer(unsigned int, arg3, arg3)
        ctf_integer(unsigned char, arg4, arg4)
        ctf_integer(unsigned short, arg5, arg5)
        ctf_integer(unsigned int, arg6_len, arg6_len)
        ctf_sequence(char, arg6, arg6, unsigned int, arg6_len)
        ctf_integer(unsigned int, arg7_len, arg7_len)
        ctf_sequence(char, arg7, arg7, unsigned int, arg7_len)
    )
)



/*----------------------------------------------------------
// Decoder Ring for DatapathSendXdp
// [ xdp][%p] Send %u bytes Dst=%!ADDR!, Src=%!ADDR!
// QuicTraceEvent(
        DatapathSendXdp,
        "[ xdp][%p] Send %u bytes Dst=%!ADDR!, Src=%!ADDR!",
        Socket,
        SendData->Buffer.Length,
        CASTED_CLOG_BYTEARRAY(sizeof(Route->RemoteAddress), &Route->RemoteAddress),
        CASTED_CLOG_BYTEARRAY(sizeof(Route->LocalAddress), &Route->LocalAddress));
// arg2 = arg2 = Socket = arg2
// arg3 = arg3 = SendData->Buffer.Length = arg3
// arg4 = arg4 = CASTED_CLOG_BYTEARRAY(sizeof(Route->RemoteAddress), &Route->RemoteAddress) = arg4
// arg5 = arg5 = CASTED_CLOG_BYTEARRAY(sizeof(Route->LocalAddress), &Route->LocalAddress) = arg5
----------------------------------------------------------*/
TRACEPOINT_EVENT(CLOG_DATAPATH_RAW_LINUX_C, DatapathSendXdp,
    TP_ARGS(
        const void *, arg2,
        unsigned int, arg3,
        unsigned int, arg4_len,
        const void *, arg4,
        unsigned int, arg5_len,
        const void *, arg5), 
    TP_FIELDS(
        ctf_integer_hex(uint64_t, arg2, arg2)
        ctf_integer(unsigned int, arg3, arg3)
        ctf_integer(unsigned int, arg4_len, arg4_len)
        ctf_sequence(char, arg4, arg4, unsigned int, arg4_len)
        ctf_integer(unsigned int, arg5_len, arg5_len)
        ctf_sequence(char, arg5, arg5, unsigned int, arg5_len)
    )
)