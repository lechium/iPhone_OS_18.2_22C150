//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface AudioPreferences
{
    unsigned long long _drivingVoiceGuidance;	// 8 = 0x8
    unsigned long long _walkingVoiceGuidance;	// 16 = 0x10
    unsigned long long _cyclingVoiceGuidance;	// 24 = 0x18
    NSNumber *_drivingModernPreference;	// 32 = 0x20
    NSNumber *_walkingModernPreference;	// 40 = 0x28
    NSNumber *_cyclingModernPreference;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000001c900
- (void)valueChangedForGEOConfigKey:(CDStruct_35640fce)arg1;	// IMP=0x001000000001c888
- (id)_values;	// IMP=0x001000000001c760
- (id)_keys;	// IMP=0x001000000001c753
- (void)loadValuesFromDefaults;	// IMP=0x001000000001c10d
- (void)synchronize;	// IMP=0x001000000001be13
- (void)setGuidanceLevel:(unsigned long long)arg1 forTransportType:(int)arg2;	// IMP=0x001000000001bde2
- (unsigned long long)guidanceLevelForTransportType:(int)arg1;	// IMP=0x001000000001bdb1
- (_Bool)_migratedMutedValue;	// IMP=0x001000000001bd3e
- (void)_migrateVolumeSettings;	// IMP=0x001000000001bb8d
@property(nonatomic) unsigned long long cyclingVoiceGuidance;
@property(nonatomic) unsigned long long walkingVoiceGuidance;
@property(nonatomic) unsigned long long drivingVoiceGuidance;
- (void)dealloc;	// IMP=0x001000000001b8ea
- (void)_commonInit;	// IMP=0x000000000001b86f
- (id)initWithCopy:(id)arg1;	// IMP=0x001000000001b73a
- (id)initWithDefaults:(id)arg1;	// IMP=0x001000000001b6ee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
