//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PUAdjustmentsDataSource;

__attribute__((visibility("hidden")))
@interface PUAutoEnhanceAdjustmentCustomBehavior : NSObject
{
    PUAdjustmentsDataSource *_dataSource;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001c4871
@property(nonatomic) __weak PUAdjustmentsDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)dataSource:(id)arg1 adjustmentInfo:(id)arg2 setEnabled:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001c4506

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

