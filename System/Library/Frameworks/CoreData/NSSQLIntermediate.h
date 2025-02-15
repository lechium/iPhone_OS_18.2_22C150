//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLIntermediate : NSObject
{
    NSSQLIntermediate *_scope;	// 8 = 0x8
}

+ (_Bool)isSimpleKeypath:(id)arg1;	// IMP=0x00600000001b7359
+ (_Bool)expressionIsBasicKeypath:(id)arg1;	// IMP=0x00600000001b72ac
- (id)_generateSQLForVariableExpression:(id)arg1 allowToMany:(_Bool)arg2 inContext:(id)arg3;	// IMP=0x00000000001b848a
- (id)_generateSQLForKeyPathExpression:(id)arg1 allowToMany:(_Bool)arg2 inContext:(id)arg3;	// IMP=0x00000000001b7bc6
- (void)_promoteJoinsForSubqueryScopedKeypaths;	// IMP=0x00000000001b7985
- (void)_promoteJoinsForSubqueryScopedKeypath:(id)arg1;	// IMP=0x00000000001b75d3
- (id)_lastScopedItem;	// IMP=0x00000000001b75b4
- (_Bool)keypathExpressionIsSafeLHSForIn:(id)arg1;	// IMP=0x00000000001b759e
- (id)governingEntity;	// IMP=0x00000000001b7588
- (id)governingEntityForKeypathExpression:(id)arg1;	// IMP=0x00000000001b7572
- (id)governingAliasForKeypathExpression:(id)arg1;	// IMP=0x00000000001b755c
- (id)governingAlias;	// IMP=0x00000000001b7546
- (id)fetchIntermediateForKeypathExpression:(id)arg1;	// IMP=0x00000000001b7296
- (id)fetchIntermediate;	// IMP=0x00000000001b7280
- (void)setDisambiguatingEntity:(id)arg1 withKeypath:(id)arg2 hasToMany:(_Bool)arg3;	// IMP=0x00000000001b726a
@property(readonly, nonatomic) _Bool disambiguationKeypathHasToMany;
@property(readonly, nonatomic) NSArray *disambiguationKeypath;
@property(readonly, nonatomic) NSSQLEntity *disambiguatingEntity;
- (_Bool)isIndexExpressionScoped;	// IMP=0x00000000001b7209
- (_Bool)isIndexScoped;	// IMP=0x00000000001b71ea
- (_Bool)isUpdateColumnsScoped;	// IMP=0x00000000001b71cb
- (_Bool)isWhereScoped;	// IMP=0x00000000001b71ac
- (_Bool)isUpdateScoped;	// IMP=0x00000000001b718d
- (_Bool)isHavingScoped;	// IMP=0x00000000001b716e
- (_Bool)isFunctionScoped;	// IMP=0x00000000001b714f
- (_Bool)isTargetColumnsScoped;	// IMP=0x00000000001b7130
- (_Bool)isOrScoped;	// IMP=0x00000000001b7111
- (id)generateSQLStringInContext:(id)arg1;	// IMP=0x00000000001b70e3
- (id)initWithScope:(id)arg1;	// IMP=0x00000000001b70a4

@end

