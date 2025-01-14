//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray;
@protocol QLPreviewControllerDelegate;

@interface _TtC5Files20DOCPreviewController
{
    MISSING_TYPE *editingDelegate;	// 16 = 0x10
    MISSING_TYPE *visibilityDelegate;	// 32 = 0x20
    MISSING_TYPE *actionManager;	// 48 = 0x30
    MISSING_TYPE *configuration;	// 56 = 0x38
    MISSING_TYPE *duplicatedNodeObserver;	// 64 = 0x40
    MISSING_TYPE *duplicatedNodeSubscriber;	// 72 = 0x48
    MISSING_TYPE *itemBeingRenamed;	// 80 = 0x50
    MISSING_TYPE *source;	// 88 = 0x58
    MISSING_TYPE *importedURL;	// 0 = 0x0
    MISSING_TYPE *transitioningProvider;	// 0 = 0x0
    MISSING_TYPE *observation;	// 6 = 0x6
    MISSING_TYPE *linkNavigateInteraction;	// 0 = 0x0
    MISSING_TYPE *publishesUserActivity;	// 0 = 0x0
    MISSING_TYPE *currentUserActivity;	// 1868783455 = 0x6f635f5f
}

+ (void);	// IMP=0x00400000004b6ea0
+ (id)sharedControllerFor:(id)arg1;	// IMP=0x00100000004b6dc0
- (void).cxx_destruct;	// IMP=0x00200000004bad10
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000004baba0
- (id)excludedActivityTypesForPreviewController:(id)arg1;	// IMP=0x00100000004baa30
- (id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2;	// IMP=0x00100000004ba9a0
- (void)previewControllerWillDismiss:(id)arg1;	// IMP=0x00100000004ba2f0
- (void)previewController:(id)arg1 didSaveEditedCopyOfPreviewItem:(id)arg2 atURL:(id)arg3;	// IMP=0x00100000004ba1c0
- (void);	// IMP=0x00100000004b8e80
- (_Bool)previewController:(id)arg1 shouldAllowKeyCommandWithIdentifier:(unsigned long long)arg2;	// IMP=0x00100000004b8e50
- (_Bool)shouldAppendDefaultDismissActionsForPreviewController:(id)arg1;	// IMP=0x00100000004b8e20
- (id)dismissActionsForPreviewController:(id)arg1;	// IMP=0x00100000004b8de0
- (long long)previewController:(id)arg1 editingModeForPreviewItem:(id)arg2;	// IMP=0x00100000004b8d70
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;	// IMP=0x00100000004b8c70
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;	// IMP=0x00100000004b8b00
- (void)reallyBecomeCurrent:(id)arg1;	// IMP=0x00100000004b86c0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000004b7f70
@property(nonatomic) long long modalPresentationStyle;
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000004b77f0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000004b7700
- (void)dismissViaKeyCommand;	// IMP=0x00100000004b7120
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000004b7100
- (void)move:(id)arg1;	// IMP=0x00100000004b6d00
- (void)duplicate:(id)arg1;	// IMP=0x00100000004b6c70
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00100000004b6a30
@property(nonatomic, readonly) NSArray *keyCommands;
@property(nonatomic, retain) id <QLPreviewControllerDelegate> delegate;
- (void)documentPickerDidCancel:(id)arg1;	// IMP=0x00100000004193c0
- (void)documentPicker:(id)arg1 didConfirmDocumentsAt:(id)arg2;	// IMP=0x0010000000419340

@end

