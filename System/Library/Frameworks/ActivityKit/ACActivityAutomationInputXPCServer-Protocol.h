//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDictionary, NSNumber, NSString;

@protocol ACActivityAutomationInputXPCServer
- (void)mockPushWithChannelID:(NSString *)arg1 processIdentifier:(NSString *)arg2 environmentName:(NSString *)arg3 payload:(NSDictionary *)arg4 pushPriority:(NSNumber *)arg5 completionHandler:(void (^)(NSNumber *, NSError *))arg6;
- (void)mockPushWithToken:(NSData *)arg1 processIdentifier:(NSString *)arg2 environmentName:(NSString *)arg3 payload:(NSDictionary *)arg4 pushPriority:(NSNumber *)arg5 completionHandler:(void (^)(NSNumber *, NSError *))arg6;
@end

