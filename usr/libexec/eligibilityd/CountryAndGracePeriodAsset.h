//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString;

@interface CountryAndGracePeriodAsset
{
    NSSet *countryCodes;	// 8 = 0x8
    unsigned long long gracePeriodInSeconds;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000ad64
@property(nonatomic) unsigned long long gracePeriodInSeconds; // @synthesize gracePeriodInSeconds;
@property(retain, nonatomic) NSSet *countryCodes; // @synthesize countryCodes;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000aa28
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000a904
- (id)initForMobileAssetRootKey:(id)arg1 withDictionary:(id)arg2;	// IMP=0x001000000000a8d5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end
