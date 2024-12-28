//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SleepHealthUI/NSObject-Protocol.h>

@class UIColor, UIFont, UIView;

@protocol TKVibrationPickerStyleProvider <NSObject>
@property(readonly, nonatomic) struct UIEdgeInsets vibrationPickerHeaderTextPaddingInsets;
@property(readonly, nonatomic) struct UIOffset vibrationPickerHeaderTextShadowOffset;
@property(readonly, nonatomic) UIColor *vibrationPickerHeaderTextShadowColor;
@property(readonly, nonatomic) UIColor *vibrationPickerHeaderTextColor;
@property(readonly, nonatomic) UIFont *vibrationPickerHeaderTextFont;
@property(readonly, nonatomic) _Bool wantsCustomVibrationPickerHeaderView;
@property(readonly, nonatomic) UIColor *vibrationPickerCellBackgroundColor;
@property(readonly, nonatomic) UIColor *vibrationPickerCellHighlightedTextColor;
@property(readonly, nonatomic) UIColor *vibrationPickerCellTextColor;
@property(readonly, nonatomic) UIFont *vibrationPickerCellTextFont;
@property(readonly, nonatomic) long long vibrationPickerTableViewSeparatorStyle;
@property(readonly, nonatomic) _Bool vibrationPickerUsesOpaqueBackground;
- (UIView *)newAccessoryDisclosureIndicatorViewForVibrationPickerCell;
- (UIView *)newBackgroundViewForSelectedVibrationPickerCell:(_Bool)arg1;

@optional
@property(readonly, nonatomic) _Bool vibrationPickerHeaderTextShouldBeUppercase;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) long long vibrationPickerCustomTableSeparatorBackdropOverlayBlendMode;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N

@property(readonly, nonatomic) UIColor *vibrationPickerCustomTableSeparatorColor;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIColor",?,R,N

@property(readonly, nonatomic) UIColor *vibrationPickerCustomBackgroundColor;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIColor",?,R,N

@end
