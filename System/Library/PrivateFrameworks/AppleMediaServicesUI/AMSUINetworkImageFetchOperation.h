//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL, NSURLSession, NSURLSessionTask;

__attribute__((visibility("hidden")))
@interface AMSUINetworkImageFetchOperation
{
    NSURLSessionTask *_sessionTask;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    NSURLSession *_URLSession;	// 24 = 0x18
}

+ (id)keyPathsForValuesAffectingIsFinished;	// IMP=0x006000000005a822
+ (id)keyPathsForValuesAffectingIsExecuting;	// IMP=0x006000000005a794
- (void).cxx_destruct;	// IMP=0x000000000005af7d
@property(retain, nonatomic) NSURLSession *URLSession; // @synthesize URLSession=_URLSession;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSURLSessionTask *sessionTask; // @synthesize sessionTask=_sessionTask;
- (id)_eagerlyDecompressImage:(id)arg1;	// IMP=0x000000000005ae66
- (void)_didCompleteTaskWithData:(id)arg1 error:(id)arg2;	// IMP=0x000000000005acde
- (float)_sessionTaskPriorityForQueuePriority:(long long)arg1;	// IMP=0x000000000005acb3
- (void)cancel;	// IMP=0x000000000005ac46
- (void)start;	// IMP=0x000000000005a968
- (void)setQueuePriority:(long long)arg1;	// IMP=0x000000000005a8b1
- (_Bool)isFinished;	// IMP=0x000000000005a84e
- (_Bool)isExecuting;	// IMP=0x000000000005a7b8
- (_Bool)isAsynchronous;	// IMP=0x000000000005a78c
- (id)initWithURL:(id)arg1 URLSession:(id)arg2;	// IMP=0x000000000005a6ea

@end

