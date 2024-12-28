//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UIButton, UILabel, UIStepper, UISwitch, WKWebView;
@protocol SSSDittoDebugViewDelegate;

@interface SSSDittoDebugView : UIView
{
    UIButton *_addScreenshotsButton;	// 8 = 0x8
    UIStepper *_numberOfScreenshotsToAddStepper;	// 16 = 0x10
    UISwitch *_snapshotPDFSwitch;	// 24 = 0x18
    UILabel *_snapshotPDFLabel;	// 32 = 0x20
    UISwitch *_multipagePDFSwitch;	// 40 = 0x28
    UILabel *_multipagePDFLabel;	// 48 = 0x30
    UIButton *_uiCatalogButton;	// 56 = 0x38
    WKWebView *_webView;	// 64 = 0x40
    CDUnknownBlockType _blockToRunForAddScreenshotsButton;	// 72 = 0x48
    id <SSSDittoDebugViewDelegate> _delegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000001bb8b
@property(nonatomic) __weak id <SSSDittoDebugViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType blockToRunForAddScreenshotsButton; // @synthesize blockToRunForAddScreenshotsButton=_blockToRunForAddScreenshotsButton;
- (void)layoutSubviews;	// IMP=0x001000000001b616
- (void)_updateScreenshotCount;	// IMP=0x001000000001b57d
- (void)_uiCatalogButtonPushed;	// IMP=0x001000000001b512
@property(readonly, nonatomic) long long numberOfScreenshotsToAdd;
- (void)resetScrollOffset;	// IMP=0x001000000001b492
- (void)advanceScrollOffset;	// IMP=0x001000000001b3bb
- (id)generatePDF:(struct CGRect *)arg1;	// IMP=0x001000000001add5
- (_Bool)shouldIncludePDF;	// IMP=0x001000000001adb8
- (void)_addScreenshotPushed;	// IMP=0x001000000001ad80
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000001a741

@end
