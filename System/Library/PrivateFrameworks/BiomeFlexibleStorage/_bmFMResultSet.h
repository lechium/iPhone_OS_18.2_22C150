//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, _bmFMDatabase, _bmFMStatement;

__attribute__((visibility("hidden")))
@interface _bmFMResultSet : NSObject
{
    NSMutableDictionary *_columnNameToIndexMap;	// 8 = 0x8
    _Bool _shouldAutoClose;	// 16 = 0x10
    _bmFMDatabase *_parentDB;	// 24 = 0x18
    NSString *_query;	// 32 = 0x20
    _bmFMStatement *_statement;	// 40 = 0x28
}

+ (id)resultSetWithStatement:(id)arg1 usingParentDatabase:(id)arg2 shouldAutoClose:(_Bool)arg3;	// IMP=0x0060000000010ab2
- (void).cxx_destruct;	// IMP=0x00000000000121a6
@property(nonatomic) _Bool shouldAutoClose; // @synthesize shouldAutoClose=_shouldAutoClose;
@property(retain) _bmFMStatement *statement; // @synthesize statement=_statement;
@property(retain) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) _bmFMDatabase *parentDB; // @synthesize parentDB=_parentDB;
- (void)_tryLogSqliteColumnError:(int)arg1;	// IMP=0x0000000000011fea
- (_Bool)bindWithDictionary:(id)arg1;	// IMP=0x0000000000011fd0
- (_Bool)bindWithArray:(id)arg1;	// IMP=0x0000000000011fb9
- (_Bool)bindWithArray:(id)arg1 orDictionary:(id)arg2 orVAList:(struct __va_list_tag [1])arg3;	// IMP=0x0000000000011f21
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x0000000000011f0f
- (id)objectAtIndexedSubscript:(int)arg1;	// IMP=0x0000000000011efd
- (id)columnNameForIndex:(int)arg1;	// IMP=0x0000000000011eaf
- (id)objectForColumn:(id)arg1;	// IMP=0x0000000000011e7f
- (id)objectForColumnName:(id)arg1;	// IMP=0x0000000000011e6d
- (id)objectForColumnIndex:(int)arg1;	// IMP=0x0000000000011d42
- (const char *)UTF8StringForColumnName:(id)arg1;	// IMP=0x0000000000011d30
- (const char *)UTF8StringForColumn:(id)arg1;	// IMP=0x0000000000011d00
- (const char *)UTF8StringForColumnIndex:(int)arg1;	// IMP=0x0000000000011c72
- (_Bool)columnIsNull:(id)arg1;	// IMP=0x0000000000011c42
- (_Bool)columnIndexIsNull:(int)arg1;	// IMP=0x0000000000011c12
- (id)dataNoCopyForColumnIndex:(int)arg1;	// IMP=0x0000000000011b2d
- (id)dataNoCopyForColumn:(id)arg1;	// IMP=0x0000000000011afd
- (id)dataForColumnIndex:(int)arg1;	// IMP=0x0000000000011a1b
- (id)dataForColumn:(id)arg1;	// IMP=0x00000000000119eb
- (id)dateForColumnIndex:(int)arg1;	// IMP=0x00000000000118e6
- (id)dateForColumn:(id)arg1;	// IMP=0x00000000000118b6
- (id)stringForColumn:(id)arg1;	// IMP=0x0000000000011886
- (id)stringForColumnIndex:(int)arg1;	// IMP=0x00000000000117d2
- (double)doubleForColumnIndex:(int)arg1;	// IMP=0x00000000000117a9
- (double)doubleForColumn:(id)arg1;	// IMP=0x0000000000011779
- (_Bool)boolForColumnIndex:(int)arg1;	// IMP=0x0000000000011761
- (_Bool)boolForColumn:(id)arg1;	// IMP=0x0000000000011731
- (unsigned long long)unsignedLongLongIntForColumnIndex:(int)arg1;	// IMP=0x000000000001171f
- (unsigned long long)unsignedLongLongIntForColumn:(id)arg1;	// IMP=0x00000000000116ef
- (long long)longLongIntForColumnIndex:(int)arg1;	// IMP=0x00000000000116c6
- (long long)longLongIntForColumn:(id)arg1;	// IMP=0x0000000000011696
- (long long)longForColumnIndex:(int)arg1;	// IMP=0x000000000001166d
- (long long)longForColumn:(id)arg1;	// IMP=0x000000000001163d
- (int)intForColumnIndex:(int)arg1;	// IMP=0x0000000000011614
- (int)intForColumn:(id)arg1;	// IMP=0x00000000000115e4
- (int)columnIndexForName:(id)arg1;	// IMP=0x000000000001152b
- (_Bool)hasAnotherRow;	// IMP=0x0000000000011506
- (int)internalStepWithError:(id *)arg1;	// IMP=0x00000000000112bc
- (_Bool)stepWithError:(id *)arg1;	// IMP=0x00000000000112a3
- (_Bool)step;	// IMP=0x000000000001128f
- (_Bool)nextWithError:(id *)arg1;	// IMP=0x0000000000011276
- (_Bool)next;	// IMP=0x0000000000011262
@property(readonly, nonatomic) NSDictionary *resultDictionary;
- (id)resultDict;	// IMP=0x0000000000010f83
- (void)kvcMagic:(id)arg1;	// IMP=0x0000000000010e31
@property(readonly) NSMutableDictionary *columnNameToIndexMap;
@property(readonly, nonatomic) int columnCount;
- (void)close;	// IMP=0x0000000000010c4b
- (void)dealloc;	// IMP=0x0000000000010be5

@end

