//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, UIMenu;
@protocol _TtP4Maps21LibraryActionDelegate_;

@interface _TtC4Maps27LibraryPlacesViewController
{
    MISSING_TYPE *actionDelegate;	// 8 = 0x8
    MISSING_TYPE *collectionViewManager;	// 16 = 0x10
    MISSING_TYPE *sortType;	// 24 = 0x18
    MISSING_TYPE *layoutType;	// 25 = 0x19
    MISSING_TYPE *hasPendingDeletion;	// 26 = 0x1a
    MISSING_TYPE *searchRequestDebouncer;	// 32 = 0x20
    MISSING_TYPE *countsManager;	// 40 = 0x28
    MISSING_TYPE *$__lazy_storage_$_navBar;	// 48 = 0x30
    MISSING_TYPE *$__lazy_storage_$_navItem;	// 56 = 0x38
    MISSING_TYPE *$__lazy_storage_$_menuButton;	// 64 = 0x40
    MISSING_TYPE *$__lazy_storage_$_addButton;	// 72 = 0x48
    MISSING_TYPE *$__lazy_storage_$_titleLabelButton;	// 80 = 0x50
    MISSING_TYPE *$__lazy_storage_$_dismissButtonIOS;	// 88 = 0x58
    MISSING_TYPE *$__lazy_storage_$_doneEditingButton;	// 96 = 0x60
    MISSING_TYPE *$__lazy_storage_$_menuProvider;	// 104 = 0x68
    MISSING_TYPE *$__lazy_storage_$_searchController;	// 120 = 0x78
    MISSING_TYPE *$__lazy_storage_$_collectionView;	// 128 = 0x80
    MISSING_TYPE *$__lazy_storage_$_emptyStateView;	// 136 = 0x88
    MISSING_TYPE *placesTitle;	// 144 = 0x90
    MISSING_TYPE *isKeyboardPresented;	// 160 = 0xa0
    MISSING_TYPE *noteEditorPrePresentationDidFinish;	// 168 = 0xa8
    MISSING_TYPE *$__lazy_storage_$_selectionModeMenu;	// 184 = 0xb8
    MISSING_TYPE *$__lazy_storage_$_selectionTriggerMenu;	// 192 = 0xc0
}

+ (_Bool)wantsDefaultHeaderContentViews;	// IMP=0x00400000001e64e0
- (void).cxx_destruct;	// IMP=0x00200000001e4a10
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001e8cc0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000001e89b0
- (void)prepareForNoteEditorPresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e8610
- (void)keyboardDidDismiss;	// IMP=0x00100000001e83a0
- (void)keyboardDidAppear;	// IMP=0x00100000001e8310
@property(nonatomic, retain) UIMenu *selectionTriggerMenu;
@property(nonatomic, retain) UIMenu *selectionModeMenu;
- (void)addLibraryItem;	// IMP=0x00100000001e6c50
- (void)exitEditingMode;	// IMP=0x00100000001e6b70
- (void)dismissTapped;	// IMP=0x00100000001e64c0
- (void)prepareLibrary;	// IMP=0x00100000001e63f0
- (void)setupConstraints;	// IMP=0x00100000001e6200
- (void)didResignCurrent;	// IMP=0x00100000001e61d0
- (void)willBecomeCurrent:(_Bool)arg1;	// IMP=0x00100000001e60d0
- (void)viewDidLoad;	// IMP=0x00100000001e5fb0
- (void)dealloc;	// IMP=0x00100000001e49a0
@property(nonatomic, copy) CDUnknownBlockType menuProvider;
@property(nonatomic) __weak id <_TtP4Maps21LibraryActionDelegate_> actionDelegate; // @synthesize actionDelegate;
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x00100000001e9160
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;	// IMP=0x00100000001e9710
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00100000001e9650
- (void)libraryItemsCountManager:(id)arg1 didUpdateCounts:(id)arg2;	// IMP=0x00100000001e97c0

@end

