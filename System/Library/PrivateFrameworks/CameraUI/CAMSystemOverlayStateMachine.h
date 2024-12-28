//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;
@protocol CAMSystemOverlayVisibilityDelegate;

__attribute__((visibility("hidden")))
@interface CAMSystemOverlayStateMachine : NSObject
{
    MISSING_TYPE *visibility;	// 8 = 0x8
    MISSING_TYPE *delegate;	// 16 = 0x10
    MISSING_TYPE *wantsOverlayHint;	// 24 = 0x18
    MISSING_TYPE *halfPressEnabled;	// 25 = 0x19
    MISSING_TYPE *stageStack;	// 32 = 0x20
    MISSING_TYPE *_wantsOverlayVisible;	// 40 = 0x28
    MISSING_TYPE *lastOverlayVisibleTime;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000290080
- (void)handleStage:(unsigned long long)arg1 phase:(unsigned long long)arg2;	// IMP=0x000000000028fb00
- (void)endAllStages;	// IMP=0x000000000028f3b0
@property(nonatomic, readonly) unsigned long long currentStage;
@property(nonatomic, readonly) _Bool wantsOverlayVisible;
- (void)systemOverlayVisibilityCancelledHidingTimer:(id)arg1;	// IMP=0x000000000028f1b0
- (void)systemOverlayVisibilityBeganHidingTimer:(id)arg1;	// IMP=0x000000000028f190
- (void)systemOverlayVisibility:(id)arg1 changedForReason:(long long)arg2;	// IMP=0x000000000028f140
- (void)removeReason:(long long)arg1;	// IMP=0x000000000028f0b0
- (void)addReason:(long long)arg1;	// IMP=0x000000000028f090
- (_Bool)isVisible;	// IMP=0x000000000028f070
- (void)showTransiently;	// IMP=0x000000000028f050
- (void)hideImmediately;	// IMP=0x000000000028f000
@property(nonatomic) _Bool halfPressEnabled; // @synthesize halfPressEnabled;
@property(nonatomic) _Bool wantsOverlayHint; // @synthesize wantsOverlayHint;
@property(nonatomic, copy) NSString *name;
@property(nonatomic) double delayedHideDuration;
@property(nonatomic) __weak id <CAMSystemOverlayVisibilityDelegate> delegate; // @synthesize delegate;
- (id)init;	// IMP=0x000000000028edf0

// Remaining properties
@property(nonatomic, readonly) _Bool visible;

@end
