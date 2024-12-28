//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/NSObject-Protocol.h>

@class AMSPushConfiguration, AMSPushPayload;
@protocol AMSBagProtocol;

@protocol AMSPushParsable <NSObject>
+ (void)handleNotificationPayload:(AMSPushPayload *)arg1 config:(AMSPushConfiguration *)arg2 bag:(id <AMSBagProtocol>)arg3;

@optional
+ (_Bool)shouldSkipAccountCheck;
@end
