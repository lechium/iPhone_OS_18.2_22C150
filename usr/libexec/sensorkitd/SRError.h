//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface SRError : NSObject
{
}

+ (id)invalidInfoPlistErrorWithMissingKey:(id)arg1 code:(long long)arg2;	// IMP=0x0040000000033730
+ (id)authorizationError;	// IMP=0x0010000000033710
+ (MISSING_TYPE *)authorizationErrorWithStatus: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000033630
+ (id)invalidEntitlementError;	// IMP=0x0010000000033610
+ (id)connectionNotFoundError;	// IMP=0x00100000000335f0
+ (id)errorWithCode:(long long)arg1 description:(id)arg2 recoverySuggestion:(id)arg3 underlyingError:(id)arg4;	// IMP=0x0010000000033520
+ (id)errorWithCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x0010000000033450
+ (id)errorWithCode:(long long)arg1 description:(id)arg2 recoverySuggestion:(id)arg3;	// IMP=0x0010000000033430
+ (id)errorWithCode:(long long)arg1;	// IMP=0x0010000000032fe0

@end

