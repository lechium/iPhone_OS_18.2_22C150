//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class CNPhotoPickerProviderItem, CNPhotoPickerVariantsManager, CNVisualIdentityEditablePrimaryAvatarViewController, NSArray, NSLayoutConstraint, NSString, UICollectionView;
@protocol CNVisualIdentityAvatarStyleEditorViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNVisualIdentityAvatarStyleEditorViewController : UIViewController
{
    CNPhotoPickerProviderItem *_providerItem;	// 8 = 0x8
    CNVisualIdentityEditablePrimaryAvatarViewController *_editableAvatarViewController;	// 16 = 0x10
    id <CNVisualIdentityAvatarStyleEditorViewControllerDelegate> _delegate;	// 24 = 0x18
    UICollectionView *_styleCollectionView;	// 32 = 0x20
    NSLayoutConstraint *_avatarViewSizeConstraint;	// 40 = 0x28
    NSLayoutConstraint *_avatarViewTopConstraint;	// 48 = 0x30
    CNPhotoPickerVariantsManager *_variantsManager;	// 56 = 0x38
    NSArray *_variantProviderItems;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001fe089
@property(retain, nonatomic) NSArray *variantProviderItems; // @synthesize variantProviderItems=_variantProviderItems;
@property(retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager; // @synthesize variantsManager=_variantsManager;
@property(retain, nonatomic) NSLayoutConstraint *avatarViewTopConstraint; // @synthesize avatarViewTopConstraint=_avatarViewTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *avatarViewSizeConstraint; // @synthesize avatarViewSizeConstraint=_avatarViewSizeConstraint;
@property(retain, nonatomic) UICollectionView *styleCollectionView; // @synthesize styleCollectionView=_styleCollectionView;
@property(nonatomic) __weak id <CNVisualIdentityAvatarStyleEditorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CNVisualIdentityEditablePrimaryAvatarViewController *editableAvatarViewController; // @synthesize editableAvatarViewController=_editableAvatarViewController;
@property(readonly, nonatomic) CNPhotoPickerProviderItem *providerItem; // @synthesize providerItem=_providerItem;
- (_Bool)editableAvatarViewControllerShouldBecomeFirstResponder:(id)arg1;	// IMP=0x00000000001fdec4
- (void)editableAvatarViewController:(id)arg1 didUpdateWithProviderItem:(id)arg2;	// IMP=0x00000000001fddff
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000001fdbca
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x00000000001fdb12
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000001fd983
- (double)calculateSectionSideInset;	// IMP=0x00000000001fd86e
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x00000000001fd823
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000001fd654
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000000001fd643
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000001fd5ff
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000000001fd5f4
- (_Bool)isEmojiProviderItemType;	// IMP=0x00000000001fd5ab
- (_Bool)shouldBeginEditing;	// IMP=0x00000000001fd4d4
- (void)beginEditingAvatar;	// IMP=0x00000000001fd47b
- (void)dismissEmojiKeyboardIfNeeded;	// IMP=0x00000000001fd3a4
- (void)dismissTextKeyboardIfNeeded;	// IMP=0x00000000001fd2cd
- (void)didTapEditableAvatar:(id)arg1;	// IMP=0x00000000001fd282
- (id)updatedProviderItem;	// IMP=0x00000000001fd179
- (void)generateProviderItems;	// IMP=0x00000000001fcfbf
- (void)setupStyleCollectionView;	// IMP=0x00000000001fc8d4
- (void)viewDidLayoutSubviews;	// IMP=0x00000000001fc672
- (void)setupEditableAvatarViewController;	// IMP=0x00000000001fbfc4
- (void)viewDidLoad;	// IMP=0x00000000001fbf13
- (id)initWithProviderItem:(id)arg1 variantsManager:(id)arg2;	// IMP=0x00000000001fbe62

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

