//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCSessionDownlinkBandwidthAllocator : NSObject
{
    NSMutableDictionary *_allocatedMediaEntriesForClients;	// 8 = 0x8
    unsigned int _maxConcurrentVideoClients;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_clientQueue;	// 24 = 0x18
    NSMutableArray *_clients;	// 32 = 0x20
    NSMutableDictionary *_selectedMediaEntriesForClients;	// 40 = 0x28
    NSMutableArray *_sortedMediaEntries;	// 48 = 0x30
    struct opaqueRTCReporting *_reportingAgent;	// 56 = 0x38
    _Bool _forceFullBandwidth;	// 64 = 0x40
}

+ (id)sortMediaEntriesGroupIds:(id)arg1;	// IMP=0x006000000039b186
@property(nonatomic) _Bool forceFullBandwidth; // @synthesize forceFullBandwidth=_forceFullBandwidth;
- (void)client:(id)arg1 didActualNetworkBitrateChangeForStreamGroupID:(unsigned int)arg2;	// IMP=0x000000000039f053
- (void)deregisterForBandwidthAllocationWithClient:(id)arg1;	// IMP=0x000000000039ef84
- (void)reportingSessionParticipantEventBitrateChanged:(id)arg1 optedInNetworkBitrate:(unsigned int)arg2 actualNetworkBitrate:(unsigned int)arg3 optedInStreamID:(id)arg4 actualStreamID:(id)arg5;	// IMP=0x000000000039ee5e
- (void)registerForBandwidthAllocationWithClient:(id)arg1;	// IMP=0x000000000039ed8f
- (void)reset;	// IMP=0x000000000039ed4a
- (void)updateSelectedMediaEntriesForClientWithUUID:(id)arg1;	// IMP=0x000000000039e9d2
- (id)distributeBitrate:(unsigned int)arg1;	// IMP=0x000000000039be60
@property(readonly, nonatomic) unsigned long long simultaneousTalkers;
- (void)updateHighestAudioBitrates:(id)arg1 bitrate:(unsigned int)arg2;	// IMP=0x000000000039bd63
- (unsigned int)requiredAudioBitrate:(unsigned int)arg1 highestAudioBitrates:(id)arg2;	// IMP=0x000000000039bcda
- (void)sortMediaEntries;	// IMP=0x000000000039b2cb
- (void)dealloc;	// IMP=0x000000000039b0f4
- (id)initWithReportingAgent:(struct opaqueRTCReporting *)arg1;	// IMP=0x000000000039b01e

@end
