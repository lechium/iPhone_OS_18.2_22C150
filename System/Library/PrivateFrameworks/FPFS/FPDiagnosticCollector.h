//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSURL;

__attribute__((visibility("hidden")))
@interface FPDiagnosticCollector : NSObject
{
    NSMutableDictionary *_diagnostic;	// 8 = 0x8
    int _fd;	// 16 = 0x10
    struct fsid _fsid;	// 20 = 0x14
    unsigned long long _ino;	// 32 = 0x20
    unsigned int _docid;	// 40 = 0x28
    NSURL *_parentURL;	// 48 = 0x30
    NSURL *_trashURL;	// 56 = 0x38
    unsigned long long _stepsNeeded;	// 64 = 0x40
}

+ (unsigned long long)getStringCharactersSet:(id)arg1;	// IMP=0x00600000000092b2
- (void).cxx_destruct;	// IMP=0x000000000000a596
@property(readonly, copy, nonatomic) NSDictionary *diagnostic; // @synthesize diagnostic=_diagnostic;
- (_Bool)_collectParentACLCountWithError:(id *)arg1;	// IMP=0x000000000000a419
- (_Bool)_tryReadFirstByteOfFileWithError:(id *)arg1;	// IMP=0x000000000000a36f
- (_Bool)_collectdocIDAttributesWithError:(id *)arg1;	// IMP=0x000000000000a321
- (_Bool)_collectMountAttributesWithError:(id *)arg1;	// IMP=0x000000000000a158
- (_Bool)_collectPurgeAttributesWithError:(id *)arg1;	// IMP=0x0000000000009f74
- (_Bool)_collectXattrAttributesWithError:(id *)arg1;	// IMP=0x0000000000009c14
- (_Bool)_collectFnameAttributesWithError:(id *)arg1;	// IMP=0x0000000000009549
- (_Bool)_collectInodeAttributesWithError:(id *)arg1;	// IMP=0x000000000000891c
- (_Bool)collectDiagnosticDiskAttributesWithError:(id *)arg1;	// IMP=0x0000000000008610
- (_Bool)_performStep:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000000008517
- (id)initWithFD:(int)arg1 trashURL:(id)arg2;	// IMP=0x000000000000847b

@end
