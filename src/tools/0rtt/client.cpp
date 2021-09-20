/*++

    Copyright (c) Microsoft Corporation.
    Licensed under the MIT License.

--*/

#include "msquic.hpp"
#include "quic_0rtt.h"

typedef struct QUIC_0RTT_CLIENT {
    MsQuicRegistration Registration {true};
    MsQuicConfiguration Configuration {
        Registration,
        QUIC_0RTT_ALPN,
        MsQuicSettings().SetPeerBidiStreamCount(100),
        MsQuicCredentialConfig()};
} QUIC_0RTT_CLIENT;

