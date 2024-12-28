//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MapsDebugCheckmarkRowsGroup, UITapGestureRecognizer;

@interface MapsDebugCheckmarkRow
{
    _Bool _checked;	// 8 = 0x8
    UITapGestureRecognizer *_tapGestureRecognizer;	// 16 = 0x10
    CDUnknownBlockType _controlSelectionAction;	// 24 = 0x18
    CDUnknownBlockType _get;	// 32 = 0x20
    id _value;	// 40 = 0x28
    MapsDebugCheckmarkRowsGroup *_rowsGroup;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000002a8a89
@property(readonly, nonatomic) _Bool isChecked; // @synthesize isChecked=_checked;
@property(retain, nonatomic) MapsDebugCheckmarkRowsGroup *rowsGroup; // @synthesize rowsGroup=_rowsGroup;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(copy, nonatomic) CDUnknownBlockType get; // @synthesize get=_get;
- (CDUnknownBlockType)selectionAction;	// IMP=0x00100000002a89cc
- (void)updateConfiguration;	// IMP=0x00100000002a88ed
- (void)updateChecked;	// IMP=0x00100000002a870c
- (void)update;	// IMP=0x00100000002a86de
- (void)setCurrentCollectionViewCell:(id)arg1;	// IMP=0x00100000002a869d
- (void)invalidate;	// IMP=0x00100000002a85c9
- (id)reuseIdentifier;	// IMP=0x00100000002a85b7
- (id)init;	// IMP=0x00100000002a8479
- (void)configureCollectionViewCell:(id)arg1;	// IMP=0x001000000043b60c
- (void)configureCell:(id)arg1;	// IMP=0x001000000043b59e
- (void)_fireControlSelectionAction;	// IMP=0x001000000043b4c4
- (void)_didTapLabel:(id)arg1;	// IMP=0x001000000043b483
- (void)_didSelectAccessory:(id)arg1;	// IMP=0x001000000043b471
- (id)_createAccessoryView;	// IMP=0x001000000043b318
- (void)_configureTapGestureOnLabel:(id)arg1;	// IMP=0x001000000043b23a
- (void)_configureCollectionViewCellForCheckedValue:(id)arg1;	// IMP=0x001000000043adfa
- (void)_configureCellForCheckedValue:(id)arg1;	// IMP=0x001000000043abb3
- (void)setSelectionAction:(CDUnknownBlockType)arg1;	// IMP=0x001000000043aad0
@property(readonly, nonatomic) _Bool isDisabled;

@end
