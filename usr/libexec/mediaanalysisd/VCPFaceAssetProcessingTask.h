//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface VCPFaceAssetProcessingTask
{
    CDUnknownBlockType _progressHandler;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    NSArray *_assets;	// 24 = 0x18
}

+ (id)taskWithAssets:(id)arg1 andProgressHandler:(CDUnknownBlockType)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00400000001020f0
- (void).cxx_destruct;	// IMP=0x0020000000102921
- (int)run;	// IMP=0x0010000000102775
- (int)main;	// IMP=0x00100000001021a8
- (id)initWithAssets:(id)arg1 andProgressHandler:(CDUnknownBlockType)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000101ea9

@end
