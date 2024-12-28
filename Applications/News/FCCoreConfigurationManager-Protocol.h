//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSObject;
@protocol FCCoreConfiguration, FCCoreConfigurationObserving, OS_dispatch_queue;

@protocol FCCoreConfigurationManager <NSObject>
@property(readonly, nonatomic) id <FCCoreConfiguration> configuration;
- (void)removeObserver:(id <FCCoreConfigurationObserving>)arg1;
- (void)addObserver:(id <FCCoreConfigurationObserving>)arg1;
- (void)fetchConfigurationIfNeededWithCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 completion:(void (^)(id <FCCoreConfiguration>, NSError *))arg2;
- (void)fetchConfigurationIfNeededWithCompletion:(void (^)(id <FCCoreConfiguration>, NSError *))arg1;
@end
