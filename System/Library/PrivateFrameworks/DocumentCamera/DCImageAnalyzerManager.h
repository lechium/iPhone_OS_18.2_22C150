//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, VKCImageAnalyzer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface DCImageAnalyzerManager : NSObject
{
    VKCImageAnalyzer *_imageAnalyzer;	// 8 = 0x8
    NSCache *_cachedAnalyses;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_operationQueue;	// 24 = 0x18
}

+ (_Bool)isImageAnalysisEnabled;	// IMP=0x006000000001e212
+ (id)sharedInstance;	// IMP=0x006000000001e1bd
- (void).cxx_destruct;	// IMP=0x000000000001ea41
- (void)analysisForImage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001e361
- (void)cleanup;	// IMP=0x000000000001e22a
- (id)init;	// IMP=0x000000000001e05b

@end

