//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/NSObject-Protocol.h>

@class NSError, SCContentFilter, SCStream, VCScreenCapturePicker;

@protocol VCScreenCapturePickerDelegate <NSObject>
- (void)pickerCancelled:(VCScreenCapturePicker *)arg1 forStream:(SCStream *)arg2;
- (void)picker:(VCScreenCapturePicker *)arg1 pickedContentFilter:(SCContentFilter *)arg2 forStream:(SCStream *)arg3 error:(NSError *)arg4;
@end

