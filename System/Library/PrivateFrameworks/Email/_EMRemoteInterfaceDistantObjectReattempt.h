//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSInvocation;

__attribute__((visibility("hidden")))
@interface _EMRemoteInterfaceDistantObjectReattempt : NSObject
{
    NSInvocation *_invocation;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
}

+ (id)recordedAttemptWithOriginalInvocation:(id)arg1 target:(id)arg2 error:(id)arg3;	// IMP=0x00600000000b3686
- (void).cxx_destruct;	// IMP=0x00000000000b3a13
@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) NSInvocation *invocation; // @synthesize invocation=_invocation;
- (void)perform;	// IMP=0x00000000000b3890
- (id)debugDescription;	// IMP=0x00000000000b3842
- (id)initWithOriginalInvocation:(id)arg1 target:(id)arg2 error:(id)arg3;	// IMP=0x00000000000b3736

@end

