//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRMediaRemoteService, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRAVRoutingClientController : NSObject
{
    MRMediaRemoteService *_mediaRemoteService;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 24 = 0x18
    NSMutableDictionary *_pendingCompletionHandlersForCategories;	// 32 = 0x20
    NSMutableDictionary *_cachedRoutesForCategories;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001aa713
@property(readonly, nonatomic) MRMediaRemoteService *mediaRemoteService; // @synthesize mediaRemoteService=_mediaRemoteService;
- (void)_pickableRoutesDidChangeNotification:(id)arg1;	// IMP=0x00000000001aa5ca
- (void)fetchPickableRoutesForCategory:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a9f7c
- (void)dealloc;	// IMP=0x00000000001a9f07
- (id)initWithMediaRemoteService:(id)arg1;	// IMP=0x00000000001a9d1a
- (id)init;	// IMP=0x00000000001a9d06

@end
