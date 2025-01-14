//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class DDRemoteAction, DDRemoteActionHostViewController, NSDate, NSExtension, NSLayoutConstraint, NSString, UINavigationController, UIView;
@protocol DDRemoteActionViewServiceProtocol, NSCopying;

__attribute__((visibility("hidden")))
@interface DDRemoteActionManagerViewController : UIViewController
{
    DDRemoteActionHostViewController *_remoteViewController;	// 8 = 0x8
    id <DDRemoteActionViewServiceProtocol> _serviceContext;	// 16 = 0x10
    UIView *_loadingView;	// 24 = 0x18
    UIView *_errorView;	// 32 = 0x20
    UIView *_titleBar;	// 40 = 0x28
    NSLayoutConstraint *_titleBarBottomConstraint;	// 48 = 0x30
    NSLayoutConstraint *_navControllerTopConstraint;	// 56 = 0x38
    UIView *_hitView;	// 64 = 0x40
    UINavigationController *_navigationController;	// 72 = 0x48
    NSDate *_loadingDate;	// 80 = 0x50
    _Bool _loaded;	// 88 = 0x58
    _Bool _displayed;	// 89 = 0x59
    _Bool _shouldDeferPresenting;	// 90 = 0x5a
    NSString *_platterTitle;	// 96 = 0x60
    struct CGSize _preferredContentSize;	// 104 = 0x68
    DDRemoteActionManagerViewController *_strongSelf;	// 120 = 0x78
    _Bool _previewMode;	// 128 = 0x80
    DDRemoteAction *_action;	// 136 = 0x88
    NSExtension *_extension;	// 144 = 0x90
    id <NSCopying> _request;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00000000000065ff
@property(retain) id <NSCopying> request; // @synthesize request=_request;
@property(retain) NSExtension *extension; // @synthesize extension=_extension;
@property __weak DDRemoteAction *action; // @synthesize action=_action;
@property(nonatomic) _Bool previewMode; // @synthesize previewMode=_previewMode;
- (void)DDRemoteActionDidTerminateWithError:(id)arg1;	// IMP=0x000000000000655b
- (void)showErrorView;	// IMP=0x0000000000005cd1
- (void)removeLoadingViewToShowView:(id)arg1;	// IMP=0x0000000000005aee
- (void)showLoadingView;	// IMP=0x0000000000005330
- (id)controllerVerticalMargin;	// IMP=0x0000000000005238
- (void)unloadRemoteAction;	// IMP=0x000000000000517a
- (void)updatePreviewMode;	// IMP=0x0000000000004fcb
- (void)addHitOverlay;	// IMP=0x0000000000004d81
- (void)presentRemoteViewController;	// IMP=0x0000000000004886
- (void)showRemoteController;	// IMP=0x00000000000047e9
- (void)loadRemoteAction;	// IMP=0x000000000000422f
- (void)loadTitleBarIfNeeded;	// IMP=0x0000000000003b97
- (void)dismissViewController;	// IMP=0x0000000000003b5b
- (void)loadNavigationControllerIfNeeded;	// IMP=0x000000000000379a
- (id)emptyViewcontroller;	// IMP=0x00000000000036fb
- (id)doneButton;	// IMP=0x00000000000036bc
- (id)initWithAction:(id)arg1;	// IMP=0x0000000000003470
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000033e4
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000033aa
- (void)dealloc;	// IMP=0x000000000000336c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

