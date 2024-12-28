//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActivitySharingDaemonCore/_HKXPCExportable-Protocol.h>

@class HDHealthStoreClient, HKTaskConfiguration, NSArray, NSString, NSUUID;
@protocol HDTaskServer, HDTaskServerDelegate;

@protocol HDTaskServer <_HKXPCExportable>
+ (NSArray *)requiredEntitlements;
+ (NSString *)taskIdentifier;
- (NSUUID *)taskUUID;
- (id)initWithUUID:(NSUUID *)arg1 configuration:(HKTaskConfiguration *)arg2 client:(HDHealthStoreClient *)arg3 delegate:(id <HDTaskServerDelegate>)arg4;

@optional
+ (_Bool)validateConfiguration:(HKTaskConfiguration *)arg1 client:(HDHealthStoreClient *)arg2 error:(id *)arg3;
+ (_Bool)validateClient:(HDHealthStoreClient *)arg1 error:(id *)arg2;
+ (id <HDTaskServer>)createTaskServerWithUUID:(NSUUID *)arg1 configuration:(HKTaskConfiguration *)arg2 client:(HDHealthStoreClient *)arg3 delegate:(id <HDTaskServerDelegate>)arg4 error:(id *)arg5;
+ (Class)configurationClass;
@end
