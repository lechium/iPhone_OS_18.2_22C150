//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SHRotatingInstallationID : NSObject
{
}

+ (id)creationDate;	// IMP=0x0080000000026033
+ (void)setCreationDate:(id)arg1;	// IMP=0x0080000000025fbf
+ (id)installationID;	// IMP=0x0080000000025f61
+ (void)setInstallationID:(id)arg1;	// IMP=0x0080000000025eed
+ (id)cachedInstallationIDWithMaxAge:(double)arg1;	// IMP=0x0080000000025cca
+ (id)cachedInstallationForDays:(long long)arg1;	// IMP=0x0080000000025b63
+ (id)cachedInstallationIDForUTCDay;	// IMP=0x0080000000025b4f

@end
