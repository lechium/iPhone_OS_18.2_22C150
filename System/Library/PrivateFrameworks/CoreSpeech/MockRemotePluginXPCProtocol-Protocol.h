//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL, NSUUID;

@protocol MockRemotePluginXPCProtocol
- (void)disconnectDeviceWithUUID:(NSUUID *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)listMockRemoteDeviecesWithCompletion:(void (^)(NSMutableArray *))arg1;
- (void)injectAudio:(NSURL *)arg1 toDeviceWithUUID:(NSUUID *)arg2 completion:(void (^)(_Bool, NSError *, unsigned long long, unsigned long long))arg3;
- (void)createMockRemoteDeviceWithName:(NSString *)arg1 deviceID:(NSString *)arg2 completion:(void (^)(_Bool, NSError *, NSUUID *))arg3;
@end

