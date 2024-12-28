//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MSPSharedTripGroupSession, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MSPSenderIDSStrategy
{
    MSPSharedTripGroupSession *_groupSession;	// 32 = 0x20
    NSMutableDictionary *_lastETAUpdateDates;	// 40 = 0x28
    NSMutableDictionary *_participantsByCapabilities;	// 48 = 0x30
    NSMutableDictionary *_capabilitiesByParticipant;	// 56 = 0x38
}

+ (double)_etaRefreshIntervalForState:(id)arg1;	// IMP=0x006000000000ebdc
- (void).cxx_destruct;	// IMP=0x0000000000011d39
@property(retain, nonatomic) NSMutableDictionary *capabilitiesByParticipant; // @synthesize capabilitiesByParticipant=_capabilitiesByParticipant;
@property(retain, nonatomic) NSMutableDictionary *participantsByCapabilities; // @synthesize participantsByCapabilities=_participantsByCapabilities;
@property(retain, nonatomic) NSMutableDictionary *lastETAUpdateDates; // @synthesize lastETAUpdateDates=_lastETAUpdateDates;
- (void)_sendTrafficUpdate:(id)arg1 to:(id)arg2;	// IMP=0x0000000000011a0a
- (void)_sendRouteUpdate:(id)arg1 to:(id)arg2;	// IMP=0x000000000001174a
- (void)_sendETAUpdate:(id)arg1 to:(id)arg2;	// IMP=0x00000000000112fc
- (void)_sendStoppedUpdate:(id)arg1 to:(id)arg2;	// IMP=0x0000000000010fc2
- (void)_sendResumingToNextDestinationUpdate:(id)arg1 to:(id)arg2;	// IMP=0x0000000000010d02
- (void)_sendDestinationReachedUpdate:(id)arg1 to:(id)arg2;	// IMP=0x0000000000010a42
- (void)_sendUpdatedWaypoints:(id)arg1 to:(id)arg2;	// IMP=0x0000000000010503
- (void)_sendCompatibleInstancesOfState:(id)arg1 to:(id)arg2;	// IMP=0x000000000000fbfd
- (void)didFetchCapabilitiesForParticipants:(id)arg1;	// IMP=0x000000000000fbf7
- (void)fetchCapabilitiesForParticipants:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000fb0a
- (void)addParticipants:(id)arg1;	// IMP=0x000000000000f3d3
- (void)_sendETAUpdateIfNeededTo:(id)arg1;	// IMP=0x000000000000f0a7
- (_Bool)_needToSendETARefreshFor:(id)arg1 state:(id)arg2;	// IMP=0x000000000000ebfa
- (_Bool)setState:(id)arg1 forEvent:(unsigned long long)arg2;	// IMP=0x000000000000e524
- (id)_filteredParticipantsForState:(id)arg1 event:(unsigned long long)arg2;	// IMP=0x000000000000e506
- (id)initWithGroupSession:(id)arg1;	// IMP=0x000000000000e437

@end
