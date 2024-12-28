//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class AKController, AKFontChooserUIItemDelegate, AKFontListController, AKTextAttributesUIItemDelegate, NSNumber, NSString, UIColor, UITableViewCell;

@interface AKTextAttributesViewController : UITableViewController
{
    UITableViewCell *_sizeTableCell;	// 8 = 0x8
    UITableViewCell *_alignmentTableCell;	// 16 = 0x10
    UIColor *_currentFontColor;	// 24 = 0x18
    NSString *_currentFontFamilyName;	// 32 = 0x20
    NSNumber *_currentFontSize;	// 40 = 0x28
    id _currentAlignment;	// 48 = 0x30
    id _currentStyle;	// 56 = 0x38
    AKController *_controller;	// 64 = 0x40
    AKFontListController *_presetFontController;	// 72 = 0x48
    long long _lastActionID;	// 80 = 0x50
    id _lastActionValue;	// 88 = 0x58
    AKFontChooserUIItemDelegate *_fontUIItemDelegate;	// 96 = 0x60
    AKTextAttributesUIItemDelegate *_textAttributesUIItemDelegate;	// 104 = 0x68
}

+ (id)fontSizeNumberFormatter;	// IMP=0x00100000000f8b42
- (void).cxx_destruct;	// IMP=0x00000000000f8ef9
@property(retain, nonatomic) AKTextAttributesUIItemDelegate *textAttributesUIItemDelegate; // @synthesize textAttributesUIItemDelegate=_textAttributesUIItemDelegate;
@property(retain, nonatomic) AKFontChooserUIItemDelegate *fontUIItemDelegate; // @synthesize fontUIItemDelegate=_fontUIItemDelegate;
@property(retain) id lastActionValue; // @synthesize lastActionValue=_lastActionValue;
@property long long lastActionID; // @synthesize lastActionID=_lastActionID;
@property(retain, nonatomic) AKFontListController *presetFontController; // @synthesize presetFontController=_presetFontController;
@property(nonatomic) __weak AKController *controller; // @synthesize controller=_controller;
@property(nonatomic) id currentStyle; // @synthesize currentStyle=_currentStyle;
@property(nonatomic) id currentAlignment; // @synthesize currentAlignment=_currentAlignment;
@property(retain, nonatomic) NSNumber *currentFontSize; // @synthesize currentFontSize=_currentFontSize;
@property(retain, nonatomic) NSString *currentFontFamilyName; // @synthesize currentFontFamilyName=_currentFontFamilyName;
@property(retain, nonatomic) UIColor *currentFontColor; // @synthesize currentFontColor=_currentFontColor;
@property(retain, nonatomic) UITableViewCell *alignmentTableCell; // @synthesize alignmentTableCell=_alignmentTableCell;
@property(retain, nonatomic) UITableViewCell *sizeTableCell; // @synthesize sizeTableCell=_sizeTableCell;
- (void)syncTextAttributesToUI:(id)arg1;	// IMP=0x00000000000f86af
- (id)convertTextAttributes:(id)arg1;	// IMP=0x00000000000f81d5
- (void)syncFontsToUI:(id)arg1;	// IMP=0x00000000000f7d30
- (id)convertFont:(id)arg1;	// IMP=0x00000000000f7ac6
- (void)didSelectFont:(id)arg1;	// IMP=0x00000000000f7a25
- (_Bool)validateUserInterfaceItems;	// IMP=0x00000000000f7930
- (void)_sendTextAttributesAction;	// IMP=0x00000000000f786b
- (void)_sendFontAction;	// IMP=0x00000000000f77a6
- (void)_alignmentSegmentChanged:(id)arg1;	// IMP=0x00000000000f76ee
- (void)_styleSegmentChanged:(id)arg1;	// IMP=0x00000000000f7547
- (void)_sizeStepperValueChanged:(id)arg1;	// IMP=0x00000000000f737a
- (id)createRowAlignmentCell;	// IMP=0x00000000000f7003
- (id)createRowFontSizeCell;	// IMP=0x00000000000f6b1b
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000f69d9
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000f672e
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000000f655a
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000f6090
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000000f601e
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000000f6013
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000000f600b
- (void)viewDidLoad;	// IMP=0x00000000000f5d93
- (void)_commonInit;	// IMP=0x00000000000f5ba5
- (id)initWithController:(id)arg1;	// IMP=0x00000000000f5ae8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
