//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaAnalysis/VCPMABaseTask.h>

@class NSObject;
@protocol OS_dispatch_group;

@interface MADPhotosFaceFastPassProcessingTask : VCPMABaseTask
{
    CDUnknownBlockType _progressHandler;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_downloadGroup;	// 16 = 0x10
}

+ (id)taskWithCancelBlock:(CDUnknownBlockType)arg1 progressHandler:(CDUnknownBlockType)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0040000000101612
- (void).cxx_destruct;	// IMP=0x0020000000101e78
- (_Bool)run:(id *)arg1;	// IMP=0x0010000000101dc4
- (int)_requestAssetResource:(id)arg1;	// IMP=0x00100000001016c2
- (id)initWithCancelBlock:(CDUnknownBlockType)arg1 progressHandler:(CDUnknownBlockType)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000010145e

@end

