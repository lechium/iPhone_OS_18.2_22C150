//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIGestureRecognizer.h>

@class NSMutableArray, NSTimer;

__attribute__((visibility("hidden")))
@interface AVTouchGestureRecognizer : UIGestureRecognizer
{
    NSTimer *_gestureWarmUpDelayTimer;	// 8 = 0x8
    NSMutableArray *_candidateGestureIncrementsMultiTouchInfo;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000139960
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000013991f
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000001398da
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000139896
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000013974d
- (void)reset;	// IMP=0x00000000001396f6
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;	// IMP=0x00000000001396ee

@end
