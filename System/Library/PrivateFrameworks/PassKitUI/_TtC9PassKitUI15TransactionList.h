//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9PassKitUI15TransactionList : NSObject
{
    MISSING_TYPE *_rows;	// 0 = 0x0
    MISSING_TYPE *_yearlyGroups;	// 0 = 0x0
    MISSING_TYPE *activeState;	// 0 = 0x0
    MISSING_TYPE *timer;	// 0 = 0x0
    MISSING_TYPE *transactionFetcher;	// 0 = 0x0
    MISSING_TYPE *iconGenerator;	// 0 = 0x0
    MISSING_TYPE *source;	// 2004049759 = 0x77735f5f
    MISSING_TYPE *account;	// 1885430623 = 0x7061635f
    MISSING_TYPE *_filter;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000438b30
- (id)init;	// IMP=0x0000000000438ad0
- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(CDStruct_3d581f42)arg2;	// IMP=0x00000000004384d0
- (void)transactionsChanged:(id)arg1;	// IMP=0x0000000000437870

@end
