//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ContainerHeaderView, NSString, TravelPreferencesDataSource;

@interface TravelPreferencesViewController
{
    ContainerHeaderView *_titleHeaderView;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
}

+ (_Bool)useCollectionView;	// IMP=0x00200000007b462a
- (void).cxx_destruct;	// IMP=0x00200000007b5896
- (void)reloadData;	// IMP=0x00100000007b5859
- (void)valueChangedForGEOConfigKey:(CDStruct_065526f1)arg1;	// IMP=0x00100000007b5834
- (void)keyboardWillHide:(id)arg1;	// IMP=0x00100000007b5782
- (void)keyboardWillShow:(id)arg1;	// IMP=0x00100000007b55b3
- (void)didTapOnPrivacyText;	// IMP=0x00100000007b554c
- (void)dataSource:(id)arg1 itemTapped:(id)arg2;	// IMP=0x00100000007b5546
- (void)dataSource:(id)arg1 itemFocused:(id)arg2;	// IMP=0x00100000007b5540
- (void)dataSourceUpdated:(id)arg1;	// IMP=0x00100000007b553a
- (void)dataSourceDidRebuildSections:(id)arg1;	// IMP=0x00100000007b550b
- (void)headerViewButtonTapped:(id)arg1 buttonType:(unsigned long long)arg2;	// IMP=0x00100000007b5280
- (struct NSDirectionalEdgeInsets)collectionViewListSectionContentInsetsForSection:(long long)arg1;	// IMP=0x00100000007b521c
- (long long)collectionViewConfigurationSeparatorStyle;	// IMP=0x00100000007b5205
- (long long)collectionViewListLayoutAppearanceStyle;	// IMP=0x00100000007b51eb
- (void)setupSubviews;	// IMP=0x00100000007b51bc
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000007b50d9
- (void)viewDidLoad;	// IMP=0x00100000007b47a4
@property(readonly, nonatomic) TravelPreferencesDataSource *travelPreferencesDataSource;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000007b4632

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
