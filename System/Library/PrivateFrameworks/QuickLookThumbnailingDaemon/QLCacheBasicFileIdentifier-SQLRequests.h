//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuickLookThumbnailing/QLCacheBasicFileIdentifier.h>

@interface QLCacheBasicFileIdentifier (SQLRequests)
+ (_Bool)removeFromDatabase:(id)arg1 fileWithCacheId:(unsigned long long)arg2;	// IMP=0x00500000000029e8
+ (id)whereClauseToFindCacheId;	// IMP=0x00500000000028d6
+ (id)queryStringToFindCacheIds;	// IMP=0x00500000000028c9
+ (id)tableName;	// IMP=0x00500000000028bc
+ (unsigned long long)rowIdFromCacheId:(unsigned long long)arg1;	// IMP=0x00500000000028ae
+ (unsigned long long)cacheIdFromRowId:(unsigned long long)arg1;	// IMP=0x00500000000028a0
- (struct sqlite3_stmt *)statementToFindCacheIdInDatabase:(id)arg1;	// IMP=0x001000000000296e
- (void)bindInFindCacheIdStatement:(struct sqlite3_stmt *)arg1 database:(id)arg2 startingAtIndex:(unsigned int)arg3 gettingNextIndex:(unsigned int *)arg4;	// IMP=0x00100000000028f8
@end

