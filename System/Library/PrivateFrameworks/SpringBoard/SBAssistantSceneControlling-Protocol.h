//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBAssistantRootViewController, SBAssistantSessionPresentationContext, SBWindow;
@protocol SBAssistantSceneControllingObserver, SBHardwareButtonLaunchPreludeAnimationToken;

@protocol SBAssistantSceneControlling <NSObject>
@property(readonly, nonatomic) SBAssistantRootViewController *assistantRootViewController;
@property(readonly, nonatomic) SBWindow *window;
@property(readonly, nonatomic) SBAssistantSessionPresentationContext *presentationContext;
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
@property(readonly, nonatomic, getter=isSystemAssistantExperiencePersistentSiriEnabled) _Bool systemAssistantExperiencePersistentSiriEnabled;
@property(readonly, nonatomic, getter=isSystemAssistantExperienceHomeAffordanceDoubleTapGestureEnabled) _Bool systemAssistantExperienceHomeAffordanceDoubleTapGestureEnabled;
@property(readonly, nonatomic, getter=isSystemAssistantExperienceEnabled) _Bool systemAssistantExperienceEnabled;
@property(readonly, nonatomic, getter=isSystemAssistantExperienceAvailable) _Bool systemAssistantExperienceAvailable;
- (_Bool)commandeerCaptureDropletPreludeForVisionInvocation:(id <SBHardwareButtonLaunchPreludeAnimationToken>)arg1;
- (void)dismissAssistantViewIfNecessaryForGestureTranslation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)dismissAssistantViewIfNecessaryWithAnimation:(long long)arg1 completion:(void (^)(void))arg2;
- (void)dismissAssistantViewIfNecessaryWithAnimation:(long long)arg1;
- (void)dismissAssistantViewIfNecessary;
- (void)removeObserver:(id <SBAssistantSceneControllingObserver>)arg1;
- (void)addObserver:(id <SBAssistantSceneControllingObserver>)arg1;
@end
