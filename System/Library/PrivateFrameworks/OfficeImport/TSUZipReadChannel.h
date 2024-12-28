//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TSUZipArchive, TSUZipEntry;
@protocol TSUReadChannel;

__attribute__((visibility("hidden")))
@interface TSUZipReadChannel : NSObject
{
    TSUZipEntry *_entry;	// 8 = 0x8
    TSUZipArchive *_archive;	// 16 = 0x10
    _Bool _validateCRC;	// 24 = 0x18
    id <TSUReadChannel> _archiveReadChannel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002c182a
@property(readonly, nonatomic) _Bool isValid;
- (void)addBarrier:(CDUnknownBlockType)arg1;	// IMP=0x00000000002c1714
- (void)setLowWater:(unsigned long long)arg1;	// IMP=0x00000000002c1576
- (void)close;	// IMP=0x00000000002c1521
- (void)handleFailureWithHandler:(CDUnknownBlockType)arg1 error:(id)arg2;	// IMP=0x00000000002c148c
- (_Bool)processData:(id)arg1 CRC:(unsigned int *)arg2 isDone:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002c1252
- (void)readWithFileHeaderLength:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002c0fbb
- (_Bool)readFileHeaderFromData:(id)arg1 headerLength:(unsigned long long *)arg2;	// IMP=0x00000000002c0d9c
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002c0ae1
- (void)readWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002c0543
- (void)dealloc;	// IMP=0x00000000002c0505
- (id)initWithEntry:(id)arg1 archive:(id)arg2 validateCRC:(_Bool)arg3;	// IMP=0x00000000002c038a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
