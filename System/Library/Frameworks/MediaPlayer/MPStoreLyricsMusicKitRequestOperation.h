//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPAsyncOperation.h"

@class NSObject, NSOperationQueue;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPStoreLyricsMusicKitRequestOperation : MPAsyncOperation
{
    NSOperationQueue *_operationQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_accessQueue;	// 16 = 0x10
    long long _songAdamID;	// 24 = 0x18
    CDUnknownBlockType _responseHandler;	// 32 = 0x20
}

+ (id)_lyricsURLForURLBag:(id)arg1 identifier:(long long)arg2;	// IMP=0x0060000000355f26
+ (_Bool)supportsLyricsForURLBag:(id)arg1;	// IMP=0x0060000000355ef1
- (void).cxx_destruct;	// IMP=0x000000000035532e
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(nonatomic) long long songAdamID; // @synthesize songAdamID=_songAdamID;
- (void)_enqueueOperationWithURL:(id)arg1;	// IMP=0x00000000003550cb
- (void)finishWithError:(id)arg1;	// IMP=0x000000000035501a
- (void)cancel;	// IMP=0x0000000000354e40
- (void)execute;	// IMP=0x0000000000354c4c
- (id)init;	// IMP=0x0000000000354bed

@end

