//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIGestureDelayedEventComponentDispatcher : NSObject
{
    NSMutableArray *_delayedTouches;	// 8 = 0x8
    NSMutableArray *_delayedTouchesToSend;	// 16 = 0x10
    NSMutableArray *_delayedPresses;	// 24 = 0x18
    NSMutableArray *_delayedPressesToSend;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000379739
- (void)removeDelayedTouchesToSend:(id)arg1;	// IMP=0x00000000003752ec
- (id)init;	// IMP=0x0000000000374430

@end

