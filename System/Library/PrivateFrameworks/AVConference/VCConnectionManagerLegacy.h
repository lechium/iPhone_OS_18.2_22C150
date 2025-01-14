//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol VCConnectionProtocol;

__attribute__((visibility("hidden")))
@interface VCConnectionManagerLegacy
{
    id <VCConnectionProtocol> _pendingPrimaryConnection;	// 2944 = 0xb80
    id <VCConnectionProtocol> _pendingSecondaryConnection;	// 2952 = 0xb88
    NSString *_relayConnectionID;	// 2960 = 0xb90
}

@property(copy, nonatomic) NSString *relayConnectionID; // @synthesize relayConnectionID=_relayConnectionID;
@property(retain, nonatomic) id <VCConnectionProtocol> pendingSecondaryConnection; // @synthesize pendingSecondaryConnection=_pendingSecondaryConnection;
@property(retain, nonatomic) id <VCConnectionProtocol> pendingPrimaryConnection; // @synthesize pendingPrimaryConnection=_pendingPrimaryConnection;
- (void)updateNegotiatedSettingsOnetoOne:(id)arg1;	// IMP=0x00000000001594f3
- (void)updateAllBitrateCapsForConnection:(id)arg1;	// IMP=0x00000000001594ed
- (void)updateOneToOneBitrateCapsForConnection:(id)arg1;	// IMP=0x00000000001594e7
- (void)flushLinkProbingStatusWithOptions:(id)arg1;	// IMP=0x00000000001594e1
- (void)queryProbingResultsWithOptions:(id)arg1;	// IMP=0x00000000001594db
- (void)stopActiveProbingWithOptions:(id)arg1;	// IMP=0x00000000001594d5
- (void)startActiveProbingWithOptions:(id)arg1;	// IMP=0x00000000001594cf
- (void)reportLinkProbingStatsWithDuplicationJustStarted:(_Bool)arg1;	// IMP=0x00000000001594c9
- (unsigned int)getByteCountWithIndex:(unsigned char)arg1 isOutgoing:(_Bool)arg2;	// IMP=0x00000000001594c1
- (unsigned int)getPacketCountWithIndex:(unsigned char)arg1 isOutgoing:(_Bool)arg2;	// IMP=0x00000000001594b9
- (void)updateSessionStats:(unsigned short)arg1;	// IMP=0x00000000001594b3
- (_Bool)shouldAcceptDataFromSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;	// IMP=0x000000000015937d
- (void)updateCellularTech:(int)arg1 forLocalInterface:(_Bool)arg2;	// IMP=0x000000000015926e
- (void)updateCellularMTU:(int)arg1;	// IMP=0x00000000001591af
- (id)getSecondaryConnectionToBeCompared;	// IMP=0x0000000000159177
- (id)getPrimaryConnectionToBeCompared;	// IMP=0x000000000015913f
- (int)updateStateWithCurrentConnection:(id)arg1 asPrimary:(_Bool)arg2 interfaceMask:(int)arg3 demote:(int *)arg4 replaceOnly:(int *)arg5;	// IMP=0x0000000000158fe8
- (_Bool)shouldNominateConnection:(id)arg1;	// IMP=0x0000000000158f72
- (int)nominateConnection:(id)arg1 asPrimary:(_Bool)arg2 interfaceMask:(int)arg3 demote:(int *)arg4 connectionPriority:(int *)arg5 replaceOnly:(int *)arg6;	// IMP=0x0000000000158ee4
- (void)reportConnection:(id)arg1 isInitialConnection:(_Bool)arg2;	// IMP=0x0000000000158893
- (int)removeConnectionWithIPPortInternal:(struct tagIPPORT *)arg1 isLocalInterface:(_Bool)arg2;	// IMP=0x0000000000158339
- (int)removeConnectionWithIPPort:(struct tagIPPORT *)arg1 isLocalInterface:(_Bool)arg2;	// IMP=0x00000000001582e7
- (int)removeConnection:(id)arg1;	// IMP=0x0000000000158258
- (int)addConnection:(id)arg1;	// IMP=0x0000000000157696
- (int)shouldNominateCandidatePairInternal:(struct tagCANDIDATEPAIR *)arg1 interfaceMask:(int)arg2 nominated:(int *)arg3 demote:(int *)arg4 connectionPriority:(int *)arg5 replaceOnly:(int *)arg6;	// IMP=0x000000000015712b
- (int)shouldNominateCandidatePair:(struct tagCANDIDATEPAIR *)arg1 interfaceMask:(int)arg2 nominated:(int *)arg3 demote:(int *)arg4 connectionPriority:(int *)arg5 replaceOnly:(int *)arg6;	// IMP=0x00000000001570b3
- (void)dealloc;	// IMP=0x000000000015702a
- (id)init;	// IMP=0x0000000000156fd8
- (void)setUpVTable;	// IMP=0x0000000000156e02

@end

