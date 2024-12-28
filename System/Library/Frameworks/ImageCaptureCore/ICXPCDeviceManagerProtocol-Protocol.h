//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@protocol ICXPCDeviceManagerProtocol
- (void)ejectDevice:(NSString *)arg1 withReply:(void (^)(NSMutableDictionary *))arg2;
- (void)closeDevice:(NSString *)arg1 withReply:(void (^)(NSMutableDictionary *))arg2;
- (void)openDevice:(NSString *)arg1 withReply:(void (^)(NSMutableDictionary *))arg2;
- (void)notifyRemovedDevice:(NSDictionary *)arg1;
- (void)notifyAddedDevice:(NSDictionary *)arg1;
- (void)requestDeviceListWithOptions:(NSDictionary *)arg1 reply:(void (^)(NSMutableDictionary *))arg2;
@end
