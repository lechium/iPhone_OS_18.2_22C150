//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PodcastsFoundation/NSObject-Protocol.h>

@class ICContentKeySession, ICSecureKeyDeliveryResponse, NSError, NSString;

@protocol ICContentKeySessionDelegateProtocol <NSObject>

@optional
- (void)contentKeySession:(ICContentKeySession *)arg1 didFinishProcessingKey:(NSString *)arg2 withResponse:(ICSecureKeyDeliveryResponse *)arg3 error:(NSError *)arg4;
@end

