//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterKit/NSObject-Protocol.h>

@class PREditingFontPickerComponentViewController, PREditingFontPickerItem;

@protocol PREditingFontPickerComponentViewControllerDelegate <NSObject>
- (void)fontPickerComponentViewControllerDidChangeHeight:(PREditingFontPickerComponentViewController *)arg1;
- (_Bool)fontPickerComponentViewControllerShouldShowWeightSliderForSelectedFont:(PREditingFontPickerComponentViewController *)arg1;
- (void)fontPickerComponentViewController:(PREditingFontPickerComponentViewController *)arg1 didChangeFontWeight:(double)arg2;
- (void)fontPickerComponentViewController:(PREditingFontPickerComponentViewController *)arg1 didSelectItem:(PREditingFontPickerItem *)arg2;
@end

