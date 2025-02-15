//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UILongPressGestureRecognizer, UIView;

__attribute__((visibility("hidden")))
@interface UITextTouchObservingInteraction : NSObject
{
    UIView *_view;	// 8 = 0x8
    UILongPressGestureRecognizer *_longPressGesture;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000001759085
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void)longPressObserved:(id)arg1;	// IMP=0x0000000001758fa4
- (void)_createGestureRecognizersIfNecessary;	// IMP=0x0000000001758e60
- (void)_removeGestureRecognizers;	// IMP=0x0000000001758df0
- (void)_addGestureRecognizers;	// IMP=0x0000000001758d73
- (void)didMoveToView:(id)arg1;	// IMP=0x0000000001758d3c
- (void)willMoveToView:(id)arg1;	// IMP=0x0000000001758d23

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

