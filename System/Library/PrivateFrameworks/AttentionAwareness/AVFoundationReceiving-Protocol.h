//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVMetadataObject, NSNotification, NSString;

@protocol AVFoundationReceiving
- (void)receiveNotificationOfName:(NSString *)arg1 notification:(NSNotification *)arg2;
- (void)receiveMetadata:(AVMetadataObject *)arg1 type:(NSString *)arg2;
@end

