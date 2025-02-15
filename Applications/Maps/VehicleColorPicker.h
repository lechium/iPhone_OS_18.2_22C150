//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSArray, NSNumber, UIColor;
@protocol VehicleColorPickerDelegate;

@interface VehicleColorPicker : UIView
{
    NSNumber *_selectedIndex;	// 8 = 0x8
    unsigned long long _colorsPerRow;	// 16 = 0x10
    struct UIEdgeInsets _colorEdgeInsets;	// 24 = 0x18
    UIColor *_contrastColor;	// 56 = 0x38
    NSArray *_colors;	// 64 = 0x40
    id <VehicleColorPickerDelegate> _delegate;	// 72 = 0x48
    NSArray *_cells;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000006d153f
@property(retain, nonatomic) NSArray *cells; // @synthesize cells=_cells;
@property(readonly, nonatomic) __weak id <VehicleColorPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSArray *colors; // @synthesize colors=_colors;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000006d1241
- (void)pressedCell:(id)arg1;	// IMP=0x00100000006d106a
- (id)initWithColors:(id)arg1 colorsPerRow:(unsigned long long)arg2 colorEdgeInsets:(struct UIEdgeInsets)arg3 selectedIndex:(id)arg4 contrastColor:(id)arg5 delegate:(id)arg6;	// IMP=0x00100000006d03bd

@end

