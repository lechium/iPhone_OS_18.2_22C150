//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface OADMiterLineJoin
{
    float mLimit;	// 20 = 0x14
    unsigned int mIsLimitOverridden:1;	// 24 = 0x18
}

+ (id)defaultProperties;	// IMP=0x00600000001620b2
- (unsigned long long)hash;	// IMP=0x000000000031ca6d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d4d6e
- (_Bool)isLimitOverridden;	// IMP=0x000000000031ca47
- (void)setLimit:(float)arg1;	// IMP=0x0000000000162153
- (float)limit;	// IMP=0x000000000031c9fe
- (void)removeUnnecessaryOverrides;	// IMP=0x000000000031c88f
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;	// IMP=0x000000000031c793
- (_Bool)isAnythingOverridden;	// IMP=0x000000000031c74a
- (id)initWithDefaults;	// IMP=0x00000000001620e2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000031c68e

@end
