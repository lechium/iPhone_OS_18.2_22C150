//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class NSString, _UISceneHostingController;
@protocol _UIRemoteSheet;

__attribute__((visibility("hidden")))
@interface _UISceneHostingViewController : UIViewController
{
    _UISceneHostingController *_sceneHostingController;	// 440 = 0x1b8
}

+ (_Bool)_wantsContentOverlayInsetsUpdatesWhileDismissing;	// IMP=0x0010000000d60b67
- (void).cxx_destruct;	// IMP=0x0000000000d60d65
@property(readonly, nonatomic) id <_UIRemoteSheet> _remoteSheet;
- (long long)interfaceElementCategory;	// IMP=0x0000000000d60d14
- (void)_childViewControllerWillBePresentedFromViewControllerDelayingPresentationWithPresenter:(id)arg1;	// IMP=0x0000000000d60b6f
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000d60ad2
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000d60a3d
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000d608d1
- (void)loadView;	// IMP=0x0000000000d60866

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

