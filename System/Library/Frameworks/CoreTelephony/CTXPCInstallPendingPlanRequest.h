//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CTXPCInstallPendingPlanRequest
{
}

+ (id)allowedClassesForArguments;	// IMP=0x0080000000058029
- (id)plan;	// IMP=0x00000000000580b7
- (int)requiredEntitlement;	// IMP=0x000000000005801e
- (void)performRequestWithHandler:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000057f05
- (id)initWithPlan:(id)arg1;	// IMP=0x0000000000057e1a

@end

