//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IXSContainerRefreshManager : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x004000000006d2d3
- (void)refreshContainerTypes:(unsigned long long)arg1 forAppWithIdentity:(id)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x004000000006df1a
- (_Bool)_onQueue_refreshContainerTypes:(unsigned long long)arg1 forAppWithIdentity:(id)arg2 error:(id *)arg3;	// IMP=0x001000000006d67d
- (_Bool)_onQueue_terminateBundleID:(id)arg1 reason:(id)arg2 terminationAssertion:(id *)arg3 error:(id *)arg4;	// IMP=0x001000000006d328

@end

