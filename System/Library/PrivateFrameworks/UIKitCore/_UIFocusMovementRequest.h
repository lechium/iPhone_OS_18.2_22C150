//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIFocusSystem, _UIFocusInputDeviceInfo, _UIFocusItemInfo, _UIFocusMovementInfo, _UIFocusSearchInfo;

__attribute__((visibility("hidden")))
@interface _UIFocusMovementRequest : NSObject
{
    _Bool _shouldPerformHapticFeedback;	// 8 = 0x8
    _Bool _overridesDeferredFocusUpdate;	// 9 = 0x9
    UIFocusSystem *_focusSystem;	// 16 = 0x10
    _UIFocusInputDeviceInfo *_inputDeviceInfo;	// 24 = 0x18
    _UIFocusItemInfo *_focusedItemInfo;	// 32 = 0x20
    _UIFocusMovementInfo *_movementInfo;	// 40 = 0x28
    _UIFocusSearchInfo *_searchInfo;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000168c426
@property(nonatomic) _Bool overridesDeferredFocusUpdate; // @synthesize overridesDeferredFocusUpdate=_overridesDeferredFocusUpdate;
@property(retain, nonatomic) _UIFocusSearchInfo *searchInfo; // @synthesize searchInfo=_searchInfo;
@property(retain, nonatomic) _UIFocusMovementInfo *movementInfo; // @synthesize movementInfo=_movementInfo;
@property(retain, nonatomic) _UIFocusItemInfo *focusedItemInfo; // @synthesize focusedItemInfo=_focusedItemInfo;
@property(retain, nonatomic) _UIFocusInputDeviceInfo *inputDeviceInfo; // @synthesize inputDeviceInfo=_inputDeviceInfo;
@property(nonatomic) _Bool shouldPerformHapticFeedback; // @synthesize shouldPerformHapticFeedback=_shouldPerformHapticFeedback;
@property(readonly, nonatomic) __weak UIFocusSystem *focusSystem; // @synthesize focusSystem=_focusSystem;
@property(readonly, nonatomic) _Bool allowsOverridingPreferedFocusEnvironments;
@property(readonly, nonatomic) _Bool allowsDeferral;
@property(readonly, nonatomic) _Bool allowsFocusingCurrentItem;
@property(readonly, nonatomic) _Bool requiresEnvironmentValidation;
@property(readonly, nonatomic) _Bool requiresNextFocusedItem;
@property(readonly, nonatomic) _Bool shouldPlayFocusSound;
@property(readonly, nonatomic, getter=shouldScrollIfNecessary) _Bool scrollIfNecessary;
@property(readonly, nonatomic, getter=isMovementRequest) _Bool movementRequest;
@property(readonly, nonatomic) _UIFocusMovementRequest *fallbackRequest;
- (id)_requestByRedirectingRequestToFocusSystem:(id)arg1;	// IMP=0x000000000168c136
- (id)initWithFocusSystem:(id)arg1;	// IMP=0x000000000168c055
- (id)init;	// IMP=0x000000000168bfce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
