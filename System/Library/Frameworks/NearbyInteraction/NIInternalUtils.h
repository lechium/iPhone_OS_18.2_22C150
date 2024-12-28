//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NIInternalUtils : NSObject
{
}

+ (id)NISystemPassiveAccessIntentToString:(unsigned int)arg1;	// IMP=0x00800000000020cd
+ (id)NISystemResourceAvailabilityToString:(unsigned long long)arg1;	// IMP=0x0080000000001f87
+ (const char *)NINearbyObjectUpdateRateToShortString:(long long)arg1;	// IMP=0x0080000000001f64
+ (const char *)NINearbyObjectUpdateRateToString:(long long)arg1;	// IMP=0x0080000000001f41
+ (const char *)NISessionBackgroundModeToString:(long long)arg1;	// IMP=0x0080000000001f1e
+ (_Bool)nearbyObjectUpdateRate:(long long)arg1 isGreaterThan:(long long)arg2;	// IMP=0x0080000000001ed5
+ (_Bool)isIntValidNearbyObjectUpdateRate:(long long)arg1;	// IMP=0x0080000000001ec8
+ (_Bool)isIntValidAntennaDiversityOverride:(long long)arg1;	// IMP=0x0080000000001ebb
+ (const char *)AntennaDiversityOverrideToString:(long long)arg1;	// IMP=0x0080000000001e99
+ (_Bool)isIntValidRelationshipSpecifier:(long long)arg1;	// IMP=0x0080000000001e8c
+ (const char *)NIRelationshipSpecifierToString:(unsigned long long)arg1;	// IMP=0x0080000000001e6a

@end
