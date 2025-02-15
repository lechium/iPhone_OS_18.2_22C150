//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MCMCache;

__attribute__((visibility("hidden")))
@interface MCMClientIdentityCache : NSObject
{
    id <MCMCache> _cache;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000088eec
@property(readonly, nonatomic) id <MCMCache> cache; // @synthesize cache=_cache;
- (id)clientIdentityWithAuditToken:(CDStruct_4c969caf)arg1 proximateAuditToken:(CDStruct_4c969caf)arg2 personaUniqueString:(id)arg3 error:(id *)arg4 generator:(CDUnknownBlockType)arg5;	// IMP=0x0000000000088c2f
- (void)flush;	// IMP=0x0000000000088bc7
- (id)init;	// IMP=0x0000000000088b32

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

