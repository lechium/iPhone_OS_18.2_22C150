//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactViewCache, CNPhotoPickerVariantsManager, CNVisualIdentity, NSArray, NSIndexPath, NSMutableArray, NSString;
@protocol AVTAvatarStore, CNPhotoPickerProviderGroupDelegate;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerDataSource : NSObject
{
    _Bool _allowsPhotoLibraryAccess;	// 8 = 0x8
    CNVisualIdentity *_visualIdentity;	// 16 = 0x10
    NSIndexPath *_activePhotoIndexPath;	// 24 = 0x18
    CNContactViewCache *_contactViewCache;	// 32 = 0x20
    id <CNPhotoPickerProviderGroupDelegate> _delegate;	// 40 = 0x28
    CNPhotoPickerVariantsManager *_variantsManager;	// 48 = 0x30
    id <AVTAvatarStore> _avatarStore;	// 56 = 0x38
    NSArray *_emojiSuggestionItems;	// 64 = 0x40
    NSArray *_providerGroups;	// 72 = 0x48
    NSMutableArray *_groupIsCollapsedState;	// 80 = 0x50
}

+ (id)avatarStore;	// IMP=0x00100000001870d6
- (void).cxx_destruct;	// IMP=0x0000000000186e07
@property(nonatomic) _Bool allowsPhotoLibraryAccess; // @synthesize allowsPhotoLibraryAccess=_allowsPhotoLibraryAccess;
@property(retain, nonatomic) NSMutableArray *groupIsCollapsedState; // @synthesize groupIsCollapsedState=_groupIsCollapsedState;
@property(readonly, nonatomic) NSArray *providerGroups; // @synthesize providerGroups=_providerGroups;
@property(retain, nonatomic) NSArray *emojiSuggestionItems; // @synthesize emojiSuggestionItems=_emojiSuggestionItems;
@property(readonly, nonatomic) id <AVTAvatarStore> avatarStore; // @synthesize avatarStore=_avatarStore;
@property(readonly, nonatomic) CNPhotoPickerVariantsManager *variantsManager; // @synthesize variantsManager=_variantsManager;
@property(nonatomic) __weak id <CNPhotoPickerProviderGroupDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CNContactViewCache *contactViewCache; // @synthesize contactViewCache=_contactViewCache;
@property(retain, nonatomic) NSIndexPath *activePhotoIndexPath; // @synthesize activePhotoIndexPath=_activePhotoIndexPath;
@property(retain, nonatomic) CNVisualIdentity *visualIdentity; // @synthesize visualIdentity=_visualIdentity;
- (id)uniqueEmojiSuggestionItems:(id)arg1;	// IMP=0x0000000000186c4b
- (void)photoPickerProviderGroup:(id)arg1 didUpdateItem:(id)arg2;	// IMP=0x0000000000186b98
- (void)photoPickerProviderGroupDidUpdate:(id)arg1 requiresFullReload:(_Bool)arg2;	// IMP=0x0000000000186afd
- (void)updateGroupCollapsedStateForSection:(long long)arg1;	// IMP=0x00000000001869d8
- (id)removeItem:(id)arg1;	// IMP=0x0000000000186843
- (id)indexOfAddedItem:(id)arg1 inGroupOfType:(long long)arg2;	// IMP=0x00000000001866fa
- (id)findActiveIndexPathInGroup:(id)arg1 withImageData:(id)arg2;	// IMP=0x000000000018657a
- (id)injectedItemsGroup;	// IMP=0x00000000001864d3
- (id)suggestionsGroup;	// IMP=0x000000000018642c
- (id)monogramProviderMonogramItemWithSize:(struct CGSize)arg1;	// IMP=0x0000000000186328
- (id)monogramProviderDefaultItemWithSize:(struct CGSize)arg1;	// IMP=0x0000000000186282
- (id)providerItemAtIndexPath:(id)arg1;	// IMP=0x00000000001861ec
- (id)providerGroupAtIndexPath:(id)arg1;	// IMP=0x00000000001861b8
- (id)providerGroupAtSection:(long long)arg1;	// IMP=0x000000000018610f
- (_Bool)isItemAtIndexPathAddItem:(id)arg1;	// IMP=0x0000000000186022
- (id)actionTitleForSection:(long long)arg1;	// IMP=0x0000000000185e97
- (id)titleForSection:(long long)arg1;	// IMP=0x0000000000185d15
- (id)indexPathsToReloadForUpdatedGroup:(id)arg1;	// IMP=0x0000000000185bd9
- (long long)sectionIndexForProviderGroupType:(long long)arg1;	// IMP=0x0000000000185b55
- (long long)sectionIndexForProviderGroup:(id)arg1;	// IMP=0x0000000000185a94
- (long long)numberOfItemsInSection:(long long)arg1;	// IMP=0x0000000000185983
- (long long)numberOfSections;	// IMP=0x000000000018593f
- (void)setItemsPerRow:(unsigned long long)arg1 requiresFullReload:(_Bool)arg2;	// IMP=0x00000000001858b9
@property(nonatomic) unsigned long long itemsPerRow;
- (unsigned long long)itemsPerRowForSection:(long long)arg1;	// IMP=0x0000000000185831
- (void)loadProviderGroupsItemsForSize:(struct CGSize)arg1 itemsPerRow:(double)arg2 scale:(double)arg3 RTL:(_Bool)arg4;	// IMP=0x0000000000185640
- (id)initWithVisualIdentity:(id)arg1 contactViewCache:(id)arg2 providerGroups:(id)arg3 avatarStore:(id)arg4;	// IMP=0x0000000000185457
- (id)initWithVisualIdentity:(id)arg1 contactViewCache:(id)arg2 photoPickerConfiguration:(id)arg3;	// IMP=0x00000000001852d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

