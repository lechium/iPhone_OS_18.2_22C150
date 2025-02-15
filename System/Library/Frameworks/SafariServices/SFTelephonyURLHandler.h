//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface SFTelephonyURLHandler : NSObject
{
    NSMutableSet *_pendingRequests;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x006000000016b88f
- (void).cxx_destruct;	// IMP=0x000000000016bf90
@property(retain, nonatomic) NSMutableSet *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
- (void)removeObserverForRequest:(id)arg1;	// IMP=0x000000000016be8e
- (void)addObserverForRequest:(id)arg1;	// IMP=0x000000000016badb
- (_Bool)openURLForDialRequest:(id)arg1 withScene:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000016b93a
- (id)init;	// IMP=0x000000000016b8e4

@end

