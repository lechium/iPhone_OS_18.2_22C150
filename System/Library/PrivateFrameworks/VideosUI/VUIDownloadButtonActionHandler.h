//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIView, UIViewController, VUIAlertController, VUIDownloadButtonViewModel;

__attribute__((visibility("hidden")))
@interface VUIDownloadButtonActionHandler : NSObject
{
    VUIDownloadButtonViewModel *_viewModel;	// 8 = 0x8
    UIViewController *_presentingViewController;	// 16 = 0x10
    UIView *_parentView;	// 24 = 0x18
    CDUnknownBlockType _acknowledgementDownloadDeletedBlock;	// 32 = 0x20
    CDUnknownBlockType _presentAlertBlock;	// 40 = 0x28
    CDUnknownBlockType _acknowledgementDownloadCancelledBlock;	// 48 = 0x30
    VUIAlertController *_deleteConfirmationAlertController;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000002fc7e3
@property(retain, nonatomic) VUIAlertController *deleteConfirmationAlertController; // @synthesize deleteConfirmationAlertController=_deleteConfirmationAlertController;
@property(copy, nonatomic) CDUnknownBlockType acknowledgementDownloadCancelledBlock; // @synthesize acknowledgementDownloadCancelledBlock=_acknowledgementDownloadCancelledBlock;
@property(copy, nonatomic) CDUnknownBlockType presentAlertBlock; // @synthesize presentAlertBlock=_presentAlertBlock;
@property(copy, nonatomic) CDUnknownBlockType acknowledgementDownloadDeletedBlock; // @synthesize acknowledgementDownloadDeletedBlock=_acknowledgementDownloadDeletedBlock;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(readonly, nonatomic) VUIDownloadButtonViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)topPresentedViewController;	// IMP=0x00000000002fc6e2
- (id)_localize:(id)arg1 token:(id)arg2 value:(id)arg3;	// IMP=0x00000000002fc636
- (void)_dismissConfirmationAlertController;	// IMP=0x00000000002fc5a2
- (void)_handleAppDidEnterBackgroundNotification:(id)arg1;	// IMP=0x00000000002fc533
- (void)_presentSeasonsDownloadList;	// IMP=0x00000000002fc3dd
- (void)_checkForAccountSignInWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002fc23f
- (void)_startDownloadIfPossibleRemovingFromUIOnCancellationOrFailure:(_Bool)arg1 prefer3DOrImmersiveDownload:(_Bool)arg2;	// IMP=0x00000000002fbfe3
- (_Bool)_shouldShowRenewalOption;	// IMP=0x00000000002fbf0b
- (id)_renewalAlertAction;	// IMP=0x00000000002fbd1e
- (void)_showDownloadingInfoDialog;	// IMP=0x00000000002fb95a
- (void)_askUserAndDeleteIfNeeded;	// IMP=0x00000000002faede
- (_Bool)ignoreDownloadActionIfInRetailDemoMode;	// IMP=0x00000000002faba2
- (void)performAction:(_Bool)arg1 confirmBeforeStopDownloading:(_Bool)arg2 prefer3DOrImmersiveDownload:(_Bool)arg3;	// IMP=0x00000000002fa4ad
- (void)performAction:(_Bool)arg1 confirmBeforeStopDownloading:(_Bool)arg2;	// IMP=0x00000000002fa498
- (id)initWithViewModel:(id)arg1;	// IMP=0x00000000002fa42d

@end

