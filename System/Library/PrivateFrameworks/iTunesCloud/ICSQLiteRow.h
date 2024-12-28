//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICSQLiteStatement, NSDictionary;

__attribute__((visibility("hidden")))
@interface ICSQLiteRow : NSObject
{
    NSDictionary *_columnIndexByName;	// 8 = 0x8
    struct sqlite3_stmt *_statement;	// 16 = 0x10
    ICSQLiteStatement *_statementWrapper;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000012de48
- (int)columnIndexForColumnName:(id)arg1;	// IMP=0x000000000012dda0
- (id)stringForColumnName:(id)arg1;	// IMP=0x000000000012dd5a
- (id)stringForColumnIndex:(int)arg1;	// IMP=0x000000000012dcff
@property(readonly, nonatomic) long long numberOfColumns;
- (id)numberForColumnName:(id)arg1;	// IMP=0x000000000012dca8
- (id)numberForColumnIndex:(int)arg1;	// IMP=0x000000000012dc15
- (long long)int64ForColumnName:(id)arg1;	// IMP=0x000000000012dbe1
- (long long)int64ForColumnIndex:(int)arg1;	// IMP=0x000000000012dbd1
- (int)intForColumnName:(id)arg1;	// IMP=0x000000000012db9d
- (int)intForColumnIndex:(int)arg1;	// IMP=0x000000000012db8d
- (double)doubleForColumnName:(id)arg1;	// IMP=0x000000000012db58
- (double)doubleForColumnIndex:(int)arg1;	// IMP=0x000000000012db48
- (id)dataForColumnName:(id)arg1;	// IMP=0x000000000012db02
- (id)dataForColumnIndex:(int)arg1;	// IMP=0x000000000012da92
- (id)initWithStatement:(id)arg1;	// IMP=0x000000000012da13

@end
