//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIVibrancyEffect;

__attribute__((visibility("hidden")))
@interface _UIVibrancyEffectLegacyImpl
{
    long long _style;	// 8 = 0x8
    _Bool _invertAutomaticStyle;	// 16 = 0x10
    _Bool _ignoreSimpleVibrancy;	// 17 = 0x11
    UIVibrancyEffect *_effect;	// 24 = 0x18
}

@property(nonatomic) UIVibrancyEffect *effect; // @synthesize effect=_effect;
- (void)appendDescriptionTo:(id)arg1;	// IMP=0x00000000003a8484
- (_Bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x00000000003a835f
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x00000000003a821b
- (id)implementationForUserInterfaceStyle:(long long)arg1;	// IMP=0x00000000003a8185
- (_Bool)invertAutomaticStyle;	// IMP=0x00000000003a8175
- (long long)style;	// IMP=0x00000000003a8164
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003a80f6
- (unsigned long long)hash;	// IMP=0x00000000003a80e5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003a804a
- (id)initWithStyle:(long long)arg1 invertAutomaticStyle:(_Bool)arg2 ignoreSimpleVibrancy:(_Bool)arg3;	// IMP=0x00000000003a7fe3
- (id)initWithStyle:(long long)arg1 invertAutomaticStyle:(_Bool)arg2;	// IMP=0x00000000003a7fce

@end

