//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuickLookThumbnailing/QLCacheBasicVersionedFileIdentifier.h>

@interface QLCacheBasicVersionedFileIdentifier (SQLRequests)
- (id)initWithSteppedStatement:(struct sqlite3_stmt *)arg1 database:(id)arg2;	// IMP=0x0060000000002d91
- (struct sqlite3_stmt *)statementToUpdateRecordWithCacheIdentifier:(unsigned long long)arg1 inDatabase:(id)arg2;	// IMP=0x0060000000002bf7
- (struct sqlite3_stmt *)statementToInsertIntoDatabase:(id)arg1;	// IMP=0x0060000000002a8f
@end
