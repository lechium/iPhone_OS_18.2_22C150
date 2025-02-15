//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/NSObject-Protocol.h>

@class NSDictionary, NSString, NSUUID;

@protocol AFServiceDeviceContextMutating <NSObject>
- (void)setMetricsContext:(NSDictionary *)arg1;
- (void)setSerializedContextByKey:(NSDictionary *)arg1;
- (void)setProximity:(long long)arg1;
- (void)setRoomName:(NSString *)arg1;
- (void)setSharedUserID:(NSString *)arg1;
- (void)setMediaRouteIdentifier:(NSString *)arg1;
- (void)setMediaSystemIdentifier:(NSString *)arg1;
- (void)setAssistantIdentifier:(NSString *)arg1;
- (void)setIdentifier:(NSUUID *)arg1;
@end

