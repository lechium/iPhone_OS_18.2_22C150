//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FPDMoveWriter, NSFileManager;
@protocol FPActionLocatorAccess;

__attribute__((visibility("hidden")))
@interface FPDMoveWriterToDisk : NSObject
{
    FPDMoveWriter *_writer;	// 8 = 0x8
    NSFileManager *_fileManager;	// 16 = 0x10
    id <FPActionLocatorAccess> _stopAccessingToken;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003363a
- (void)performCreateFolder:(id)arg1 inside:(id)arg2 as:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000003296b
- (void)performMoveOfFolder:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 atomically:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0000000000032935
- (void)performMoveOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000000327ca
- (void)_performMoveOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 bounceNumber:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0000000000030a7b
- (void)_resolveLocator:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000030920
- (void)performCopyOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000000307b5
- (void)_performCopyOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 bounceNumber:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x000000000002ee32
- (void)_touchModificationDateForURL:(id)arg1;	// IMP=0x000000000002ec1e
- (void)_respectLastUsageDatePolicyForDestinationURL:(id)arg1 withSource:(id)arg2;	// IMP=0x000000000002eabf
- (void)dealloc;	// IMP=0x000000000002ea7d
- (id)initWithWriter:(id)arg1;	// IMP=0x000000000002e978

@end
