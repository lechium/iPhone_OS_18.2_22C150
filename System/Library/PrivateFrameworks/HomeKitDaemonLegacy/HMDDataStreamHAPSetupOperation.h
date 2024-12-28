//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HMDDataStreamHAPSetupOperation
{
    unsigned long long _maxControllerTransportMTU;	// 56 = 0x38
    long long _sessionIdentifier;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x001000000024fe53
@property(nonatomic) long long sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, nonatomic) unsigned long long maxControllerTransportMTU; // @synthesize maxControllerTransportMTU=_maxControllerTransportMTU;
- (void)processTransportSetupResponse:(id)arg1;	// IMP=0x000000000024f7fe
- (void)startSetup;	// IMP=0x000000000024f3b7
- (void)_readRequiredTransportCharacteristics;	// IMP=0x000000000024ef48
- (void)setMaxControllerTransportMTU:(unsigned long long)arg1;	// IMP=0x000000000024ef30
- (id)initWithAccessory:(id)arg1 queue:(id)arg2 logIdentifier:(id)arg3 transferManagementService:(id)arg4 maxControllerTransportMTU:(unsigned long long)arg5 setupOperationReadRequired:(_Bool)arg6;	// IMP=0x000000000024eece

@end
