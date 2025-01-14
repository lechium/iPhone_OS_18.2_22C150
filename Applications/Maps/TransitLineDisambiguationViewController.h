//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CardPresentationController, ContainerHeaderView, MacMenuPresentationController, MacPopoverPresentationController, MapsThemeTableView, NSArray, NSDictionary, NSString, UILabel;

@interface TransitLineDisambiguationViewController
{
    double _maxWidthOfShields;	// 8 = 0x8
    CDUnknownBlockType _lineSelectionBlock;	// 16 = 0x10
    NSString *_titleMessage;	// 24 = 0x18
    NSString *_statusMessage;	// 32 = 0x20
    ContainerHeaderView *_titleHeaderView;	// 40 = 0x28
    UILabel *_macTitleLabel;	// 48 = 0x30
    MapsThemeTableView *_tableView;	// 56 = 0x38
    NSDictionary *_shieldsByLine;	// 64 = 0x40
    NSArray *_linesBySystem;	// 72 = 0x48
    NSArray *_allLines;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000b3ceb8
@property(retain, nonatomic) NSArray *allLines; // @synthesize allLines=_allLines;
@property(retain, nonatomic) NSArray *linesBySystem; // @synthesize linesBySystem=_linesBySystem;
@property(copy, nonatomic) NSDictionary *shieldsByLine; // @synthesize shieldsByLine=_shieldsByLine;
@property(retain, nonatomic) MapsThemeTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UILabel *macTitleLabel; // @synthesize macTitleLabel=_macTitleLabel;
@property(retain, nonatomic) ContainerHeaderView *titleHeaderView; // @synthesize titleHeaderView=_titleHeaderView;
@property(copy, nonatomic) NSString *statusMessage; // @synthesize statusMessage=_statusMessage;
@property(copy, nonatomic) NSString *titleMessage; // @synthesize titleMessage=_titleMessage;
@property(copy, nonatomic) CDUnknownBlockType lineSelectionBlock; // @synthesize lineSelectionBlock=_lineSelectionBlock;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000b3cb3a
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000b3cad6
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000b3c70b
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0010000000b3c6c4
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0010000000b3c61f
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000b3c579
- (id)titleForSection:(long long)arg1;	// IMP=0x0010000000b3c37b
- (_Bool)hasStatusMessageToShow;	// IMP=0x0010000000b3c2f0
- (_Bool)isLoading;	// IMP=0x0010000000b3c265
- (void)shouldDismissForHorizontalSwipe_nonUIKitCardsOnly;	// IMP=0x0010000000b3c250
- (struct CGSize)calculatePreferredContentSize;	// IMP=0x0010000000b3c132
- (void)updatePreferredContentSize;	// IMP=0x0010000000b3c0b3
- (void)handleDismissAction:(id)arg1;	// IMP=0x0010000000b3c003
- (int)currentMapViewTargetForAnalytics;	// IMP=0x0010000000b3bff8
- (int)currentUITargetForAnalytics;	// IMP=0x0010000000b3bfed
- (void)headerViewTapped:(id)arg1;	// IMP=0x0010000000b3bfb0
- (void)headerViewButtonTapped:(id)arg1 buttonType:(unsigned long long)arg2;	// IMP=0x0010000000b3bf9e
- (void)_determineShieldsFromLines;	// IMP=0x0010000000b3b8fc
- (void)setLines:(id)arg1;	// IMP=0x0010000000b3b3e0
- (void)viewDidLoad;	// IMP=0x0010000000b3a5dd

// Remaining properties
@property(readonly, nonatomic) _Bool allowsLongPressToMarkLocation;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool allowsQuickActionMenuInMap;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) CardPresentationController *cardPresentationController;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double headerHeight;
@property(readonly, nonatomic) MacMenuPresentationController *macMenuPresentationController;
@property(readonly, nonatomic) MacPopoverPresentationController *macPopoverPresentationController;
@property(nonatomic) unsigned long long preferredPresentationStyle;
@property(readonly, nonatomic) unsigned long long retainedLayout;
@property(readonly) Class superclass;

@end

