//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PencilKit/NSObject-Protocol.h>

@class UIViewController;
@protocol PKPaletteColorPicker, PKPaletteColorPickerControllerDelegate;

@protocol PKPaletteColorPickerController <NSObject>
@property(nonatomic) __weak id <PKPaletteColorPickerControllerDelegate> delegate;
@property(readonly, nonatomic) UIViewController *viewController;
@property(readonly, nonatomic) id <PKPaletteColorPicker> colorPicker;
- (void)dismissEyeDropper;
@end

