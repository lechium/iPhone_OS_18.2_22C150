//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSObject, NSURLRequest, SSMetricsPageEvent, SUUIClientContext;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SUUILoadProductPageOperation : NSOperation
{
    SUUIClientContext *_clientContext;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    long long _itemID;	// 24 = 0x18
    SSMetricsPageEvent *_metricsPageEvent;	// 32 = 0x20
    CDUnknownBlockType _outputBlock;	// 40 = 0x28
    NSURLRequest *_urlRequest;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001aa4f
- (void)main;	// IMP=0x000000000001a36b
@property(copy) CDUnknownBlockType outputBlock;
@property(readonly) SSMetricsPageEvent *metricsPageEvent;
- (id)initWithProductPageURLRequest:(id)arg1 clientContext:(id)arg2;	// IMP=0x0000000000019fc2
- (id)initWithItemIdentifier:(long long)arg1 clientContext:(id)arg2;	// IMP=0x0000000000019f58
- (id)_initSUUILoadProductPageOperation;	// IMP=0x0000000000019ef9

@end
