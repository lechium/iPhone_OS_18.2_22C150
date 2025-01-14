//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class BatteryIconView, NSLayoutConstraint, NSString, UIButton, UILabel, VGVehicle;

@interface RoutePlanningOptionsBar : UIView
{
    UIButton *_button;	// 8 = 0x8
    UILabel *_summaryLabel;	// 16 = 0x10
    BatteryIconView *_batteryView;	// 24 = 0x18
    CDUnknownBlockType _actionHandler;	// 32 = 0x20
    NSLayoutConstraint *_summaryToTrailingConstraint;	// 40 = 0x28
    NSLayoutConstraint *_summaryToBatteryConstraint;	// 48 = 0x30
    NSLayoutConstraint *_batteryToTrailingConstraint;	// 56 = 0x38
    NSString *_summaryText;	// 64 = 0x40
    VGVehicle *_vehicle;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000ab8b08
@property(retain, nonatomic) VGVehicle *vehicle; // @synthesize vehicle=_vehicle;
@property(copy, nonatomic) NSString *summaryText; // @synthesize summaryText=_summaryText;
- (void)_buttonTapped;	// IMP=0x0010000000ab8acc
- (void)_updateContent;	// IMP=0x0010000000ab87e3
- (void)setButtonTitle:(id)arg1 actionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000ab864e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000ab7cff

@end

