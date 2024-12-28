//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OADRelativeRect;

__attribute__((visibility("hidden")))
@interface OADPathShade
{
    OADRelativeRect *mFillToRect;	// 24 = 0x18
    int mType;	// 32 = 0x20
    _Bool mIsTypeOverridden;	// 36 = 0x24
}

+ (id)defaultProperties;	// IMP=0x0060000000027616
- (void).cxx_destruct;	// IMP=0x000000000030d45e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d5876
- (unsigned long long)hash;	// IMP=0x00000000001606f6
- (_Bool)isTypeOverridden;	// IMP=0x000000000030d438
- (void)setType:(int)arg1;	// IMP=0x0000000000027716
- (int)type;	// IMP=0x000000000030d3fa
- (_Bool)isFillToRectOverridden;	// IMP=0x0000000000160822
- (void)setFillToRect:(id)arg1;	// IMP=0x0000000000027731
- (id)fillToRect;	// IMP=0x00000000001607d8
- (void)removeUnnecessaryOverrides;	// IMP=0x000000000030d113
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;	// IMP=0x000000000030cec1
- (_Bool)isAnythingOverridden;	// IMP=0x000000000030ce5b
- (id)initWithDefaults;	// IMP=0x0000000000027646
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001d8816

@end
