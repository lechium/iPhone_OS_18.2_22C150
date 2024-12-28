//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ToneKit/NSObject-Protocol.h>

@class NSIndexPath, NSNumber, NSString, TKTonePickerController, TKTonePickerItem;

@protocol TKTonePickerControllerDelegateInternal <NSObject>

@optional
- (void)tonePickerController:(TKTonePickerController *)arg1 requestsPresentingAlertWithTitle:(NSString *)arg2 message:(NSString *)arg3;
- (void)tonePickerController:(TKTonePickerController *)arg1 didUpdateIgnoreMute:(_Bool)arg2 forTonePickerItem:(TKTonePickerItem *)arg3 atIndexPath:(NSIndexPath *)arg4;
- (void)tonePickerControllerRequestsPresentingVibrationPicker:(TKTonePickerController *)arg1;
- (void)tonePickerController:(TKTonePickerController *)arg1 requestsPresentingToneClassicsPickerForItem:(TKTonePickerItem *)arg2;
- (void)tonePickerController:(TKTonePickerController *)arg1 willBeginPlaybackOfToneWithIdentifier:(NSString *)arg2;
- (_Bool)tonePickerControllerDidStopPlaying:(TKTonePickerController *)arg1 withFadeOutDuration:(double)arg2;
- (void)tonePickerControllerRequestsPresentingMediaItemPicker:(TKTonePickerController *)arg1;
- (void)tonePickerController:(TKTonePickerController *)arg1 didSelectMediaItemAtIndex:(unsigned long long)arg2 selectionDidChange:(_Bool)arg3;
- (unsigned long long)tonePickerController:(TKTonePickerController *)arg1 indexOfMediaItemWithIdentifier:(NSNumber *)arg2;
- (NSString *)tonePickerController:(TKTonePickerController *)arg1 titleOfMediaItemAtIndex:(unsigned long long)arg2;
- (NSNumber *)tonePickerController:(TKTonePickerController *)arg1 identifierOfMediaItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfMediaItemsInTonePickerController:(TKTonePickerController *)arg1;
- (void)tonePickerControllerRequestsMediaItemsRefresh:(TKTonePickerController *)arg1;
- (_Bool)tonePickerControllerShouldShowMedia:(TKTonePickerController *)arg1;
- (void)tonePickerController:(TKTonePickerController *)arg1 selectedMediaItemWithIdentifier:(NSNumber *)arg2;
@end
