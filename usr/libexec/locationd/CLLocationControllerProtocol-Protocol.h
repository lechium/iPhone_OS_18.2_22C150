//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CLLocationProviderProtocol-Protocol.h"

@class NSData;

@protocol CLLocationControllerProtocol <CLLocationProviderProtocol>
- (void)setTrackRunHint:(NSData *)arg1;
- (_Bool)syncgetZaxisStats:(void *)arg1;
- (void)setRealTimeHarvestTriggered:(double)arg1;
- (void)setGpsAssistantHasClients:(_Bool)arg1 forNotification:(int)arg2;
- (_Bool)syncgetActiveTechs:(void *)arg1;
- (_Bool)syncgetMetric:(void *)arg1;
- (_Bool)syncgetDoSync:(void (^)(void *))arg1;
- (void)doAsync:(void (^)(void *))arg1 withReply:(void (^)(void))arg2;
- (void)doAsync:(void (^)(void *))arg1;
@end
