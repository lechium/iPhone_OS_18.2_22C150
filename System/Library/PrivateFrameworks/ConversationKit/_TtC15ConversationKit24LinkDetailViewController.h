//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE;

@interface _TtC15ConversationKit24LinkDetailViewController : UIViewController
{
    MISSING_TYPE *$__lazy_storage_$_collectionView;	// 8 = 0x8
    MISSING_TYPE *$__lazy_storage_$_dataSource;	// 16 = 0x10
    MISSING_TYPE *$__lazy_storage_$_supplementaryViewProvider;	// 24 = 0x18
    MISSING_TYPE *$__lazy_storage_$_cellProvider;	// 40 = 0x28
    MISSING_TYPE *cellRegistration;	// 0 = 0x0
    MISSING_TYPE *deleteCellRegistration;	// 0 = 0x0
    MISSING_TYPE *shareCellRegistration;	// 0 = 0x0
    MISSING_TYPE *linkDetailHeaderSupplementaryViewRegistration;	// 0 = 0x0
    MISSING_TYPE *cellBackgroundConfiguration;	// 0 = 0x0
    MISSING_TYPE *linkShareCoordinator;	// 0 = 0x0
    MISSING_TYPE *viewModel;	// 0 = 0x0
    MISSING_TYPE *linkController;	// 0 = 0x0
    MISSING_TYPE *cancellables;	// 0 = 0x0
    MISSING_TYPE *avatarController;	// 0 = 0x0
    MISSING_TYPE *detailControllerFactory;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000033b8b3
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000033b863
- (void)viewDidLoad;	// IMP=0x000000000033b7b2
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000033aecf
- (void)didTapJoin;	// IMP=0x000000000033c427
- (void)didTapDeleteLinkButton;	// IMP=0x000000000033c3dd
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000033d54c

@end
