//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AnnounceDaemon/ANConnectionProvider-Protocol.h>

@class IDSService, NSDictionary, NSError, NSString;
@protocol IDSDestinationProtocol;

@protocol ANIDSConnectionProvider <ANConnectionProvider>
@property(readonly, nonatomic) IDSService *service;
- (NSError *)sendMessage:(NSDictionary *)arg1 messageUUIDString:(NSString *)arg2 destination:(id <IDSDestinationProtocol>)arg3;
@end

