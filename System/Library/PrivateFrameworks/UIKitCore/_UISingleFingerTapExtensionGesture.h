//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITapGestureRecognizer.h"

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface _UISingleFingerTapExtensionGesture : UITapGestureRecognizer
{
    NSMutableSet *_trackedEvents;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000001b6a42b
- (long long)_modifierFlags;	// IMP=0x0000000001b6a2c9
- (_Bool)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000001b6a25c
- (void)_resetGestureRecognizer;	// IMP=0x0000000001b6a213
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000001b6a1b8
- (_Bool)_gestureCanBeginWithEvent:(id)arg1;	// IMP=0x0000000001b6a1b0

@end

