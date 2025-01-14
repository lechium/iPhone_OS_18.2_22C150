//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSURL;

@interface VCPRequestRebuildPersonsTask : NSObject
{
    struct atomic<bool> _started;	// 8 = 0x8
    struct atomic<bool> _cancel;	// 9 = 0x9
    NSArray *_personLocalIdentifiers;	// 16 = 0x10
    NSURL *_photoLibraryURL;	// 24 = 0x18
    CDUnknownBlockType _progressHandler;	// 32 = 0x20
    CDUnknownBlockType _reply;	// 40 = 0x28
    CDUnknownBlockType _cancelBlock;	// 48 = 0x30
}

+ (id)taskWithLocalIdentifiers:(id)arg1 andPhotoLibraryURL:(id)arg2 andProgressHandler:(CDUnknownBlockType)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x00200000001719fd
- (void).cxx_destruct;	// IMP=0x0000000000172069
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (_Bool)autoCancellable;	// IMP=0x0010000000172048
- (int)run;	// IMP=0x0010000000171cd9
- (_Bool)isCanceled;	// IMP=0x0010000000171cba
- (void)cancel;	// IMP=0x0010000000171caf
- (float)resourceRequirement;	// IMP=0x0010000000171ca1
- (void)dealloc;	// IMP=0x0010000000171ac8
- (id)initWithLocalIdentifiers:(id)arg1 andPhotoLibraryURL:(id)arg2 andProgressHandler:(CDUnknownBlockType)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000171915

@end

