//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CTXPCGetRemotePlanManageAccountInfoRequest
{
}

+ (id)allowedClassesForArguments;	// IMP=0x0080000000060c05
- (id)remotePlanIccid;	// IMP=0x0000000000060c93
- (int)requiredEntitlement;	// IMP=0x0000000000060bfa
- (void)performRequestWithHandler:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000060a23
- (id)initWithIccid:(id)arg1;	// IMP=0x0000000000060938

@end

