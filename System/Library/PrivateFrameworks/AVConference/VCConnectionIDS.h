//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IDSDataChannelLinkContext, NSData, NSString, NSUUID, VCDatagramChannelIDS;

__attribute__((visibility("hidden")))
@interface VCConnectionIDS
{
    IDSDataChannelLinkContext *_linkContext;	// 264 = 0x108
    unsigned int _datagramChannelToken;	// 272 = 0x110
    VCDatagramChannelIDS *_datagramChannel;	// 280 = 0x118
    unsigned int _type;	// 288 = 0x120
    int _localCellTech;	// 292 = 0x124
    int _remoteCellTech;	// 296 = 0x128
    int _connectionMTU;	// 300 = 0x12c
    int _maxConnectionMTU;	// 304 = 0x130
    unsigned int _uplinkBitrateCap;	// 308 = 0x134
    unsigned int _downlinkBitrateCap;	// 312 = 0x138
    unsigned int _uplinkAudioBitrateCapOneToOne;	// 316 = 0x13c
    unsigned int _uplinkBitrateCapOneToOne;	// 320 = 0x140
    _Bool _isLocalDelegated;	// 324 = 0x144
    _Bool _isRemoteDelegated;	// 325 = 0x145
    _Bool _isVirtualRelayLink;	// 326 = 0x146
    _Bool _isQUICPod;	// 327 = 0x147
    NSString *_relayProtocolStackDescription;	// 328 = 0x148
    NSString *_channelDataBaseProtocolStackDescription;	// 336 = 0x150
    long long _linkConnectionType;	// 344 = 0x158
}

+ (unsigned int)worstCaseNetworkOverheadInBytesWithNumOfStreamId:(int)arg1 isPriorityIncluded:(_Bool)arg2;	// IMP=0x00100000002950f5
+ (id)VCConnectionIDS_CDBPS:(id)arg1;	// IMP=0x0010000000294ed0
+ (id)VCConnectionIDS_RPS:(id)arg1;	// IMP=0x0010000000294e0a
@property(copy) NSString *channelDataBaseProtocolStackDescription; // @synthesize channelDataBaseProtocolStackDescription=_channelDataBaseProtocolStackDescription;
@property(copy) NSString *relayProtocolStackDescription; // @synthesize relayProtocolStackDescription=_relayProtocolStackDescription;
@property _Bool isQUICPod; // @synthesize isQUICPod=_isQUICPod;
@property int maxConnectionMTU; // @synthesize maxConnectionMTU=_maxConnectionMTU;
@property(readonly) _Bool isVirtualRelayLink; // @synthesize isVirtualRelayLink=_isVirtualRelayLink;
@property(readonly) _Bool isRemoteDelegated; // @synthesize isRemoteDelegated=_isRemoteDelegated;
@property(readonly) _Bool isLocalDelegated; // @synthesize isLocalDelegated=_isLocalDelegated;
@property unsigned int uplinkBitrateCapOneToOne; // @synthesize uplinkBitrateCapOneToOne=_uplinkBitrateCapOneToOne;
@property unsigned int uplinkAudioBitrateCapOneToOne; // @synthesize uplinkAudioBitrateCapOneToOne=_uplinkAudioBitrateCapOneToOne;
@property unsigned int downlinkBitrateCap; // @synthesize downlinkBitrateCap=_downlinkBitrateCap;
@property unsigned int uplinkBitrateCap; // @synthesize uplinkBitrateCap=_uplinkBitrateCap;
@property(readonly) unsigned int type; // @synthesize type=_type;
@property(readonly) VCDatagramChannelIDS *datagramChannel; // @synthesize datagramChannel=_datagramChannel;
@property(readonly) unsigned int datagramChannelToken; // @synthesize datagramChannelToken=_datagramChannelToken;
- (int)cellTechForSoMask:(unsigned int)arg1 fallbackTo:(int)arg2;	// IMP=0x0000000000295b4d
- (_Bool)isOnSameInterfacesAndQRSessionWithConnection:(id)arg1;	// IMP=0x0000000000295578
- (_Bool)isOnSameQRSessionWithConnection:(id)arg1;	// IMP=0x0000000000295408
- (unsigned short)updateMaxConnectionMTU:(unsigned short)arg1;	// IMP=0x000000000029526f
- (void)setCellularMTU:(int)arg1;	// IMP=0x000000000029524a
@property(readonly) NSString *remoteInterfaceTypeString;
@property(readonly) NSString *localInterfaceTypeString;
@property(readonly) long long linkConnectionType; // @synthesize linkConnectionType=_linkConnectionType;
@property(readonly) int remoteConnectionType;
@property(readonly) int localConnectionType;
@property(readonly) NSUUID *connectionUUID;
@property int connectionMTU;
- (id)connectionQRSessionID;	// IMP=0x0000000000294fb3
@property(readonly) _Bool serverIsDegraded;
@property(readonly) _Bool isWifiToWifi;
@property(readonly) NSString *localInterfaceName;
@property(readonly) _Bool isVPN;
@property(readonly) _Bool isRemoteOn5G;
@property(readonly) _Bool isLocalOn5G;
@property(readonly) NSData *sharedDigestKey;
@property(readonly) NSString *relaySessionToken;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000029497b
- (id)initWithLinkContext:(id)arg1 dataChannelToken:(unsigned int)arg2;	// IMP=0x00000000002944cb
- (void)setUpVTable;	// IMP=0x0000000000293188

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

