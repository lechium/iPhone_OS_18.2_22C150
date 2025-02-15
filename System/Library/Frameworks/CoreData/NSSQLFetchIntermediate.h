//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableDictionary, NSSQLGroupByIntermediate, NSSQLHavingIntermediate, NSSQLOffsetIntermediate, NSSQLSelectIntermediate;

__attribute__((visibility("hidden")))
@interface NSSQLFetchIntermediate
{
    NSSQLSelectIntermediate *_selectClause;	// 64 = 0x40
    NSSQLGroupByIntermediate *_groupByClause;	// 72 = 0x48
    NSSQLHavingIntermediate *_havingClause;	// 80 = 0x50
    NSSQLOffsetIntermediate *_offsetClause;	// 88 = 0x58
    NSMutableArray *_groupByKeypaths;	// 96 = 0x60
    _Bool _isDictionaryCountFetch;	// 104 = 0x68
    NSMutableArray *_joinIntermediates;	// 112 = 0x70
    NSMutableDictionary *_joinKeypaths;	// 120 = 0x78
}

- (id)fetchIntermediateForKeypathExpression:(id)arg1;	// IMP=0x00000000001ad37b
- (id)generateSQLStringInContext:(id)arg1;	// IMP=0x00000000001acd50
- (id)selectIntermediate;	// IMP=0x00000000001ac459
- (_Bool)isFunctionScoped;	// IMP=0x00000000001ac3e9
- (id)fetchIntermediate;	// IMP=0x00000000001ac3e0
- (void)dealloc;	// IMP=0x00000000001ac31b
- (id)initWithScope:(id)arg1;	// IMP=0x00000000001ac2b1

@end

