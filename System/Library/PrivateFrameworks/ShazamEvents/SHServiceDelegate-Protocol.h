//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShazamEvents/NSObject-Protocol.h>

@class NSArray, NSUUID;
@protocol SHService, SHWorker;

@protocol SHServiceDelegate <NSObject>
@property(readonly, nonatomic) _Bool hasRegisteredWorkers;
- (id <SHWorker>)registeredWorkerForWorkerID:(NSUUID *)arg1;
- (void)unregisterAllWorkersForService:(id <SHService>)arg1;
- (NSArray *)allWorkersForService:(id <SHService>)arg1;
- (void)service:(id <SHService>)arg1 unregisterWorker:(id <SHWorker>)arg2;
- (_Bool)service:(id <SHService>)arg1 registerWorker:(id <SHWorker>)arg2 watchdogTimeout:(double)arg3 error:(id *)arg4;
@end

