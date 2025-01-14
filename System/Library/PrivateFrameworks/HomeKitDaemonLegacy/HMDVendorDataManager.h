//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFTimer, NSDictionary, NSObject, NSString, NSURL, NSURLSession;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDVendorDataManager : HMFObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSURLSession *_urlSession;	// 16 = 0x10
    HMFTimer *_fetchTimer;	// 24 = 0x18
    long long _dataVersion;	// 32 = 0x20
    NSDictionary *_collectionsByManufacturer;	// 40 = 0x28
    NSDictionary *_entriesByProductData;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x00100000008236df
+ (id)dbURL;	// IMP=0x00100000008236af
+ (id)sharedVendorDataManager;	// IMP=0x001000000082367f
- (void).cxx_destruct;	// IMP=0x0000000000822d76
@property(retain) NSDictionary *entriesByProductData; // @synthesize entriesByProductData=_entriesByProductData;
@property(retain) NSDictionary *collectionsByManufacturer; // @synthesize collectionsByManufacturer=_collectionsByManufacturer;
@property long long dataVersion; // @synthesize dataVersion=_dataVersion;
@property(readonly, nonatomic) HMFTimer *fetchTimer; // @synthesize fetchTimer=_fetchTimer;
@property(readonly, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000822c62
- (_Bool)_parseManufacturersList:(id)arg1 collectionsByManufacturer:(id *)arg2 entriesByProductData:(id *)arg3;	// IMP=0x0000000000821e4c
- (id)_parseVendorModelEntryForManufacturer:(id)arg1 model:(id)arg2 dictionary:(id)arg3;	// IMP=0x00000000008217fe
- (id)_modelsStringForManufacturer:(id)arg1 model:(id)arg2 dictionary:(id)arg3 key:(id)arg4;	// IMP=0x0000000000821529
- (_Bool)_parseDatabaseFromDictionary:(id)arg1 dataVersion:(long long *)arg2 collectionsByManufacturer:(id *)arg3 entriesByProductData:(id *)arg4;	// IMP=0x000000000081fcdf
- (void)_handleDataFromServer:(id)arg1;	// IMP=0x000000000081f77f
- (void)_handleServerResponse:(id)arg1 withData:(id)arg2 error:(id)arg3;	// IMP=0x000000000081f46c
- (void)_fetchDataFromServer;	// IMP=0x000000000081f005
- (void)_start;	// IMP=0x000000000081ef94
- (void)_loadDatabaseFromLocalFiles;	// IMP=0x000000000081ef2f
- (_Bool)_loadDatabaseFromFilePath:(id)arg1 fileDescription:(id)arg2;	// IMP=0x000000000081eea9
- (_Bool)_loadDatabaseFromFileURL:(id)arg1 fileDescription:(id)arg2;	// IMP=0x000000000081eb7e
- (_Bool)_loadDatabaseFromDictionary:(id)arg1;	// IMP=0x000000000081eac2
@property(readonly, nonatomic) NSURL *urlForBundledInternalPlist;
@property(readonly, nonatomic) NSURL *urlForBundledPlist;
- (_Bool)databaseContainsManufacturer:(id)arg1;	// IMP=0x000000000081e9a1
- (id)vendorModelEntryForProductData:(id)arg1;	// IMP=0x000000000081e7ba
- (id)vendorModelEntryForManufacturer:(id)arg1 model:(id)arg2;	// IMP=0x000000000081e6e8
- (id)modelCollectionForManufacturer:(id)arg1;	// IMP=0x000000000081e5f2
- (id)initWithDefaults;	// IMP=0x000000000081dfbe
- (id)initWithWorkQueue:(id)arg1 urlSession:(id)arg2 fetchTimer:(id)arg3;	// IMP=0x000000000081dee1
- (id)init;	// IMP=0x000000000081de39

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

