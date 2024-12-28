//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEventTagProcessor.h>

@class HMDMatterThirdPartyPairingLogEvent, HMMStateTracker;

__attribute__((visibility("hidden")))
@interface HMDMatterThirdPartyPairingTagProcessor : HMMLogEventTagProcessor
{
    HMDMatterThirdPartyPairingLogEvent *_logEvent;	// 8 = 0x8
    long long _startTime;	// 16 = 0x10
    HMMStateTracker *_stateTracker;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002a9318
@property(retain, nonatomic) HMMStateTracker *stateTracker; // @synthesize stateTracker=_stateTracker;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) HMDMatterThirdPartyPairingLogEvent *logEvent; // @synthesize logEvent=_logEvent;
- (void)setLogEventCloseReason:(unsigned long long)arg1;	// IMP=0x00000000002a9270
- (void)closeSessionWithEvent:(id)arg1;	// IMP=0x00000000002a8dc8
- (void)processStateChange:(id)arg1;	// IMP=0x00000000002a8a09
- (void)processLongestPairingState:(id)arg1;	// IMP=0x00000000002a8857
- (void)processCredentialsToClientEvent:(id)arg1;	// IMP=0x00000000002a8813
- (void)processWiFiScanResultsEvent:(id)arg1;	// IMP=0x00000000002a87cf
- (void)processThreadScanResultsEvent:(id)arg1;	// IMP=0x00000000002a878b
- (void)processFirmwareVersionEvent:(id)arg1;	// IMP=0x00000000002a86b1
- (void)processPairingEventWindowOpenedSetupDuration:(id)arg1;	// IMP=0x00000000002a85d7
- (void)processAccessoryTransport:(id)arg1;	// IMP=0x00000000002a84fd
- (void)processThreadSetupDuration:(id)arg1;	// IMP=0x00000000002a8423
- (void)processCASESanityCheckEvent:(id)arg1;	// IMP=0x00000000002a8349
- (void)processAccessoryInfoEvent:(id)arg1;	// IMP=0x00000000002a7b5d
- (void)processPairingErrorCancelledEvent:(id)arg1;	// IMP=0x00000000002a7a9c
- (void)processPairingErrorEvent:(id)arg1;	// IMP=0x00000000002a76d2
- (void)processPairingSuccessEvent:(id)arg1;	// IMP=0x00000000002a76c0
- (void)processPairingStartEvent:(id)arg1;	// IMP=0x00000000002a7625
- (id)tagProcessingBlocks;	// IMP=0x00000000002a75f5
- (id)initWithSubmitter:(id)arg1;	// IMP=0x00000000002a7560

@end
