//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface _UIVibrancyEffectModernCompositedImpl
{
    long long _compositingMode;	// 8 = 0x8
    NSString *_filterType;	// 16 = 0x10
    UIColor *_compositingColor;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003a929a
- (void)appendDescriptionTo:(id)arg1;	// IMP=0x00000000003a921e
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x00000000003a914e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003a90cf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003a8fe4
- (unsigned long long)hash;	// IMP=0x00000000003a8fd3
- (id)implementationReplacingTintColor:(id)arg1;	// IMP=0x00000000003a8edc
- (id)initWithCompositingMode:(long long)arg1 compositingColor:(id)arg2;	// IMP=0x00000000003a8d84

@end
