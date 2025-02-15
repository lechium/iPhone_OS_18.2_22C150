//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FMCoreUI/UIGestureRecognizerDelegate-Protocol.h>

@class FMMapGestureRecognizer, UIView;

@protocol FMMapGestureRecognizerDelegate <UIGestureRecognizerDelegate>

@optional
- (void)userLocationTapped:(UIView *)arg1;
- (void)calloutButtonTapped:(UIView *)arg1;
- (void)mapDoubleTapped:(FMMapGestureRecognizer *)arg1;
- (void)mapTapped:(FMMapGestureRecognizer *)arg1;
- (void)mapSwipedEnd:(FMMapGestureRecognizer *)arg1 withPercent:(double)arg2;
- (void)mapSwipedBegin:(FMMapGestureRecognizer *)arg1;
- (void)mapSwiped:(FMMapGestureRecognizer *)arg1 withPercent:(double)arg2;
- (void)mapTouchMoved:(FMMapGestureRecognizer *)arg1;
- (void)mapTouchCancelled:(FMMapGestureRecognizer *)arg1;
- (void)mapTouchEnded:(FMMapGestureRecognizer *)arg1;
- (void)mapTouchBegan:(FMMapGestureRecognizer *)arg1;
@end

