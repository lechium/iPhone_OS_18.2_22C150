//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface UISubstituteKeyboardSession : NSObject
{
    MISSING_TYPE *viewController;	// 8 = 0x8
    MISSING_TYPE *presentationController;	// 16 = 0x10
    MISSING_TYPE *animationController;	// 24 = 0x18
    MISSING_TYPE *traitChangeObservation;	// 32 = 0x20
    MISSING_TYPE *wasShowingInputOrAssistantViews;	// 40 = 0x28
    MISSING_TYPE *responder;	// 48 = 0x30
}

+ (id)sharedSession;	// IMP=0x00100000001ef100
+ (id)activeSession;	// IMP=0x00100000001ef030
- (void).cxx_destruct;	// IMP=0x00000000001ef570
- (void)keyboardAboutToHide:(id)arg1;	// IMP=0x00000000001ef4b0
- (void)firstResponderDidChange:(id)arg1;	// IMP=0x00000000001ef490
- (void)updateUserInterfaceStyle;	// IMP=0x00000000001ef3f0
- (void)cancel;	// IMP=0x00000000001ef3c0
- (void)hideForResponder:(id)arg1;	// IMP=0x00000000001ef260
- (void)hide;	// IMP=0x00000000001ef230
- (void)showForResponder:(id)arg1 sender:(id)arg2;	// IMP=0x00000000001ef190
@property(nonatomic, readonly) _Bool isPresenting;
@property(nonatomic, readonly) _Bool isPresented;
- (id)init;	// IMP=0x00000000001ef010
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x00000000001ef750
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x00000000001ef6b0
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x00000000001ef5f0
- (void)dimmingViewWasTapped:(id)arg1;	// IMP=0x00000000001ef7e0
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x00000000001ef930

@end

