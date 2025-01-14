//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CARSettingsCellSpecifier, NSArray, NSString, UIView;

@interface CARDebugColorsPanel
{
    CARSettingsCellSpecifier *_cellSpecifier;	// 8 = 0x8
    UIView *_phoneView;	// 16 = 0x10
    NSArray *_cellSpecifiers;	// 24 = 0x18
    NSArray *_colorModels;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000000d1e9
@property(readonly) NSArray *colorModels; // @synthesize colorModels=_colorModels;
- (void)colorViewWasTapped:(id)arg1;	// IMP=0x001000000000d162
- (unsigned long long)numberOfColumns;	// IMP=0x001000000000d157
- (id)cellSpecifiers;	// IMP=0x001000000000cd8c
- (void)viewDidLoad;	// IMP=0x001000000000cd5d
- (id)initWithPanelController:(id)arg1;	// IMP=0x001000000000c4e0
- (void)_phoneButtonPressed:(id)arg1;	// IMP=0x001000000000c3f1
- (id)phoneView;	// IMP=0x001000000000bcac
- (id)cellSpecifier;	// IMP=0x001000000000bb55

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

