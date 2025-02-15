//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIScene, _UIFindNavigatorResponder, _UIFindNavigatorViewController;

__attribute__((visibility("hidden")))
@interface _UIFindNavigatorSceneComponent : NSObject
{
    UIScene *_scene;	// 8 = 0x8
    _UIFindNavigatorResponder *_findNavigatorResponder;	// 16 = 0x10
    _UIFindNavigatorViewController *_findNavigatorViewController;	// 24 = 0x18
}

+ (id)sceneComponentForView:(id)arg1;	// IMP=0x0010000000afc492
- (void).cxx_destruct;	// IMP=0x0000000000afd3ab
@property(retain, nonatomic) _UIFindNavigatorViewController *findNavigatorViewController; // @synthesize findNavigatorViewController=_findNavigatorViewController;
@property(retain, nonatomic) _UIFindNavigatorResponder *findNavigatorResponder; // @synthesize findNavigatorResponder=_findNavigatorResponder;
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene; // @synthesize _scene;
- (void)findNavigatorViewControllerViewDidChangeIntrinsicContentSize:(id)arg1;	// IMP=0x0000000000afd239
- (void)findNavigatorViewControllerDidRequestDismissal:(id)arg1;	// IMP=0x0000000000afd222
- (_Bool)findNavigatorShouldDismissOnResponderChange:(id)arg1;	// IMP=0x0000000000afd20d
- (void)_monitoredView:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;	// IMP=0x0000000000afd207
- (void)_monitoredView:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;	// IMP=0x0000000000afd160
- (_Bool)_monitorsView:(id)arg1;	// IMP=0x0000000000afd0f2
- (id)_searchableView;	// IMP=0x0000000000afd078
- (void)_sendPlacementUpdate;	// IMP=0x0000000000afcf20
- (void)dismissFindNavigatorEndingActiveSession:(_Bool)arg1;	// IMP=0x0000000000afcca5
- (void)presentFindNavigatorWithFindSession:(id)arg1 showingReplace:(_Bool)arg2 idiom:(long long)arg3;	// IMP=0x0000000000afc7c1
@property(readonly, nonatomic, getter=isFindNavigatorVisible) _Bool findNavigatorVisible;
- (_Bool)_keyboardIsPreservingFindNavigatorAsRestorableResponder;	// IMP=0x0000000000afc5c2
- (id)initWithScene:(id)arg1;	// IMP=0x0000000000afc55e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

