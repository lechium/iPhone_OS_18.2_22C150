//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableArray, UIFocusAnimationCoordinator;

__attribute__((visibility("hidden")))
@interface _UIFocusAnimationCoordinatorManager : NSObject
{
    UIFocusAnimationCoordinator *_activeFocusAnimationCoordinator;	// 8 = 0x8
    NSHashTable *_unfocusingItems;	// 16 = 0x10
    double _lastFocusUpdateTime;	// 24 = 0x18
    UIFocusAnimationCoordinator *_lastFocusingItemAnimationCoordinator;	// 32 = 0x20
    NSMutableArray *_inheritedAnimationCoordinatorActiveAnimationStack;	// 40 = 0x28
}

+ (id)animationCoordinatorForContext:(id)arg1;	// IMP=0x0060000000aa041b
+ (id)activeCoordinatorMap;	// IMP=0x0060000000aa03b6
- (void).cxx_destruct;	// IMP=0x0000000000aa0e77
@property(retain, nonatomic) NSMutableArray *inheritedAnimationCoordinatorActiveAnimationStack; // @synthesize inheritedAnimationCoordinatorActiveAnimationStack=_inheritedAnimationCoordinatorActiveAnimationStack;
@property(retain, nonatomic) UIFocusAnimationCoordinator *lastFocusingItemAnimationCoordinator; // @synthesize lastFocusingItemAnimationCoordinator=_lastFocusingItemAnimationCoordinator;
@property(nonatomic) double lastFocusUpdateTime; // @synthesize lastFocusUpdateTime=_lastFocusUpdateTime;
@property(readonly, nonatomic) NSHashTable *unfocusingItems; // @synthesize unfocusingItems=_unfocusingItems;
@property(retain, nonatomic) UIFocusAnimationCoordinator *activeFocusAnimationCoordinator; // @synthesize activeFocusAnimationCoordinator=_activeFocusAnimationCoordinator;
- (void)_performDelayedFocusingAnimationIfNecessary;	// IMP=0x0000000000aa0d8a
- (void)_scheduleDelayedFocusingAnimationWithDelay:(double)arg1;	// IMP=0x0000000000aa0cc6
- (void)didUpdateFocusInContext:(id)arg1 fromItem:(id)arg2;	// IMP=0x0000000000aa0698
- (id)willUpdateFocusInContext:(id)arg1;	// IMP=0x0000000000aa04bc
- (id)init;	// IMP=0x0000000000aa032c

@end
