//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE, NSArray, NSUndoManager;

@interface WFMainViewController : UIViewController
{
    MISSING_TYPE *database;	// 8 = 0x8
    MISSING_TYPE *initialDestination;	// 3 = 0x3
    MISSING_TYPE *currentDestination;	// 108 = 0x6c
    MISSING_TYPE *runCoordinator;	// 2097285 = 0x200085
    MISSING_TYPE *autoShortcutsDataSource;	// 25 = 0x19
    MISSING_TYPE *navigationCompletions;	// 1095786335 = 0x41505f5f
    MISSING_TYPE *mainUndoManager;	// 0 = 0x0
    MISSING_TYPE *display;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_columnSidebar;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_compactSidebar;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_columnGalleryViewController;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_compactGalleryViewController;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_searchStateController;	// 0 = 0x0
    MISSING_TYPE *content;	// 0 = 0x0
    MISSING_TYPE *splitView;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0020000000015078
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000015043
- (void)toggleSidebarDisplay;	// IMP=0x0010000000014ffc
- (void)createWorkflowFromKeyboard;	// IMP=0x0010000000014f8d
- (void)beginSearching;	// IMP=0x0010000000014f2c
- (void)switchToPreviousViewController;	// IMP=0x0010000000014ef6
- (void)switchToNextViewController;	// IMP=0x0010000000014b15
- (void)switchToLastFolder;	// IMP=0x0010000000014693
- (void)switchToFolderWithSender:(id)arg1;	// IMP=0x001000000001442b
- (void)switchToGalleryViewController;	// IMP=0x0010000000013e18
- (void)switchToAutomationsViewController;	// IMP=0x0010000000013d24
- (void)switchToShortcutsViewController;	// IMP=0x0010000000013c64
- (void)createFolderFromKeyboard;	// IMP=0x0010000000013c2e
@property(nonatomic, readonly) NSArray *keyCommands;
- (void)didBecomeActive:(id)arg1;	// IMP=0x001000000000c984
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000000c035
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x001000000000bf0b
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000000bd03
- (void)viewDidLoad;	// IMP=0x001000000000bc77
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000b962
- (id)initWithDatabase:(id)arg1;	// IMP=0x001000000000b55a
@property(nonatomic, readonly) NSUndoManager *undoManager;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0010000000015700
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;	// IMP=0x00100000000165ca
- (_Bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;	// IMP=0x0010000000016229
- (void)runCoordinator:(id)arg1 accessibilityAnnounce:(id)arg2;	// IMP=0x0010000000016ade
- (void)runCoordinator:(id)arg1 showSettingsForWorkflow:(id)arg2 inDatabase:(id)arg3 presentingViewController:(id)arg4;	// IMP=0x0010000000016a29
- (void)runCoordinator:(id)arg1 openWorkflow:(id)arg2 scrolledToActionIndex:(long long)arg3 message:(id)arg4;	// IMP=0x0010000000016972
- (id)runCoordinator:(id)arg1 userInterfaceForWorkflow:(id)arg2;	// IMP=0x00100000000167ce
- (void)composeViewControllerRequestsDismissal:(id)arg1 forTutorial:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000016d28
- (void)documentMenuDidDuplicateWorkflow:(id)arg1;	// IMP=0x0010000000016e2c
- (void)runCoordinator:(id)arg1 didFinishRunningWorkflow:(id)arg2 withError:(id)arg3;	// IMP=0x00100000000176eb
- (void)runCoordinator:(id)arg1 didChangeRunningStateWithProgress:(double)arg2 waiting:(_Bool)arg3 cancelled:(_Bool)arg4 forWorkflow:(id)arg5;	// IMP=0x0010000000017116
- (void)importShortcutFileWithResult:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000017cd0
- (void)highlightAutomationWithTriggerID:(id)arg1;	// IMP=0x0010000000017b8f
- (void)runWorkflowFromState:(id)arg1 source:(id)arg2;	// IMP=0x0010000000017a20

@end
