//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RunningBoardServices/RBSCPUMaximumUsageLimitation.h>

@interface RBSCPUMaximumUsageLimitation (RBProcessState)
- (_Bool)allowedWithAttribute:(id)arg1 error:(id *)arg2;	// IMP=0x006000000004d9ac
- (_Bool)isValidForContext:(id)arg1 withError:(id *)arg2;	// IMP=0x006000000004d993
- (void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x006000000004d873
- (void)applyToAssertionTransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x006000000004d7d7
@end

