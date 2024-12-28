//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLCompoundWhereIntermediate
{
    NSMutableArray *_subclauses;	// 24 = 0x18
    NSSQLEntity *_disambiguatingEntity;	// 32 = 0x20
    NSArray *_disambiguationKeypath;	// 40 = 0x28
    _Bool _disambiguationKeypathHasToMany;	// 48 = 0x30
}

- (_Bool)isOrScoped;	// IMP=0x000000000017d3be
- (id)generateSQLStringInContext:(id)arg1;	// IMP=0x000000000017d009
- (void)setDisambiguatingEntity:(id)arg1 withKeypath:(id)arg2 hasToMany:(_Bool)arg3;	// IMP=0x000000000017cfcd
- (_Bool)disambiguationKeypathHasToMany;	// IMP=0x000000000017cf9d
- (id)disambiguationKeypath;	// IMP=0x000000000017cf75
- (id)disambiguatingEntity;	// IMP=0x000000000017cf4d
- (void)dealloc;	// IMP=0x000000000017cee2
- (id)initWithPredicate:(id)arg1 inScope:(id)arg2 inContext:(id)arg3;	// IMP=0x000000000017cbf3

@end
