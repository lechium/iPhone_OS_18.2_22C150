//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIImageLoader.h"

@class NSURLRequest, NSURLSession, NSURLSessionTask;

__attribute__((visibility("hidden")))
@interface _UINSURLRequestImageLoader : _UIImageLoader
{
    NSURLRequest *_request;	// 48 = 0x30
    NSURLSession *_session;	// 56 = 0x38
    NSURLSessionTask *_task;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000a068e1
- (id)_error;	// IMP=0x0000000000a06871
- (_Bool)_really_cancel;	// IMP=0x0000000000a0683a
- (void)_really_loadImage:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a06385
- (id)initWithURLRequest:(id)arg1 session:(id)arg2;	// IMP=0x0000000000a062e3

@end
