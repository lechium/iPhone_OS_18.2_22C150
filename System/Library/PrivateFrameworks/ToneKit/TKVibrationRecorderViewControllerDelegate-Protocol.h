//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ToneKit/NSObject-Protocol.h>

@class NSDictionary, NSString, TKVibrationRecorderViewController;

@protocol TKVibrationRecorderViewControllerDelegate <NSObject>
- (void)vibrationRecorderViewControllerWasDismissedWithoutSavingRecordedVibrationPattern:(TKVibrationRecorderViewController *)arg1;
- (void)vibrationRecorderViewController:(TKVibrationRecorderViewController *)arg1 didFinishRecordingVibrationPattern:(NSDictionary *)arg2 name:(NSString *)arg3;
@end

