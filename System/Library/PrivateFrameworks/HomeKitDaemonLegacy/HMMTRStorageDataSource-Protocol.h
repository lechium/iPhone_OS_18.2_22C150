//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMMTRFabric, NSNumber, NSSet, NSUUID;
@protocol HMMTRFabricStorageDataSource;

@protocol HMMTRStorageDataSource <NSObject>
@property(readonly, copy) NSNumber *currentFabricID;
@property(readonly, copy, nonatomic) NSSet *allTargetFabricUUIDs;
@property(readonly, copy, nonatomic) NSSet *allFabricIDs;
@property(readonly, copy, nonatomic) NSSet *allPairedHAPServerIdentifiers;
- (NSUUID *)appleHomeTargetFabricUUIDWithID:(NSNumber *)arg1;
- (HMMTRFabric *)appleHomeFabricWithUUID:(NSUUID *)arg1;
- (HMMTRFabric *)appleHomeFabricWithID:(NSNumber *)arg1;
- (void)forAllStorageDataSourcesDo:(_Bool (^)(id <HMMTRFabricStorageDataSource>))arg1;
- (id <HMMTRFabricStorageDataSource>)storageDataSourceForFabricWithID:(NSNumber *)arg1;
@end
