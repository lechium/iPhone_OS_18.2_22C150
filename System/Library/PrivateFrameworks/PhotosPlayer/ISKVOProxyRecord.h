//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISKVOProxy;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ISKVOProxyRecord : NSObject
{
    ISKVOProxy *_proxy;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000d34a
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) ISKVOProxy *proxy; // @synthesize proxy=_proxy;
- (id)initWithProxy:(id)arg1 queue:(id)arg2;	// IMP=0x000000000000d29d

@end

