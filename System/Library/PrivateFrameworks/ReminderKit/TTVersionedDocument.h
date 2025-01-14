//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TTVersionedDocument : NSObject
{
    void *_documentArchive;	// 8 = 0x8
}

+ (unsigned int)versionedDocumentSerializationVersion;	// IMP=0x006000000011e856
+ (unsigned int)minimumSupportedVersion;	// IMP=0x006000000011e84e
+ (unsigned int)serializationVersion;	// IMP=0x006000000011e846
@property(nonatomic) void *documentArchive; // @synthesize documentArchive=_documentArchive;
- (void)saveToArchive:(void *)arg1;	// IMP=0x000000000011f785
- (id)serialize;	// IMP=0x000000000011f4bd
- (unsigned int)maxDocumentVersion;	// IMP=0x000000000011f3fa
- (unsigned long long)mergeWithVersionedDocument:(id)arg1;	// IMP=0x000000000011f33e
- (void)saveCurrentVersion:(void *)arg1;	// IMP=0x000000000011f20d
- (id)serializeCurrentVersion:(unsigned int *)arg1;	// IMP=0x000000000011f205
- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;	// IMP=0x000000000011f1ff
@property(readonly, nonatomic) unsigned long long futureVersionCount;
- (void)dealloc;	// IMP=0x000000000011f1b1
- (void)loadDocumentArchive:(void *)arg1;	// IMP=0x000000000011ec57
- (void)loadArchive:(const void *)arg1;	// IMP=0x000000000011eb9b
- (void)loadData:(id)arg1;	// IMP=0x000000000011e966
- (id)initWithArchive:(const void *)arg1;	// IMP=0x000000000011e8f2
- (id)initWithData:(id)arg1;	// IMP=0x000000000011e85e

@end

