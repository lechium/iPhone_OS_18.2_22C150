//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableData, NSNumber, NSSet, NSString, StreamingFileWriter;

__attribute__((visibility("hidden")))
@interface StreamingUnzipState : NSObject
{
    CDStruct_4686af4b _cmpState;	// 8 = 0x8
    unsigned long long _lastResumptionSavedOffset;	// 48 = 0x30
    unsigned long long _hashedChunkSize;	// 56 = 0x38
    unsigned long long _bytesHashedInChunk;	// 64 = 0x40
    unsigned long long _uncompressedBytesOutput;	// 72 = 0x48
    unsigned long long _totalFileSizeWritten;	// 80 = 0x50
    NSString *_unzipPath;	// 88 = 0x58
    NSArray *_hashes;	// 96 = 0x60
    NSNumber *_overrideUID;	// 104 = 0x68
    NSNumber *_overrideGID;	// 112 = 0x70
    unsigned long long _currentLFRecordAllocationSize;	// 120 = 0x78
    CDStruct_6e7ce3cd _hashContext;	// 128 = 0x80
    NSDictionary *_streamInfoDict;	// 344 = 0x158
    NSString *_lastChunkPartialHash;	// 352 = 0x160
    NSMutableData *_unsureData;	// 360 = 0x168
    NSMutableData *_inMemoryFileData;	// 368 = 0x170
    CDStruct_6e051504 *_currentLFRecord;	// 376 = 0x178
    CDStruct_1e765437 *_dataDescriptor;	// 384 = 0x180
    StreamingFileWriter *_fileWriter;	// 392 = 0x188
    unsigned long long _thisStageBytesComplete;	// 400 = 0x190
    unsigned long long _currentOffset;	// 408 = 0x198
    unsigned long long _recordsProcessed;	// 416 = 0x1a0
    unsigned long long _totalRecordCount;	// 424 = 0x1a8
    unsigned long long _totalUncompressedBytes;	// 432 = 0x1b0
    unsigned long long _currentCRC32;	// 440 = 0x1b8
    unsigned short _currentLFMode;	// 448 = 0x1c0
    unsigned char _streamState;	// 450 = 0x1c2
    _Bool _storeCurrentFileInMemory;	// 451 = 0x1c3
    _Bool _currentLFRequiresDataDescriptor;	// 452 = 0x1c4
    _Bool _denyInvalidSymlinks;	// 453 = 0x1c5
    _Bool _performCachedWrites;	// 454 = 0x1c6
    _Bool _performingExtraction;	// 455 = 0x1c7
    NSSet *_cachedGIDs;	// 456 = 0x1c8
}

+ (id)unzipStateWithPath:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x006000000002517d
- (void).cxx_destruct;	// IMP=0x0000000000024ba1
@property(readonly, nonatomic) NSSet *cachedGIDs; // @synthesize cachedGIDs=_cachedGIDs;
@property(retain, nonatomic) StreamingFileWriter *fileWriter; // @synthesize fileWriter=_fileWriter;
@property(readonly, nonatomic) NSNumber *overrideGID; // @synthesize overrideGID=_overrideGID;
@property(readonly, nonatomic) NSNumber *overrideUID; // @synthesize overrideUID=_overrideUID;
@property(nonatomic) _Bool performingExtraction; // @synthesize performingExtraction=_performingExtraction;
@property(nonatomic) _Bool performCachedWrites; // @synthesize performCachedWrites=_performCachedWrites;
@property(nonatomic) _Bool denyInvalidSymlinks; // @synthesize denyInvalidSymlinks=_denyInvalidSymlinks;
@property(nonatomic) CDStruct_1e765437 *dataDescriptor; // @synthesize dataDescriptor=_dataDescriptor;
@property(nonatomic) unsigned long long totalFileSizeWritten; // @synthesize totalFileSizeWritten=_totalFileSizeWritten;
@property(nonatomic) unsigned long long uncompressedBytesOutput; // @synthesize uncompressedBytesOutput=_uncompressedBytesOutput;
@property(readonly, nonatomic) unsigned long long hashedChunkSize; // @synthesize hashedChunkSize=_hashedChunkSize;
@property(readonly, nonatomic) unsigned long long bytesHashedInChunk; // @synthesize bytesHashedInChunk=_bytesHashedInChunk;
@property(nonatomic) _Bool currentLFRequiresDataDescriptor; // @synthesize currentLFRequiresDataDescriptor=_currentLFRequiresDataDescriptor;
@property(nonatomic) _Bool storeCurrentFileInMemory; // @synthesize storeCurrentFileInMemory=_storeCurrentFileInMemory;
@property(nonatomic) unsigned char streamState; // @synthesize streamState=_streamState;
@property(nonatomic) unsigned short currentLFMode; // @synthesize currentLFMode=_currentLFMode;
@property(nonatomic) unsigned long long totalUncompressedBytes; // @synthesize totalUncompressedBytes=_totalUncompressedBytes;
@property(nonatomic) unsigned long long totalRecordCount; // @synthesize totalRecordCount=_totalRecordCount;
@property(nonatomic) unsigned long long recordsProcessed; // @synthesize recordsProcessed=_recordsProcessed;
@property(nonatomic) unsigned long long currentCRC32; // @synthesize currentCRC32=_currentCRC32;
@property(nonatomic) unsigned long long currentOffset; // @synthesize currentOffset=_currentOffset;
@property(nonatomic) unsigned long long thisStageBytesComplete; // @synthesize thisStageBytesComplete=_thisStageBytesComplete;
@property(nonatomic) unsigned long long currentLFRecordAllocationSize; // @synthesize currentLFRecordAllocationSize=_currentLFRecordAllocationSize;
@property(nonatomic) CDStruct_6e051504 *currentLFRecord; // @synthesize currentLFRecord=_currentLFRecord;
@property(retain, nonatomic) NSMutableData *inMemoryFileData; // @synthesize inMemoryFileData=_inMemoryFileData;
@property(retain, nonatomic) NSMutableData *unsureData; // @synthesize unsureData=_unsureData;
@property(retain, nonatomic) NSString *lastChunkPartialHash; // @synthesize lastChunkPartialHash=_lastChunkPartialHash;
@property(retain, nonatomic) NSDictionary *streamInfoDict; // @synthesize streamInfoDict=_streamInfoDict;
@property(readonly, nonatomic) CDStruct_6e7ce3cd hashContext; // @synthesize hashContext=_hashContext;
@property(readonly, nonatomic) NSString *unzipPath; // @synthesize unzipPath=_unzipPath;
- (_Bool)resolveOwnershipWithExtraField:(CDStruct_388cbe1a *)arg1 outUID:(unsigned int *)arg2 outGID:(unsigned int *)arg3;	// IMP=0x0000000000024704
- (id)finishStream;	// IMP=0x00000000000245fa
- (id)updateHashFromOffset:(unsigned long long)arg1 withBytes:(const void *)arg2 length:(unsigned long long)arg3;	// IMP=0x00000000000245e5
- (id)updateHashFromOffset:(unsigned long long)arg1 withBytes:(const void *)arg2 length:(unsigned long long)arg3 onlyFinishCurrentChunk:(_Bool)arg4;	// IMP=0x0000000000024391
- (id)checkLastChunkPartialHash;	// IMP=0x0000000000024110
- (id)serializeState;	// IMP=0x0000000000023302
- (void)markResumptionPoint;	// IMP=0x00000000000232fc
- (void)clearSavedState;	// IMP=0x0000000000023204
- (void)_internalSetStreamState:(unsigned char)arg1;	// IMP=0x0000000000022e5e
@property(readonly, nonatomic) CDStruct_4686af4b *cmpState;
- (void)dealloc;	// IMP=0x0000000000022dd1
- (id)init;	// IMP=0x0000000000022dae

@end
