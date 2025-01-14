//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PencilKit/NSObject-Protocol.h>
#import <PencilKit/PKDrawingReplaySupport-Protocol.h>

@class NSSet, UIEvent, UITouch;

@protocol PKDrawingGestureTarget <NSObject, PKDrawingReplaySupport>
- (void)drawingEstimatedPropertiesUpdated:(NSSet *)arg1;
- (void)drawingCancelled;
- (void)drawingEnded:(UITouch *)arg1;
- (void)drawingMoved:(UITouch *)arg1 withEvent:(UIEvent *)arg2;
- (void)drawingBegan:(UITouch *)arg1;

@optional
- (_Bool)drawingShouldBegin:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
@end

