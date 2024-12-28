//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/SFStartPageCustomizationProfileProviding-Protocol.h>
#import <MobileSafariUI/_SFSyntheticBookmarkProvider-Protocol.h>
#import <MobileSafariUI/_SFWebBookmarkTabGroupActionProvider-Protocol.h>

@class BrowserController, NSArray, NSSet, NSString, NSURL, NSUUID, SFSyntheticBookmarkFolder, UIContextMenuConfiguration, UIDragItem, UIImage, UIMenu, UISwipeActionsConfiguration, WBProfile, WBTab, WBTabGroup, WebBookmark, WebBookmarkList;
@protocol TabCollectionItem, WBTabGroupManagerObserver;

@protocol TabGroupProvider <SFStartPageCustomizationProfileProviding, _SFWebBookmarkTabGroupActionProvider, _SFSyntheticBookmarkProvider>
@property(readonly, copy, nonatomic) NSString *deviceIdentifier;
@property(readonly, copy, nonatomic) NSString *startPageBackgroundImageIdentifier;
@property(readonly, nonatomic) NSArray *allSyntheticBookmarkFolders;
@property(readonly, copy, nonatomic) WBTabGroup *privateTabGroupIfAvailable;
@property(readonly, nonatomic) NSSet *nonActiveTabGroupsInCurrentBrowsingMode;
@property(readonly, nonatomic) NSArray *allTabGroups;
@property(readonly, nonatomic) NSArray *namedTabGroups;
@property(readonly, nonatomic) NSArray *unnamedTabGroups;
@property(readonly, nonatomic) NSArray *tabGroups;
@property(readonly, nonatomic) NSString *activeLibraryType;
@property(readonly, nonatomic) NSString *moveLocalTabsToNewGroupTitle;
@property(readonly, nonatomic) _Bool createTabGroupAlertIsPresented;
@property(readonly, copy, nonatomic) WBTabGroup *activeTabGroupOrTabGroupVisibleInSwitcher;
@property(copy, nonatomic) NSString *activeTabGroupUUID;
@property(readonly, copy, nonatomic) WBTabGroup *activeTabGroup;
@property(readonly, nonatomic) UIMenu *submenuForSwitchingProfiles;
@property(readonly, nonatomic) UIMenu *menuForSwitchingProfilesQuickly;
@property(readonly, nonatomic) UIMenu *menuForSwitchingProfiles;
@property(readonly, copy, nonatomic) WBTabGroup *unnamedTabGroup;
@property(readonly, nonatomic) _Bool hasMultipleProfiles;
@property(copy, nonatomic) NSString *activeProfileIdentifier;
@property(readonly, copy, nonatomic) WBProfile *activeProfile;
@property(readonly, copy, nonatomic) NSArray *profiles;
- (WBTab *)defaultTabToSelectInTabGroup:(WBTabGroup *)arg1;
- (_Bool)scrollTabSwitcherToTabGroupIfShowing:(WBTabGroup *)arg1;
- (WBProfile *)updateProfileWithIdentifier:(NSString *)arg1 persist:(_Bool)arg2 usingBlock:(void (^)(WBMutableProfile *))arg3 completionHandler:(void (^)(_Bool))arg4;
- (NSArray *)tabGroupsForProfileWithIdentifier:(NSString *)arg1;
- (void)registerTabGroupManagerObserver:(id <WBTabGroupManagerObserver>)arg1;
- (void)deleteScopedBookmarkWithUUID:(NSString *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)updateScopedBookmarkWithUUID:(NSString *)arg1 title:(NSString *)arg2 address:(NSString *)arg3;
- (void)reorderScopedBookmarkWithUUID:(NSString *)arg1 afterBookmarkWithUUID:(NSString *)arg2 notify:(_Bool)arg3;
- (WebBookmark *)copyBookmark:(WebBookmark *)arg1 toPerTabGroupBookmarkFolderWithID:(int)arg2;
- (void)insertPerTabGroupBookmark:(WebBookmark *)arg1 inPerTabGroupBookmarkFolderWithID:(int)arg2;
- (WebBookmarkList *)topScopedBookmarkListForActiveTabGroup;
- (WebBookmarkList *)perTabGroupBookmarkListForFolderID:(int)arg1 filteredUsingString:(NSString *)arg2;
- (SFSyntheticBookmarkFolder *)syntheticBookmarkFolderForTabGroup:(WBTabGroup *)arg1 withAttribution:(_Bool)arg2;
- (NSArray *)syntheticBookmarkFoldersIncludingActiveTabGroup:(_Bool)arg1;
- (_Bool)isTabPinnable:(WBTab *)arg1;
- (void)togglePinningTab:(WBTab *)arg1 inInactiveTabGroup:(WBTabGroup *)arg2;
- (void)sortTabsInTabGroupWithUUIDString:(NSString *)arg1 withSortMode:(long long)arg2;
- (void)closeTabs:(NSArray *)arg1 inInactiveTabGroup:(WBTabGroup *)arg2;
- (UIDragItem *)dragItemForTab:(WBTab *)arg1 tabItem:(id <TabCollectionItem>)arg2;
- (UIImage *)iconForTabUUID:(NSUUID *)arg1;
- (void)toggleTabGroupUUIDExpanded:(NSString *)arg1;
- (_Bool)isTabGroupUUIDExpanded:(NSString *)arg1;
- (_Bool)isTabUUIDActive:(NSString *)arg1;
- (BrowserController *)browserControllerContainingLocalTabGroupUUID:(NSUUID *)arg1;
- (void)openURL:(NSURL *)arg1 inTabGroup:(WBTabGroup *)arg2;
- (void)openBookmark:(WebBookmark *)arg1 inTabGroup:(WBTabGroup *)arg2;
- (void)removeSingleBlankTabFromInactiveTabGroup:(WBTabGroup *)arg1;
- (void)removeSingleBlankTabFromActiveTabGroup;
- (void)renameTabGroup:(WBTabGroup *)arg1;
- (void)moveTabGroup:(WBTabGroup *)arg1 beforeOrAfterTabGroup:(WBTabGroup *)arg2;
- (_Bool)moveTabWithUUID:(NSString *)arg1 fromForeignLocalGroupWithUUIDIntoActiveGroup:(NSString *)arg2;
- (void)moveTab:(WBTab *)arg1 fromTabGroupWithUUID:(NSString *)arg2 toTabGroupWithUUID:(NSString *)arg3 afterTab:(WBTab *)arg4;
- (UIMenu *)moveMenuOnPageMenuWithDismissHandler:(void (^)(void))arg1;
- (void)createTabGroupFromExistingTabs:(_Bool)arg1 completionHandler:(void (^)(WBTabGroup *))arg2;
- (void)presentAlertToCreateTabGroupFromTabs:(NSArray *)arg1 withTitle:(NSString *)arg2 message:(NSString *)arg3 suggestedName:(NSString *)arg4 okActionTitle:(NSString *)arg5 completionHandler:(void (^)(WBTabGroup *))arg6;
- (void)createNewTabGroup;
- (void)closeTabGroup:(WBTabGroup *)arg1;
- (_Bool)switchToTabWithUUID:(NSUUID *)arg1 inTabGroupWithUUID:(NSUUID *)arg2;
- (void)switchOutOfSyncedTabGroup;
- (NSArray *)tabGroupsMenuElementsWithOptions:(unsigned long long)arg1 newTabGroupName:(NSString *)arg2 hostTitle:(NSString *)arg3 descendantCount:(long long)arg4 movingSelectedTabs:(NSArray *)arg5 actionHandler:(void (^)(WBTabGroup *))arg6;
- (UIContextMenuConfiguration *)contextMenuConfigurationForTab:(WBTab *)arg1 inTabGroup:(WBTabGroup *)arg2;
- (UIContextMenuConfiguration *)contextMenuConfigurationForTabGroup:(WBTabGroup *)arg1 variant:(long long)arg2;
- (UIMenu *)menuForTabGroup:(WBTabGroup *)arg1 variant:(long long)arg2;
- (UIMenu *)openInTabGroupMenuWithNewTabGroupName:(NSString *)arg1 URL:(NSURL *)arg2 descendantCount:(long long)arg3 handler:(void (^)(void))arg4;
- (UISwipeActionsConfiguration *)swipeActionsConfigurationForTab:(WBTab *)arg1 inTabGroup:(WBTabGroup *)arg2;
- (UISwipeActionsConfiguration *)swipeActionsConfigurationForTabGroup:(WBTabGroup *)arg1 forPickerSheet:(_Bool)arg2;
- (UIImage *)imageForTabGroup:(WBTabGroup *)arg1;
@end
