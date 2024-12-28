//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;

@interface VCPFullAnalysisURLProcessingTask : NSObject
{
    struct atomic<bool> _cancel;	// 8 = 0x8
    _Bool _noResultStrip;	// 9 = 0x9
    NSURL *_assetURL;	// 16 = 0x10
    NSURL *_pairedAssetURL;	// 24 = 0x18
    unsigned long long _analysisTypes;	// 32 = 0x20
    NSDictionary *_options;	// 40 = 0x28
    CDUnknownBlockType _progressHandler;	// 48 = 0x30
    CDUnknownBlockType _completionHandler;	// 56 = 0x38
    NSDictionary *_partialAnalysis;	// 64 = 0x40
}

+ (id)taskForURLAsset:(id)arg1 withOptions:(id)arg2 analysisTypes:(unsigned long long)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000295166
- (void).cxx_destruct;	// IMP=0x0000000000295f37
@property(retain, nonatomic) NSDictionary *partialAnalysis; // @synthesize partialAnalysis=_partialAnalysis;
- (int)runWithCancelBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002952c8
- (int)run;	// IMP=0x0000000000295265
- (void)cancel;	// IMP=0x000000000029525a
- (_Bool)autoCancellable;	// IMP=0x000000000029524c
- (float)resourceRequirement;	// IMP=0x000000000029523e
- (id)initWithURLAsset:(id)arg1 withOptions:(id)arg2 analysisTypes:(unsigned long long)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000294f66

@end
