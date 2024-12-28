//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber, SEMSQLCommandJoin, SEMSQLCommandOrder;

@interface SEMDatabaseSelectBuilder
{
    SEMSQLCommandJoin *_join;	// 8 = 0x8
    SEMSQLCommandOrder *_order;	// 16 = 0x10
    NSArray *_columns;	// 24 = 0x18
    _Bool _count;	// 32 = 0x20
    NSNumber *_limit;	// 40 = 0x28
    NSNumber *_offset;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000221ce
- (void)setOffset:(id)arg1;	// IMP=0x00000000000221ba
- (void)setLimit:(id)arg1;	// IMP=0x00000000000221a6
- (void)setCount:(_Bool)arg1;	// IMP=0x0000000000022196
- (void)setColumns:(id)arg1 withTablePrefixes:(id)arg2;	// IMP=0x0000000000022001
- (void)setColumns:(id)arg1;	// IMP=0x0000000000021fcd
- (void)setCommandOrder:(id)arg1;	// IMP=0x0000000000021f99
- (void)setJoinWithTable:(id)arg1 joinCriterion:(id)arg2;	// IMP=0x0000000000021f0f
- (void)setCommandCriterion:(id)arg1;	// IMP=0x0000000000021ee0
- (id)build;	// IMP=0x0000000000021dea
- (id)initWithTableName:(id)arg1;	// IMP=0x0000000000021d49

@end
