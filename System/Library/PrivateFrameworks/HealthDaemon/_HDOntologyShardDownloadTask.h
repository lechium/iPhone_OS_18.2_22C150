//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDOntologyShardDownloader, HKOntologyShardRegistryEntry, NSError, NSString, NSURLSession;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface _HDOntologyShardDownloadTask : NSObject
{
    HKOntologyShardRegistryEntry *_entry;	// 8 = 0x8
    HDOntologyShardDownloader *_downloader;	// 16 = 0x10
    NSURLSession *_session;	// 24 = 0x18
    NSObject<OS_dispatch_group> *_group;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000003e551f
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
- (_Bool)_handleResponse:(id)arg1 task:(id)arg2;	// IMP=0x00000000003e5348
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x00000000003e51f6
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;	// IMP=0x00000000003e4ec1
- (void)resume;	// IMP=0x00000000003e4e03
- (id)initForEntry:(id)arg1 downloader:(id)arg2 session:(id)arg3 group:(id)arg4;	// IMP=0x00000000003e4d05
- (id)init;	// IMP=0x00000000003e4c8b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
