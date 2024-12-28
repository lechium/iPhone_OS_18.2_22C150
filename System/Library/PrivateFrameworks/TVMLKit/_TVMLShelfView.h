//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_TVShelfView.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _TVMLShelfView : _TVShelfView
{
    double _showcaseFactor;	// 8 = 0x8
}

- (_Bool)_shouldFadeCellsForBoundChangeWhileRotating;	// IMP=0x0000000000052c57
- (struct UIEdgeInsets)_selectionMarginsForCell:(id)arg1;	// IMP=0x0000000000052b7d
@property(readonly, nonatomic) _Bool shouldBindRowsTogether;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

- (id)_rowMetricsForExpectedWidth:(double)arg1 withContentInset:(struct UIEdgeInsets)arg2 firstItemRowIndex:(long long *)arg3 forShowcase:(_Bool)arg4;	// IMP=0x000000000005275d
- (id)showcaseRowMetricsForExpectedWidth:(double)arg1 withContentInset:(struct UIEdgeInsets)arg2;	// IMP=0x0000000000052744
- (id)showcaseRowMetricsForExpectedWidth:(double)arg1;	// IMP=0x00000000000526dc
- (id)rowMetricsForExpectedWidth:(double)arg1 withContentInset:(struct UIEdgeInsets)arg2 firstItemRowIndex:(long long *)arg3;	// IMP=0x00000000000526c8
- (id)rowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long *)arg2;	// IMP=0x0000000000052656
- (void)layoutSubviews;	// IMP=0x00000000000524c9
- (void)tv_setShowcaseFactor:(double)arg1;	// IMP=0x000000000005245b
- (id)init;	// IMP=0x0000000000052429
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000523d0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000523a1
- (id)initWithFrame:(struct CGRect)arg1 _shelfViewLayout:(id)arg2;	// IMP=0x0000000000052361
- (id)initWithFrame:(struct CGRect)arg1 shelfViewLayout:(id)arg2;	// IMP=0x0000000000052336

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
