//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSLayoutConstraint, UIButton, UICollectionView, UILabel, UIView, UIVisualEffectView;
@protocol _TtP12GameCenterUI37GKExpandedGroupViewControllerDelegate_;

@interface _TtC12GameCenterUI29GKExpandedGroupViewController
{
    MISSING_TYPE *cornerRadius;	// 8 = 0x8
    MISSING_TYPE *pickerPlayerCellReuseIdentifier;	// 16 = 0x10
    MISSING_TYPE *pickerPlayerCellReuseIdentifierAX;	// 32 = 0x20
    MISSING_TYPE *dataSourceIdentifier;	// 48 = 0x30
    MISSING_TYPE *doneButton;	// 64 = 0x40
    MISSING_TYPE *collectionView;	// 72 = 0x48
    MISSING_TYPE *contentViewWidthConstraint;	// 80 = 0x50
    MISSING_TYPE *visualEffectView;	// 88 = 0x58
    MISSING_TYPE *container;	// 96 = 0x60
    MISSING_TYPE *titleLabel;	// 104 = 0x68
    MISSING_TYPE *collectionViewHeightConstraint;	// 112 = 0x70
    MISSING_TYPE *playerSelectionProxy;	// 120 = 0x78
    MISSING_TYPE *delegate;	// 128 = 0x80
    MISSING_TYPE *multiplayerPickerDataSource;	// 136 = 0x88
    MISSING_TYPE *selectedPlayerCount;	// 144 = 0x90
    MISSING_TYPE *maxPlayerCount;	// 152 = 0x98
    MISSING_TYPE *players;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00000000004949d9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000049489f
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000004946bb
- (void)doneButtonPressed;	// IMP=0x0000000000494d34
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000000493126
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000004930ce
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000492fd2
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000492f1c
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000492e66
- (void)configureWithPlayers:(id)arg1 groupName:(id)arg2 caption:(id)arg3 playerSelectionProxy:(id)arg4;	// IMP=0x0000000000492c09
- (void)dismissView;	// IMP=0x0000000000492b53
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000492b12
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000492a4f
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000004927eb
- (void)viewDidLayoutSubviews;	// IMP=0x00000000004925b6
- (void)viewDidLoad;	// IMP=0x00000000004923e2
@property(nonatomic) __weak id <_TtP12GameCenterUI37GKExpandedGroupViewControllerDelegate_> delegate; // @synthesize delegate;
@property(nonatomic) __weak NSLayoutConstraint *collectionViewHeightConstraint; // @synthesize collectionViewHeightConstraint;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic) __weak UIView *container; // @synthesize container;
@property(nonatomic) __weak UIVisualEffectView *visualEffectView; // @synthesize visualEffectView;
@property(nonatomic) __weak NSLayoutConstraint *contentViewWidthConstraint; // @synthesize contentViewWidthConstraint;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView;
@property(nonatomic) __weak UIButton *doneButton; // @synthesize doneButton;

@end

