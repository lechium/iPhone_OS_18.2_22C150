//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class UIButton, UILabel, UIStackView;

@interface LUIPerformanceTestHintViewController : UIViewController
{
    UIButton *_okButton;	// 8 = 0x8
    UILabel *_headerTextLabel;	// 16 = 0x10
    UILabel *_secondTextLabel;	// 24 = 0x18
    UIStackView *_stackView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000003af1f
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) UILabel *secondTextLabel; // @synthesize secondTextLabel=_secondTextLabel;
@property(retain, nonatomic) UILabel *headerTextLabel; // @synthesize headerTextLabel=_headerTextLabel;
@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
- (void)okButtonPressed:(id)arg1;	// IMP=0x001000000003ae72
- (id)_secondHintText;	// IMP=0x001000000003ab9c
- (id)_headerHintText;	// IMP=0x001000000003a76e
- (id)_createImageViewWithImage:(id)arg1;	// IMP=0x001000000003a654
- (id)_createTextLabelWithAttributedText:(id)arg1;	// IMP=0x001000000003a589
- (void)viewDidLayoutSubviews;	// IMP=0x001000000003a408
- (void)_setupViews;	// IMP=0x001000000003a090
- (void)viewDidLoad;	// IMP=0x001000000003a04f

@end

