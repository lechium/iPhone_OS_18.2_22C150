//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/PUIStylePickerViewControllerObserver-Protocol.h>

@class NSArray, PUIFont, PUIStylePickerViewController, PUIStyleUICoordinator;
@protocol PUIStyle;

@protocol PUIStylePickerViewControllerDelegate <PUIStylePickerViewControllerObserver>

@optional
- (PUIStyleUICoordinator *)stylePickerViewController:(PUIStylePickerViewController *)arg1 coordinatorForStyle:(id <PUIStyle>)arg2 isSuggested:(_Bool)arg3;
- (_Bool)stylePickerViewController:(PUIStylePickerViewController *)arg1 shouldShowFont:(PUIFont *)arg2;
- (NSArray *)additionalFontsForStylePickerViewController:(PUIStylePickerViewController *)arg1;
@end
