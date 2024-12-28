//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIAbstractDynamicButtonGestureRecognizer.h"

@class _UIPhysicalButtonConfigurationSet;
@protocol _UIGestureRecognizerDynamicButtonObserving;

__attribute__((visibility("hidden")))
@interface _UIDynamicButtonNotifyingGestureRecognizer : _UIAbstractDynamicButtonGestureRecognizer
{
    id <_UIGestureRecognizerDynamicButtonObserving> _dynamicButtonObserver;	// 8 = 0x8
    unsigned long long _activeDynamicButtons;	// 16 = 0x10
    _UIPhysicalButtonConfigurationSet *_physicalButtonConfigurations;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000114765a
- (void)reset;	// IMP=0x0000000001147645
- (void)_dynamicButtonsCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000001147483
- (void)_dynamicButtonsEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000011472c1
- (void)_dynamicButtonsChanged:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000001147222
- (void)_dynamicButtonsBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000001147059
- (_Bool)_shouldReceiveDynamicButton:(id)arg1;	// IMP=0x0000000001147002
- (_Bool)shouldReceiveEvent:(id)arg1;	// IMP=0x0000000001146fe5

@end
