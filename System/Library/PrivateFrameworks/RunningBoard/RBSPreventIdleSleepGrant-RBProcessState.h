//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RunningBoardServices/RBSPreventIdleSleepGrant.h>

@interface RBSPreventIdleSleepGrant (RBProcessState)
- (_Bool)isValidForContext:(id)arg1 withError:(id *)arg2;	// IMP=0x007000000000a0e0
- (void)applyToSystemState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x0070000000009fc0
- (void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x0070000000009ea0
@end

