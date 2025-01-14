//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSNumber, NSString, PUEditPlugin, PUEditingExtensionUndoProxyHostSide, UIBarButtonItem;
@protocol NSCopying, PUEditPluginHostViewControllerDataSource, PUEditPluginHostViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUEditPluginHostViewController : UIViewController
{
    _Bool _extensionDidBeginContentEditing;	// 8 = 0x8
    _Bool _didHandleCancel;	// 9 = 0x9
    _Bool _didHandleDone;	// 10 = 0xa
    _Bool _showUndoRedoButtons;	// 11 = 0xb
    PUEditPlugin *_plugin;	// 16 = 0x10
    id <PUEditPluginHostViewControllerDataSource> _dataSource;	// 24 = 0x18
    id <PUEditPluginHostViewControllerDelegate> _delegate;	// 32 = 0x20
    UIViewController *_remoteViewController;	// 40 = 0x28
    id <NSCopying> _request;	// 48 = 0x30
    id _disablingIdleTimerToken;	// 56 = 0x38
    NSNumber *_allowsFullScreen;	// 64 = 0x40
    PUEditingExtensionUndoProxyHostSide *_undoProxy;	// 72 = 0x48
    UIBarButtonItem *_undoBarButtonItem;	// 80 = 0x50
    UIBarButtonItem *_redoBarButtonItem;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000029a450
@property(nonatomic) _Bool showUndoRedoButtons; // @synthesize showUndoRedoButtons=_showUndoRedoButtons;
@property(nonatomic) __weak UIBarButtonItem *redoBarButtonItem; // @synthesize redoBarButtonItem=_redoBarButtonItem;
@property(nonatomic) __weak UIBarButtonItem *undoBarButtonItem; // @synthesize undoBarButtonItem=_undoBarButtonItem;
@property(retain, nonatomic) PUEditingExtensionUndoProxyHostSide *undoProxy; // @synthesize undoProxy=_undoProxy;
@property(retain, nonatomic) NSNumber *allowsFullScreen; // @synthesize allowsFullScreen=_allowsFullScreen;
@property(retain, nonatomic) id disablingIdleTimerToken; // @synthesize disablingIdleTimerToken=_disablingIdleTimerToken;
@property(nonatomic) _Bool didHandleDone; // @synthesize didHandleDone=_didHandleDone;
@property(nonatomic) _Bool didHandleCancel; // @synthesize didHandleCancel=_didHandleCancel;
@property(nonatomic) _Bool extensionDidBeginContentEditing; // @synthesize extensionDidBeginContentEditing=_extensionDidBeginContentEditing;
@property(copy) id <NSCopying> request; // @synthesize request=_request;
@property(retain) UIViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(nonatomic) __weak id <PUEditPluginHostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <PUEditPluginHostViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) PUEditPlugin *plugin; // @synthesize plugin=_plugin;
- (void)handleRedoButton:(id)arg1;	// IMP=0x000000000029a211
- (void)handleUndoButton:(id)arg1;	// IMP=0x000000000029a1d4
- (void)setUndoEnabled:(_Bool)arg1 redoEnabled:(_Bool)arg2;	// IMP=0x000000000029a187
- (void)setShowUndoRedo:(_Bool)arg1;	// IMP=0x000000000029a13d
- (void)_setupUndoProxy;	// IMP=0x000000000029a05b
- (void)_endDisablingIdleTimerIfNecessary;	// IMP=0x0000000000299f4c
- (void)_beginDisablingIdleTimer;	// IMP=0x0000000000299e15
- (void)_handleDoneButton:(id)arg1;	// IMP=0x0000000000299c9b
- (void)_handleCancel;	// IMP=0x0000000000299c09
- (void)_handleCancelButton:(id)arg1;	// IMP=0x0000000000299b22
- (_Bool)prepareForDismissingForced:(_Bool)arg1;	// IMP=0x0000000000299b09
- (long long)preferredUserInterfaceStyle;	// IMP=0x0000000000299ab8
- (void)_updateBarButtonsWithUndoRedoVisible:(_Bool)arg1;	// IMP=0x000000000029961a
- (void)_dismiss;	// IMP=0x00000000002994cf
- (id)_extensionVendorProxy;	// IMP=0x0000000000299455
- (id)_hostContext;	// IMP=0x0000000000299322
- (void)_addRemoteViewControllerIfNeededAllowingFullscreen:(_Bool)arg1;	// IMP=0x0000000000298e05
- (void)_beginContentEditingWithCompletionHandler:(CDUnknownBlockType)arg1 timeout:(double)arg2;	// IMP=0x0000000000298b7a
- (void)_queryShouldShowCancelConfirmationWithResponseHandler:(CDUnknownBlockType)arg1 timeout:(double)arg2;	// IMP=0x00000000002989c9
- (void)queryHandlingCapabilityForAdjustmentData:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2 timeout:(double)arg3;	// IMP=0x00000000002987f6
- (void)_handleVendorVersion:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000298721
- (void)_queryAllowsFullScreen:(CDUnknownBlockType)arg1;	// IMP=0x0000000000298598
- (void)loadRemoteViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002981ef
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000298152
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000002980c1
- (_Bool)prefersStatusBarHidden;	// IMP=0x00000000002980b9
- (void)loadView;	// IMP=0x0000000000297f55
- (void)dealloc;	// IMP=0x0000000000297f17
- (id)initWithPlugin:(id)arg1;	// IMP=0x0000000000297ea9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

