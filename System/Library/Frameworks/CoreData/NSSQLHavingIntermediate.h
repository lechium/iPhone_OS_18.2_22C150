//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSQLWhereIntermediate;

__attribute__((visibility("hidden")))
@interface NSSQLHavingIntermediate
{
    NSSQLWhereIntermediate *_whereClause;	// 16 = 0x10
}

- (id)generateSQLStringInContext:(id)arg1;	// IMP=0x000000000025b68a
- (_Bool)isHavingScoped;	// IMP=0x000000000025b682
- (void)dealloc;	// IMP=0x000000000025b634
- (id)initWithPredicate:(id)arg1 inScope:(id)arg2 inContext:(id)arg3;	// IMP=0x000000000025b4c3

@end
