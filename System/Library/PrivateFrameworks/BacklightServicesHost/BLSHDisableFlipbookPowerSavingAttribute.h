//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BacklightServices/BLSAttribute.h>

__attribute__((visibility("hidden")))
@interface BLSHDisableFlipbookPowerSavingAttribute : BLSAttribute
{
    unsigned long long _reason;	// 8 = 0x8
}

+ (id)disablePowerSavingForReason:(unsigned long long)arg1;	// IMP=0x006000000001027b
@property(readonly, nonatomic) unsigned long long reason; // @synthesize reason=_reason;
- (_Bool)checkEntitlementSourceForRequiredEntitlements:(id)arg1 error:(out id *)arg2;	// IMP=0x00000000000102d1

@end

