//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface VCPDatabaseReader : NSObject
{
    NSObject<OS_dispatch_queue> *_sqlSerialQueue;	// 8 = 0x8
    NSString *_filepath;	// 16 = 0x10
    struct sqlite3 *_database;	// 24 = 0x18
}

+ (id)databaseWithURL:(id)arg1;	// IMP=0x0060000000172e26
+ (id)databaseForPhotoLibraryURL:(id)arg1;	// IMP=0x0060000000172dc1
+ (id)databaseForPhotoLibrary:(id)arg1;	// IMP=0x0060000000172d5c
+ (_Bool)shouldQueryInternalFields;	// IMP=0x00600000001729f5
- (void).cxx_destruct;	// IMP=0x000000000017bc37
- (int)queryProgressHistoryRecords:(id *)arg1 sinceDate:(id)arg2;	// IMP=0x000000000017b627
- (int)querySchedulingHistoryRecords:(id *)arg1 startDate:(id)arg2 endDate:(id)arg3;	// IMP=0x000000000017af12
- (int)querySchedulingHistoryRecords:(id *)arg1 forActivityID:(unsigned long long)arg2 startDate:(id)arg3 endDate:(id)arg4;	// IMP=0x000000000017a7a7
- (id)loadKeyValues;	// IMP=0x000000000017a30d
- (long long)valueForKey:(id)arg1;	// IMP=0x000000000017a125
- (int)_queryValue:(long long *)arg1 forKey:(id)arg2;	// IMP=0x0000000000179e0f
- (unsigned long long)countForTaskID:(unsigned long long)arg1 withProcessingStatus:(unsigned long long)arg2;	// IMP=0x0000000000179b05
- (id)queryLocalIdentifiersForTaskID:(unsigned long long)arg1 withStatus:(unsigned long long)arg2;	// IMP=0x0000000000179666
- (id)queryFailedProcessingStatusFromAssets:(id)arg1 forTaskID:(unsigned long long)arg2;	// IMP=0x0000000000178be7
- (id)queryAssetsAnalyzedSince:(id)arg1;	// IMP=0x0000000000178623
- (id)queryAnalysesForAssets:(id)arg1 withTypes:(id)arg2;	// IMP=0x0000000000177df3
- (id)queryAnalysisForAsset:(id)arg1 withTypes:(id)arg2;	// IMP=0x0000000000177982
- (id)queryAnalysisPropertiesForAssets:(id)arg1;	// IMP=0x00000000001771a1
- (id)queryAnalysisPropertiesForAsset:(id)arg1;	// IMP=0x0000000000176e7b
- (id)queryAnalysisForAsset:(id)arg1;	// IMP=0x0000000000176b1c
- (id)queryBlacklistedLocalIdentifiers;	// IMP=0x00000000001766d7
- (id)blacklistedLocalIdentifiersFromAssets:(id)arg1;	// IMP=0x0000000000175ed3
- (_Bool)isAssetBlacklisted:(id)arg1 blacklistDate:(id *)arg2;	// IMP=0x0000000000175a67
- (int)executeDatabaseBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001757b9
- (int)queryResultsForAssets:(id)arg1 withTypes:(id)arg2 batchResults:(id)arg3;	// IMP=0x0000000000174ec2
- (int)queryHeadersForAssets:(id)arg1 analyses:(id)arg2 idMap:(id)arg3;	// IMP=0x000000000017481c
- (int)queryResultsForAssetId:(long long)arg1 withTypes:(id)arg2 analysis:(id)arg3;	// IMP=0x0000000000174231
- (int)queryResultsForAssetId:(long long)arg1 analysis:(id)arg2;	// IMP=0x0000000000173f46
- (int)queryHeaderForAsset:(id)arg1 analysis:(id *)arg2 assetId:(long long *)arg3;	// IMP=0x0000000000173bac
- (int)parseResults:(struct sqlite3_stmt *)arg1 typeColumn:(int)arg2 dataColumn:(int)arg3 results:(id)arg4;	// IMP=0x00000000001738a7
- (int)parseHeader:(struct sqlite3_stmt *)arg1 startColumn:(int)arg2 analysis:(id)arg3;	// IMP=0x000000000017336d
- (void)closeDatabase;	// IMP=0x000000000017334c
- (int)openDatabase;	// IMP=0x0000000000172f7f
- (id)databaseDirectoryPath;	// IMP=0x0000000000172f69
- (_Bool)exists;	// IMP=0x0000000000172efa
- (void)dealloc;	// IMP=0x0000000000172e8b
- (id)initWithDatabaseURL:(id)arg1;	// IMP=0x0000000000172c91
- (id)initWithPhotoLibraryURL:(id)arg1;	// IMP=0x0000000000172b06
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x00000000001729fd

@end

