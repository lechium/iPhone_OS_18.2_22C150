//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSObject, NSString, NSUUID;
@protocol HMDCompositeSettingsDatabaseAdapterDelegate, HMDCompositeSettingsModel, OS_dispatch_queue;

@protocol HMDCompositeSettingsDatabaseAdapter <NSObject>
@property(readonly, nonatomic) __weak id rawDatabase;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
- (id <HMDCompositeSettingsModel>)emptyModelWithID:(NSUUID *)arg1 parentModelID:(NSUUID *)arg2 modelClass:(Class)arg3;
- (void)startWithDelegate:(id <HMDCompositeSettingsDatabaseAdapterDelegate>)arg1;
- (void)addModel:(id <HMDCompositeSettingsModel>)arg1 withOptionsLabel:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (id <HMDCompositeSettingsModel>)fetchModelWithID:(NSUUID *)arg1;
- (void)stopObservingModelWithID:(NSUUID *)arg1;
- (void)startObservingModelWithID:(NSUUID *)arg1;
@end

