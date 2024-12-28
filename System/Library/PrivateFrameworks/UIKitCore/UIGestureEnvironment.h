//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray, NSMutableSet, UIGestureGraph;
@protocol BSInvalidatable;

__attribute__((visibility("hidden")))
@interface UIGestureEnvironment : NSObject
{
    struct __CFRunLoopObserver *_gestureEnvironmentUpdateObserver;	// 8 = 0x8
    NSMutableSet *_gestureRecognizersNeedingUpdate;	// 16 = 0x10
    NSMutableSet *_gestureRecognizersNeedingReset;	// 24 = 0x18
    NSMutableSet *_gestureRecognizersNeedingRemoval;	// 32 = 0x20
    NSMutableArray *_dirtyGestureRecognizers;	// 40 = 0x28
    NSMutableSet *_gestureRecognizersBlockedFromReset;	// 48 = 0x30
    unsigned long long _lastBlockedResetEvaluationMachTime;	// 56 = 0x38
    id <BSInvalidatable> _blockedResetStateCaptureToken;	// 64 = 0x40
    NSMutableArray *_preUpdateActions;	// 72 = 0x48
    _Bool _dirtyGestureRecognizersUnsorted;	// 80 = 0x50
    _Bool _updateExclusivity;	// 81 = 0x51
    _Bool _isUpdatingGestureEnvironment;	// 82 = 0x52
    UIGestureGraph *_dependencyGraph;	// 88 = 0x58
    NSMapTable *_nodesByGestureRecognizer;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000c5581a
- (void)removeGestureRecognizer:(id)arg1;	// IMP=0x0000000000c51af2
- (void)addGestureRecognizer:(id)arg1;	// IMP=0x0000000000c5180d
- (void)dealloc;	// IMP=0x0000000000c50d28
- (id)init;	// IMP=0x0000000000c5060a

@end
