//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface CSDParticipantUpdateSanitizerImpl : NSObject
{
    MISSING_TYPE *completionQueue;	// 8 = 0x8
    MISSING_TYPE *vouchingEnablement;	// 16 = 0x10
    MISSING_TYPE *voucherManager;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0040000000353f1b
- (id)init;	// IMP=0x0010000000353ee5
- (void)sanitize:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000353e53
- (id)initWithVoucherManager:(id)arg1;	// IMP=0x0010000000350f7d

@end
