//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/NSObject-Protocol.h>

@class NSObject;
@protocol OS_dispatch_queue;

@protocol HMDarwinNotificationProvider <NSObject>
- (_Bool)notifyIsValidToken:(int)arg1;
- (unsigned int)notifyPost:(const char *)arg1;
- (unsigned int)notifyCancel:(int)arg1;
- (unsigned int)notifySetState:(int)arg1 state:(unsigned long long)arg2;
- (unsigned int)notifyGetState:(int)arg1 state:(unsigned long long *)arg2;
- (unsigned int)notifyRegisterCheck:(const char *)arg1 outToken:(int *)arg2;
- (unsigned int)notifyRegisterDispatch:(const char *)arg1 outToken:(int *)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3 handler:(void (^)(int))arg4;
@end

