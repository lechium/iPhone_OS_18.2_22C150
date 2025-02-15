//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSNumber, NSString, NSURL;

@interface MTRDownload : NSObject
{
    NSString *_fileDesignator;	// 8 = 0x8
    NSNumber *_fabricIndex;	// 16 = 0x10
    NSNumber *_nodeID;	// 24 = 0x18
    NSURL *_fileURL;	// 32 = 0x20
    NSFileHandle *_fileHandle;	// 40 = 0x28
    CDUnknownBlockType _abortHandler;	// 48 = 0x30
    CDUnknownBlockType _finalize;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000109082
@property(copy, nonatomic) CDUnknownBlockType finalize; // @synthesize finalize=_finalize;
@property(copy, nonatomic) CDUnknownBlockType abortHandler; // @synthesize abortHandler=_abortHandler;
@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic) NSNumber *nodeID; // @synthesize nodeID=_nodeID;
@property(retain, nonatomic) NSNumber *fabricIndex; // @synthesize fabricIndex=_fabricIndex;
@property(retain, nonatomic) NSString *fileDesignator; // @synthesize fileDesignator=_fileDesignator;
- (id)_toTypeString:(long long)arg1;	// IMP=0x0000000000108fad
- (id)_toNodeIDString:(id)arg1;	// IMP=0x0000000000108f33
- (id)_toFileDesignatorString:(long long)arg1 nodeID:(id)arg2;	// IMP=0x0000000000108e1e
- (id)_toFileURL:(long long)arg1 nodeID:(id)arg2;	// IMP=0x0000000000108be1
- (void)success;	// IMP=0x0000000000108bd0
- (void)failure:(id)arg1;	// IMP=0x0000000000108bbe
- (_Bool)matches:(id)arg1 fabricIndex:(id)arg2 nodeID:(id)arg3;	// IMP=0x0000000000108ae8
- (void)writeToFile:(id)arg1 error:(out id *)arg2;	// IMP=0x0000000000108a6a
- (void)deleteFile;	// IMP=0x00000000001088c3
- (void)createFile:(id *)arg1;	// IMP=0x000000000010872b
- (void)checkInteractionModelResponse:(id)arg1 error:(id)arg2;	// IMP=0x0000000000108440
- (id)initWithType:(long long)arg1 fabricIndex:(id)arg2 nodeID:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5 done:(CDUnknownBlockType)arg6;	// IMP=0x0000000000107f92

@end

