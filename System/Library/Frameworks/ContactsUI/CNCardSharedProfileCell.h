//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNCardSharedProfileCellView, CNContact, CNSharedProfileStateOracle;
@protocol CNCardSharedProfileCellActionDelegate;

__attribute__((visibility("hidden")))
@interface CNCardSharedProfileCell
{
    CNSharedProfileStateOracle *_sharedProfileStateOracle;	// 8 = 0x8
    id <CNCardSharedProfileCellActionDelegate> _actionDelegate;	// 16 = 0x10
    CNCardSharedProfileCellView *_snapView;	// 24 = 0x18
    CNContact *_contact;	// 32 = 0x20
}

+ (_Bool)shouldIndentWhileEditing;	// IMP=0x00100000002bdf4a
- (void).cxx_destruct;	// IMP=0x00000000002bdef9
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) CNCardSharedProfileCellView *snapView; // @synthesize snapView=_snapView;
@property(nonatomic) __weak id <CNCardSharedProfileCellActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(retain, nonatomic) CNSharedProfileStateOracle *sharedProfileStateOracle; // @synthesize sharedProfileStateOracle=_sharedProfileStateOracle;
- (void)viewDidSelectFallbackAction;	// IMP=0x00000000002bde45
- (void)viewDidSelectDisplayPreference:(long long)arg1;	// IMP=0x00000000002bdd9f
- (void)setLabelTextAttributes:(id)arg1;	// IMP=0x00000000002bdcb7
- (void)updateConstraints;	// IMP=0x00000000002bdc4a
- (id)variableConstraintsForHorizontalLayout;	// IMP=0x00000000002bdc3d
- (id)constantConstraintsForHorizontalLayout;	// IMP=0x00000000002bdc30
- (id)constantConstraintsForVerticalLayout;	// IMP=0x00000000002bdc23
- (id)variableConstraints;	// IMP=0x00000000002bd7eb
- (void)updateViewsWithCardGroupItem:(id)arg1;	// IMP=0x00000000002bd5eb
- (void)setCardGroupItem:(id)arg1;	// IMP=0x00000000002bd4c0
@property(nonatomic) _Bool allowsEditing;
- (_Bool)allowsCellSelection;	// IMP=0x00000000002bd440
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000002bd3f2

@end
