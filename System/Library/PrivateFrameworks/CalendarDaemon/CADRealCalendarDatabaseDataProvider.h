//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CADRealCalendarDatabaseDataProvider : NSObject
{
}

+ (id)realDataProvider;	// IMP=0x0010000000054434
- (int)suggestionsCalendarRowIDInDatabase:(struct CalDatabase *)arg1;	// IMP=0x00000000000546f8
- (int)naturalLanguageSuggestionsCalendarRowIDInDatabase:(struct CalDatabase *)arg1;	// IMP=0x00000000000546bf
- (void)gatherCalendarRowIDs:(id)arg1 inStore:(void *)arg2 inDatabase:(struct CalDatabase *)arg3;	// IMP=0x000000000005455a
- (int)storeUIDForStore:(void *)arg1 inDatabase:(struct CalDatabase *)arg2;	// IMP=0x000000000005454d
- (id)storeIDForStore:(void *)arg1 inDatabase:(struct CalDatabase *)arg2;	// IMP=0x0000000000054538
- (id)accountIDForStore:(void *)arg1 inDatabase:(struct CalDatabase *)arg2;	// IMP=0x0000000000054506
- (_Bool)isIntegrationStore:(void *)arg1 inDatabase:(struct CalDatabase *)arg2;	// IMP=0x00000000000544f2
- (_Bool)isStoreDelegate:(void *)arg1 inDatabase:(struct CalDatabase *)arg2;	// IMP=0x00000000000544cc
- (_Bool)isLocalStore:(void *)arg1 inDatabase:(struct CalDatabase *)arg2;	// IMP=0x00000000000544ab
- (id)storesInDatabase:(struct CalDatabase *)arg1;	// IMP=0x0000000000054496
- (int)databaseID:(struct CalDatabase *)arg1;	// IMP=0x0000000000054489

@end
