//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSSQLiteStatement, NSDictionary;

__attribute__((visibility("hidden")))
@interface AMSSQLiteCursor : NSObject
{
    NSDictionary *_columnIndexByName;	// 8 = 0x8
    struct sqlite3_stmt *_statement;	// 16 = 0x10
    AMSSQLiteStatement *_statementWrapper;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000004dcb3a
- (int)_columnTypeForColumnIndex:(int)arg1;	// IMP=0x00000000004dcb2a
- (int)columnIndexForColumnName:(id)arg1;	// IMP=0x00000000004dca82
- (id)URLForColumnName:(id)arg1;	// IMP=0x00000000004dca3c
- (id)URLForColumnIndex:(int)arg1;	// IMP=0x00000000004dc9dc
- (id)stringForColumnName:(id)arg1;	// IMP=0x00000000004dc996
- (id)stringForColumnIndex:(int)arg1;	// IMP=0x00000000004dc93b
@property(readonly, nonatomic) long long numberOfColumns;
- (id)numberForColumnName:(id)arg1;	// IMP=0x00000000004dc8e4
- (id)numberForColumnIndex:(int)arg1;	// IMP=0x00000000004dc851
- (long long)int64ForColumnName:(id)arg1;	// IMP=0x00000000004dc81d
- (long long)int64ForColumnIndex:(int)arg1;	// IMP=0x00000000004dc80d
- (int)intForColumnName:(id)arg1;	// IMP=0x00000000004dc7d9
- (int)intForColumnIndex:(int)arg1;	// IMP=0x00000000004dc7c9
- (double)doubleForColumnName:(id)arg1;	// IMP=0x00000000004dc794
- (double)doubleForColumnIndex:(int)arg1;	// IMP=0x00000000004dc784
- (id)dateForColumnName:(id)arg1;	// IMP=0x00000000004dc73e
- (id)dateForColumnIndex:(int)arg1;	// IMP=0x00000000004dc6c1
- (id)dataForColumnName:(id)arg1;	// IMP=0x00000000004dc67b
- (id)dataForColumnIndex:(int)arg1;	// IMP=0x00000000004dc60b
- (id)initWithStatement:(id)arg1;	// IMP=0x00000000004dc58c

@end

