//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDDoorbellChimeProfile
{
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    long long _lastChimeMode;	// 24 = 0x18
    NSDate *_lastChimeDate;	// 32 = 0x20
    NSString *_lastPersonIdentificationText;	// 40 = 0x28
    NSUUID *_lastAccessoryUUID;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000004b7872
@property(copy, nonatomic) NSUUID *lastAccessoryUUID; // @synthesize lastAccessoryUUID=_lastAccessoryUUID;
@property(copy, nonatomic) NSString *lastPersonIdentificationText; // @synthesize lastPersonIdentificationText=_lastPersonIdentificationText;
@property(copy, nonatomic) NSDate *lastChimeDate; // @synthesize lastChimeDate=_lastChimeDate;
@property(nonatomic) long long lastChimeMode; // @synthesize lastChimeMode=_lastChimeMode;
- (id)doorbellMessagePayloadWithChimeMode:(long long)arg1 chimeDate:(id)arg2 personIdentificationText:(id)arg3 accessoryUUID:(id)arg4;	// IMP=0x00000000004b768f
- (void)handleDoorbellChimeMessage:(id)arg1;	// IMP=0x00000000004b71bd
- (void)sendDoorbellChimeMessageWithChimeMode:(long long)arg1 chimeDate:(id)arg2 personIdentificationText:(id)arg3 accessoryUUID:(id)arg4;	// IMP=0x00000000004b6af8
- (void)registerForMessages;	// IMP=0x00000000004b688d
- (id)initWithAppleMediaAccessory:(id)arg1;	// IMP=0x00000000004b674a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

