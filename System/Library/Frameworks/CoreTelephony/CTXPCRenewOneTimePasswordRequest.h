//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CTXPCRenewOneTimePasswordRequest
{
}

+ (id)allowedClassesForArguments;	// IMP=0x0080000000055a29
- (id)sourceIccid;	// IMP=0x0000000000055ab7
- (int)requiredEntitlement;	// IMP=0x0000000000055a1e
- (void)performRequestWithHandler:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000055905
- (id)initWithSourceIccid:(id)arg1;	// IMP=0x000000000005581a

@end
