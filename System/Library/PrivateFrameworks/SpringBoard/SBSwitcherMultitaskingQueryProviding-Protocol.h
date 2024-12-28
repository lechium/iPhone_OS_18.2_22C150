//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/SBSwitcherQueryProviding-Protocol.h>

@class NSArray, SBAppLayout, SBSwitcherScrollViewAttributes;

@protocol SBSwitcherMultitaskingQueryProviding <SBSwitcherQueryProviding>
- (void)resetAdjustedScrollingState;
- (struct CGPoint)adjustedOffsetForOffset:(struct CGPoint)arg1 translation:(struct CGPoint)arg2 startPoint:(struct CGPoint)arg3 locationInView:(struct CGPoint)arg4 horizontalVelocity:(inout double *)arg5 verticalVelocity:(inout double *)arg6;
- (double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1;
- (double)minimumTranslationToKillIndex:(unsigned long long)arg1;
- (struct CGPoint)restingOffsetForScrollOffset:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (struct CGPoint)contentOffsetForIndex:(unsigned long long)arg1 alignment:(long long)arg2;
- (SBSwitcherScrollViewAttributes *)scrollViewAttributes;
- (double)contentPageViewScaleForAppLayout:(SBAppLayout *)arg1 withScale:(double)arg2;
- (double)snapshotScaleForLayoutRole:(long long)arg1 inAppLayout:(SBAppLayout *)arg2;
- (NSArray *)adjustedContinuousExposeIdentifiersInStripFromPreviousIdentifiersInStrip:(NSArray *)arg1;
- (NSArray *)adjustedContinuousExposeIdentifiersInSwitcherFromPreviousIdentifiersInSwitcher:(NSArray *)arg1 identifiersInStrip:(NSArray *)arg2;
@end
