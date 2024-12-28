//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CLNotifierServiceProtocol-Protocol.h"

@class CMMotionAlarm, NSObject, NSString;
@protocol CLMotionAlarmNotifierClientProtocol, OS_xpc_object;

@protocol CLMotionAlarmNotifierProtocol <CLNotifierServiceProtocol>
- (void)acknowledgeAlarm:(CMMotionAlarm *)arg1 withReply:(void (^)(CMMotionAlarm *, int))arg2;
- (void)unregisterAlarm:(CMMotionAlarm *)arg1 withReply:(void (^)(CMMotionAlarm *, int))arg2;
- (void)registerAlarm:(CMMotionAlarm *)arg1 withReply:(void (^)(CMMotionAlarm *, int))arg2;
- (void)unregisterClient:(struct Name (^)(void))arg1 systemClient:(_Bool)arg2;
- (void)registerClient:(struct Name (^)(void))arg1 adapter:(byref id <CLMotionAlarmNotifierClientProtocol>)arg2 systemClient:(_Bool)arg3;
- (_Bool)syncgetDoSync:(void (^)(void *))arg1;
- (void)doAsync:(void (^)(void *))arg1 withReply:(void (^)(void))arg2;
- (void)doAsync:(void (^)(void *))arg1;

@optional
- (void)fireEventAlarm:(unsigned int)arg1;
- (void)onCardioChangeEvent;
- (void)onClassATimerActivity:(NSObject<OS_xpc_object> *)arg1 withAlarmId:(unsigned long long)arg2;
- (void)launchWatchApplicationForCompanion:(NSString *)arg1;
- (void)launchRemoteApplication:(NSString *)arg1 withReply:(void (^)(int))arg2;
@end
