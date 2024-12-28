//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SEMSpanMatchPolicy;

@interface SEMSpanMatchResultInterpreter : NSObject
{
    _Bool _useSensitiveLogging;	// 8 = 0x8
    _Bool _useMediaThresholdFiltering;	// 9 = 0x9
    SEMSpanMatchPolicy *_fuzzyPolicy;	// 16 = 0x10
    SEMSpanMatchPolicy *_exactPolicy;	// 24 = 0x18
    SEMSpanMatchPolicy *_fuzzyWithAliasPolicy;	// 32 = 0x20
    SEMSpanMatchPolicy *_exactWithAliasPolicy;	// 40 = 0x28
    SEMSpanMatchPolicy *_fuzzyWithAbsoluteThresholdPolicy;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000057838
@property(readonly, nonatomic) SEMSpanMatchPolicy *fuzzyWithAbsoluteThresholdPolicy; // @synthesize fuzzyWithAbsoluteThresholdPolicy=_fuzzyWithAbsoluteThresholdPolicy;
@property(readonly, nonatomic) SEMSpanMatchPolicy *exactWithAliasPolicy; // @synthesize exactWithAliasPolicy=_exactWithAliasPolicy;
@property(readonly, nonatomic) SEMSpanMatchPolicy *fuzzyWithAliasPolicy; // @synthesize fuzzyWithAliasPolicy=_fuzzyWithAliasPolicy;
@property(readonly, nonatomic) SEMSpanMatchPolicy *exactPolicy; // @synthesize exactPolicy=_exactPolicy;
@property(readonly, nonatomic) SEMSpanMatchPolicy *fuzzyPolicy; // @synthesize fuzzyPolicy=_fuzzyPolicy;
- (id)_rankerPolicyForGroupKey:(id)arg1;	// IMP=0x00000000000575d2
- (_Bool)_checkEligibilityOfSpanMatch:(id)arg1 allowPartialMatch:(_Bool)arg2 allowApproxMatch:(_Bool)arg3 allowAliasMatch:(_Bool)arg4 query:(id)arg5;	// IMP=0x0000000000056851
- (id)_applyRegionalSpanRankingToSortedGroupMatches:(id)arg1 regionalThresholdScalar:(float)arg2 globalThresholdScalar:(float)arg3 maximalScore:(float)arg4;	// IMP=0x00000000000560c0
- (void)_addScoredMatch:(id)arg1 toSortedArray:(id)arg2;	// IMP=0x0000000000055f01
- (float)_scoreSpanMatch:(id)arg1 policy:(id)arg2;	// IMP=0x0000000000055e3e
- (id)_filterRankAndThresholdCandidates:(id)arg1 ofQuery:(id)arg2 withPolicy:(id)arg3;	// IMP=0x0000000000055696
- (id)_groupKeyForCascadeCandidate:(id)arg1;	// IMP=0x00000000000553c1
- (id)_groupKeyForCandidate:(id)arg1;	// IMP=0x0000000000055233
- (id)_sortCandidates:(id)arg1;	// IMP=0x0000000000054f76
- (id)interpretSpanMatchResults:(id)arg1 ofQuery:(id)arg2;	// IMP=0x0000000000053ee9
- (id)init;	// IMP=0x0000000000053d96

@end
