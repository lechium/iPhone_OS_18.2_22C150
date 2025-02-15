//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, SKUIClientContext, SKUIGroupViewElement, SKUISettingsContext, SKUISettingsGroupController, SKUISettingsGroupsDescription, SKUISettingsHeaderFooterDescription, SKUISettingsObjectStore;

__attribute__((visibility("hidden")))
@interface SKUISettingsGroupDescription : NSObject
{
    NSMutableSet *_editableSettings;	// 8 = 0x8
    SKUISettingsHeaderFooterDescription *_footerDescription;	// 16 = 0x10
    SKUISettingsHeaderFooterDescription *_headerDescription;	// 24 = 0x18
    SKUISettingsObjectStore *_settingDescriptions;	// 32 = 0x20
    SKUISettingsContext *_settingsContext;	// 40 = 0x28
    SKUISettingsGroupController *_controller;	// 48 = 0x30
    SKUISettingsGroupsDescription *_parent;	// 56 = 0x38
    SKUIGroupViewElement *_viewElement;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000009f229
@property(retain, nonatomic) SKUIGroupViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(nonatomic) __weak SKUISettingsGroupsDescription *parent; // @synthesize parent=_parent;
@property(nonatomic) __weak SKUISettingsGroupController *controller; // @synthesize controller=_controller;
- (void)_updatedEditsValid;	// IMP=0x000000000009f18f
- (void)_presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000009f112
- (void)_dismissViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000009f095
- (void)_dispatchUpdateForSettingDescription:(id)arg1 updateType:(long long)arg2;	// IMP=0x000000000009efd2
- (id)description;	// IMP=0x000000000009ee78
- (id)viewElementForSettingAtIndex:(unsigned long long)arg1;	// IMP=0x000000000009ee28
- (id)settingDescriptionAtIndex:(unsigned long long)arg1;	// IMP=0x000000000009ee12
- (void)setHeaderViewElement:(id)arg1;	// IMP=0x000000000009edd9
- (void)setHeaderDescription:(id)arg1;	// IMP=0x000000000009edc8
- (void)setFooterViewElement:(id)arg1;	// IMP=0x000000000009ed8f
- (void)setFooterDescription:(id)arg1;	// IMP=0x000000000009ed7e
- (void)revealSettingsGroup;	// IMP=0x000000000009ed48
- (void)revealSettingDescription:(id)arg1;	// IMP=0x000000000009ecc5
- (void)requestLayoutForWidth:(double)arg1 context:(id)arg2;	// IMP=0x000000000009ead3
- (void)reloadSettingDescription:(id)arg1;	// IMP=0x000000000009eabc
- (void)reloadData;	// IMP=0x000000000009ea8a
- (void)recycle;	// IMP=0x000000000009ea22
- (unsigned long long)numberOfSettings;	// IMP=0x000000000009ea0c
- (id)newSiblingWithClass:(Class)arg1;	// IMP=0x000000000009e9e0
- (_Bool)isSettingDescriptionHidden:(id)arg1;	// IMP=0x000000000009e9c7
- (_Bool)isEmpty;	// IMP=0x000000000009e9a1
- (id)indexPathForSettingDescription:(id)arg1;	// IMP=0x000000000009e928
- (unsigned long long)index;	// IMP=0x000000000009e8eb
- (void)hideSettingDescription:(id)arg1;	// IMP=0x000000000009e7d8
- (void)hideSettingsGroup;	// IMP=0x000000000009e7a2
- (id)headerDescription;	// IMP=0x000000000009e794
- (_Bool)hasNoVisibleSettings;	// IMP=0x000000000009e758
- (_Bool)hasHeader;	// IMP=0x000000000009e74a
- (_Bool)hasFooter;	// IMP=0x000000000009e73c
- (_Bool)hasEditableSettingDescriptions;	// IMP=0x000000000009e716
- (id)footerDescription;	// IMP=0x000000000009e708
- (id)editableSettingDescriptions;	// IMP=0x000000000009e6ea
- (void)dispatchUpdate:(id)arg1;	// IMP=0x000000000009e690
- (void)deleteSettingDescription:(id)arg1;	// IMP=0x000000000009e546
- (void)deleteSettingsGroup;	// IMP=0x000000000009e510
@property(readonly, nonatomic) SKUIClientContext *clientContext;
- (void)addSibling:(id)arg1;	// IMP=0x000000000009e3e1
- (void)addSettingViewElement:(id)arg1;	// IMP=0x000000000009e355
- (void)addSettingDescription:(id)arg1;	// IMP=0x000000000009e256
- (id)initWithParent:(id)arg1 settingsContext:(id)arg2;	// IMP=0x000000000009e13f

@end

