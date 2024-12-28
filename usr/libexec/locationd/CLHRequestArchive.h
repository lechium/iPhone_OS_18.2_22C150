//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSString;

@interface CLHRequestArchive : NSObject
{
    NSString *_directory;	// 8 = 0x8
    unsigned int _requestCode;	// 16 = 0x10
    double _rotationInterval;	// 24 = 0x18
    double _lastRotationTime;	// 32 = 0x20
    unsigned long long _count;	// 40 = 0x28
    unsigned long long _totalCount;	// 48 = 0x30
    NSString *_secondaryPath;	// 56 = 0x38
    NSFileHandle *_secondaryFileHandle;	// 64 = 0x40
}

- (void);	// IMP=0x0020000000f637f4
@property(nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(retain, nonatomic) NSFileHandle *secondaryFileHandle; // @synthesize secondaryFileHandle=_secondaryFileHandle;
@property(retain, nonatomic) NSString *secondaryPath; // @synthesize secondaryPath=_secondaryPath;
@property(readonly) unsigned int requestCode; // @synthesize requestCode=_requestCode;
@property(nonatomic) double rotationInterval; // @synthesize rotationInterval=_rotationInterval;
- (id)jsonObject;	// IMP=0x0010000000f636f6
- (void)eraseAllData;	// IMP=0x0010000000f635d7
- (unsigned long long)totalSecondaryPointsUnderAllSubArchives;	// IMP=0x0010000000f63297
- (id)secondaryFileURLs;	// IMP=0x0010000000f6312c
- (id)pathForSecondaryData;	// IMP=0x0010000000f630fd
- (id)pathForPrimaryData;	// IMP=0x0010000000f630e0
- (void)updateCount;	// IMP=0x0010000000f62fa8
- (id)inactiveSubArchives;	// IMP=0x0010000000f62b48
- (_Bool)isActiveSubArchive;	// IMP=0x0010000000f62b0a
- (_Bool)deleteSubArchiveIfInactive:(id)arg1;	// IMP=0x0010000000f62742
- (void)iterateSubArchivesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000f625a3
- (void)generateNewSubArchive;	// IMP=0x0010000000f62175
- (void)iterateSecondaryData:(id)arg1 forField:(unsigned int)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000f62083
- (id)pruneAndGetSecondaryDataOlderThan:(double)arg1;	// IMP=0x0010000000f61e71
- (void)pruneSecondaryDataOlderThan:(double)arg1;	// IMP=0x0010000000f61cdc
- (id)mappedSecondaryData;	// IMP=0x0010000000f61b55
- (id)mappedSecondaryDataByDestructivelyCombiningAllSecondaryData;	// IMP=0x0010000000f619a6
- (void)writeSecondaryData:(id)arg1 toField:(unsigned int)arg2;	// IMP=0x0010000000f61743
- (void)writeSecondaryObject:(id)arg1 toField:(unsigned int)arg2;	// IMP=0x0010000000f61702
- (void)incrementCountBy:(unsigned long long)arg1;	// IMP=0x0010000000f6143d
- (_Bool)primaryDataExists;	// IMP=0x0010000000f613ec
- (id)mappedPrimaryData;	// IMP=0x0010000000f613d0
- (void)overwritePrimaryObject:(id)arg1;	// IMP=0x0010000000f6139c
- (void)overwritePrimaryData:(id)arg1;	// IMP=0x0010000000f60bd3
- (id)mappedDataByDestructivelyCombiningPrimaryAndSecondaryData;	// IMP=0x0010000000f6058c
- (unsigned int)secondaryDataSize;	// IMP=0x0010000000f603fc
- (unsigned int)primaryDataSize;	// IMP=0x0010000000f6038a
@property(readonly) unsigned long long fileCount;
@property(readonly) NSString *directory;
- (unsigned long long)totalCountIncludingAllSubArchives;	// IMP=0x0010000000f60330
@property(readonly) unsigned long long count; // @synthesize count=_count;
- (void)rotateSecondaryFile;	// IMP=0x0010000000f6014d
- (void)dealloc;	// IMP=0x0010000000f60099
- (id)initWithDirectory:(id)arg1 requestCode:(int)arg2 itemCountThresholdForAutoCleanUp:(int)arg3;	// IMP=0x0010000000f5f599
- (id)initWithDirectory:(id)arg1 itemCountThresholdForAutoCleanUp:(int)arg2;	// IMP=0x0010000000f5f582
- (id)initWithDirectory:(id)arg1 requestCode:(int)arg2;	// IMP=0x0010000000f5f56a
- (id)initWithDirectory:(id)arg1;	// IMP=0x0010000000f5f550
- (id)init;	// IMP=0x0010000000f5f525
- (void)setCount:(unsigned long long)arg1;	// IMP=0x0010000000f5f2f5

@end
