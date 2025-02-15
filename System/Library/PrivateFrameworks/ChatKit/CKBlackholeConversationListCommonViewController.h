//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class CKScheduledUpdater, NSArray, NSString, UIBarButtonItem, UILabel, _UITableViewDiffableDataSource;

__attribute__((visibility("hidden")))
@interface CKBlackholeConversationListCommonViewController : UITableViewController
{
    _UITableViewDiffableDataSource *_tableViewDataSource;	// 8 = 0x8
    UIBarButtonItem *_clearAllButton;	// 16 = 0x10
    UILabel *_emptyConversationListLabel;	// 24 = 0x18
    CKScheduledUpdater *_updater;	// 32 = 0x20
    NSArray *_visibleConversations;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000004a9074
@property(retain, nonatomic) NSArray *visibleConversations; // @synthesize visibleConversations=_visibleConversations;
@property(retain, nonatomic) CKScheduledUpdater *updater; // @synthesize updater=_updater;
@property(retain, nonatomic) UILabel *emptyConversationListLabel; // @synthesize emptyConversationListLabel=_emptyConversationListLabel;
@property(retain, nonatomic) UIBarButtonItem *clearAllButton; // @synthesize clearAllButton=_clearAllButton;
@property(retain, nonatomic) _UITableViewDiffableDataSource *tableViewDataSource; // @synthesize tableViewDataSource=_tableViewDataSource;
- (void)updateFocusIfNeeded;	// IMP=0x00000000004a8feb
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x00000000004a8fe3
- (void)setNeedsFocusUpdate;	// IMP=0x00000000004a8fdd
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000004a8fd7
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000004a8fd1
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000004a8fcb
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x00000000004a8fc5
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;	// IMP=0x00000000004a8faf
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x00000000004a8fa9
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000004a8fa3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004a8f9d
- (void)statusBarWillAnimateByHeight:(double)arg1;	// IMP=0x00000000004a8f97
- (void)didWake;	// IMP=0x00000000004a8f91
- (void)didUnlock;	// IMP=0x00000000004a8f8b
- (void)willUnlock;	// IMP=0x00000000004a8f85
- (void)didLock;	// IMP=0x00000000004a8f7f
- (void)suspend;	// IMP=0x00000000004a8f79
- (void)willBecomeActive;	// IMP=0x00000000004a8f73
- (void)willResignActive;	// IMP=0x00000000004a8f6d
- (id)_alertTitleForClearAll;	// IMP=0x00000000004a8ec1
- (id)_alertTitleForDelete;	// IMP=0x00000000004a8e15
- (id)_conversations;	// IMP=0x00000000004a8dc5
- (id)_conversationList;	// IMP=0x00000000004a8dac
- (void)viewSafeAreaInsetsDidChange;	// IMP=0x00000000004a8a95
- (void)_updateConversationListEmptyLabel;	// IMP=0x00000000004a839b
- (void)_updateConversationList;	// IMP=0x00000000004a8168
- (void)endHoldingConversationListUpdatesForKey:(id)arg1;	// IMP=0x00000000004a80a1
- (void)_batchDeleteConversationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000004a7ef9
- (void)_clearAllTappedWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000004a7b19
- (void)popViewControllerIfNecessary;	// IMP=0x00000000004a7abb
- (void)_clearAllTapped;	// IMP=0x00000000004a79e5
- (void)_deleteConversation:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000004a78ab
- (void)_confirmDeleteConversation:(id)arg1 view:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000004a74e7
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;	// IMP=0x00000000004a74ce
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;	// IMP=0x00000000004a7478
- (void)_deleteConversation:(id)arg1;	// IMP=0x00000000004a7390
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;	// IMP=0x00000000004a7160
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000004a6ff8
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000004a6f62
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000004a6e41
- (void)viewDidLoad;	// IMP=0x00000000004a6af4
- (void)dealloc;	// IMP=0x00000000004a6a45
- (id)init;	// IMP=0x00000000004a6794

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

