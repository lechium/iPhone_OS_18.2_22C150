//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HKRemoteFeatureAvailabilityIOSVersionEqualsRule
{
    CDStruct_f6aba300 _targetVersion;	// 8 = 0x8
}

+ (id)ruleIdentifier;	// IMP=0x00100000002a41d7
@property(nonatomic) CDStruct_f6aba300 targetVersion; // @synthesize targetVersion=_targetVersion;
- (_Bool)evaluate;	// IMP=0x00000000002a4294
- (void)processUserInfo:(id)arg1;	// IMP=0x00000000002a41e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
