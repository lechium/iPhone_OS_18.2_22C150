//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE;

@interface _TtC15SleepLockScreen24LockScreenViewController : UIViewController
{
    MISSING_TYPE *debugIdentifier;	// 8 = 0x8
    MISSING_TYPE *model;	// 24 = 0x18
    MISSING_TYPE *containerView;	// 32 = 0x20
    MISSING_TYPE *lockScreenStateObserver;	// 40 = 0x28
    MISSING_TYPE *contentStateObserver;	// 48 = 0x30
    MISSING_TYPE *isAlertVisible;	// 56 = 0x38
    MISSING_TYPE *didConfigureHostConnection;	// 57 = 0x39
    MISSING_TYPE *contentPreferences;	// 64 = 0x40
    MISSING_TYPE *daemonConnection;	// 72 = 0x48
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x002000000000c180
+ (id)_exportedInterface;	// IMP=0x0010000000008720
+ (id)_remoteViewControllerInterface;	// IMP=0x0010000000008700
- (void).cxx_destruct;	// IMP=0x0040000000005630
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000000c1a0
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000000c190
- (_Bool)_shouldRemoveViewFromHierarchyOnDisappear;	// IMP=0x001000000000c170
- (void)didDismissForDismissType:(long long)arg1;	// IMP=0x001000000000aa20
- (void)getContentPreferencesWithReplyBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a460
- (void)getInlinePresentationContentFrameWithReplyBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000093e0
- (void)didChangeContentBounds;	// IMP=0x00100000000093b0
- (void)configureWithUserInfo:(id)arg1 contentBounds:(id)arg2 endpoint:(id)arg3;	// IMP=0x0010000000008d90
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property(nonatomic, readonly) _Bool prefersStatusBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000005d30
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000005b10
- (void)viewDidLoad;	// IMP=0x0010000000005ae0
- (void)dealloc;	// IMP=0x0010000000005610
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000005420
- (id)init;	// IMP=0x0010000000005400

@end

