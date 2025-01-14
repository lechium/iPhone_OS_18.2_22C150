//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, NSArray, NSDictionary, NSString, UIViewController;
@protocol CNContactActionsControllerDelegate, CNUINavigationListStyle, CNUIUserActionListDataSource;

__attribute__((visibility("hidden")))
@interface CNContactActionsController : NSObject
{
    _Bool _shouldUseOutlinedActionGlyphStyle;	// 8 = 0x8
    _Bool _displayMenuIconAtTopLevel;	// 9 = 0x9
    _Bool _displayNonDefaultAppsMenuTitle;	// 10 = 0xa
    _Bool _displayDefaultAppsSectionedMenus;	// 11 = 0xb
    _Bool _generateFaceTimeListItemsOnly;	// 12 = 0xc
    _Bool _generateFavoritesListItemsOnly;	// 13 = 0xd
    _Bool _generateDefaultAppListItemsOnly;	// 14 = 0xe
    CNContact *_contact;	// 16 = 0x10
    id <CNUIUserActionListDataSource> _actionsDataSource;	// 24 = 0x18
    NSDictionary *_modelsByActionTypes;	// 32 = 0x20
    NSArray *_modelCancelables;	// 40 = 0x28
    UIViewController *_viewController;	// 48 = 0x30
    id <CNContactActionsControllerDelegate> _delegate;	// 56 = 0x38
    id <CNUINavigationListStyle> _navigationListStyle;	// 64 = 0x40
    long long _actionsOrder;	// 72 = 0x48
    NSArray *_actionTypes;	// 80 = 0x50
    NSString *_defaultAppBundleIdentifier;	// 88 = 0x58
}

+ (id)descriptorForRequiredKeys;	// IMP=0x001000000014f311
+ (id)supportedActionTypes;	// IMP=0x001000000014f2f8
- (void).cxx_destruct;	// IMP=0x000000000014ed5d
@property(copy, nonatomic) NSString *defaultAppBundleIdentifier; // @synthesize defaultAppBundleIdentifier=_defaultAppBundleIdentifier;
@property(nonatomic) _Bool generateDefaultAppListItemsOnly; // @synthesize generateDefaultAppListItemsOnly=_generateDefaultAppListItemsOnly;
@property(nonatomic) _Bool generateFavoritesListItemsOnly; // @synthesize generateFavoritesListItemsOnly=_generateFavoritesListItemsOnly;
@property(nonatomic) _Bool generateFaceTimeListItemsOnly; // @synthesize generateFaceTimeListItemsOnly=_generateFaceTimeListItemsOnly;
@property(nonatomic) _Bool displayDefaultAppsSectionedMenus; // @synthesize displayDefaultAppsSectionedMenus=_displayDefaultAppsSectionedMenus;
@property(nonatomic) _Bool displayNonDefaultAppsMenuTitle; // @synthesize displayNonDefaultAppsMenuTitle=_displayNonDefaultAppsMenuTitle;
@property(nonatomic) _Bool displayMenuIconAtTopLevel; // @synthesize displayMenuIconAtTopLevel=_displayMenuIconAtTopLevel;
@property(readonly, copy, nonatomic) NSArray *actionTypes; // @synthesize actionTypes=_actionTypes;
@property(nonatomic) long long actionsOrder; // @synthesize actionsOrder=_actionsOrder;
@property(nonatomic) __weak id <CNUINavigationListStyle> navigationListStyle; // @synthesize navigationListStyle=_navigationListStyle;
@property(nonatomic) __weak id <CNContactActionsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) NSArray *modelCancelables; // @synthesize modelCancelables=_modelCancelables;
@property(copy, nonatomic) NSDictionary *modelsByActionTypes; // @synthesize modelsByActionTypes=_modelsByActionTypes;
@property(retain, nonatomic) id <CNUIUserActionListDataSource> actionsDataSource; // @synthesize actionsDataSource=_actionsDataSource;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(nonatomic) _Bool shouldUseOutlinedActionGlyphStyle; // @synthesize shouldUseOutlinedActionGlyphStyle=_shouldUseOutlinedActionGlyphStyle;
- (id)actionForItem:(id)arg1 withImage:(id)arg2;	// IMP=0x000000000014ea9c
- (void)generateMenuForItem:(id)arg1 image:(id)arg2 withCurrentList:(id)arg3;	// IMP=0x000000000014e681
- (void)prepareNavigationListItems;	// IMP=0x000000000014e02c
- (id)navigationListItemForUserActionType:(id)arg1;	// IMP=0x000000000014d9ff
- (void)navigationListController:(id)arg1 didSelectItem:(id)arg2;	// IMP=0x000000000014d845
- (id)imageForActionType:(id)arg1;	// IMP=0x000000000014d73a
- (id)modelForActionType:(id)arg1;	// IMP=0x000000000014d664
- (void)cancelModels;	// IMP=0x000000000014d61d
- (void)retrieveModels;	// IMP=0x000000000014d4e9
- (id)displayedController;	// IMP=0x000000000014d4d7
- (void)styleUpdated;	// IMP=0x000000000014d387
- (void)dealloc;	// IMP=0x000000000014d31e
- (id)initWithContact:(id)arg1 dataSource:(id)arg2 actionTypes:(id)arg3;	// IMP=0x000000000014d209
- (id)initWithContact:(id)arg1 actionTypes:(id)arg2;	// IMP=0x000000000014d121
@property(nonatomic) _Bool actionsReversed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

