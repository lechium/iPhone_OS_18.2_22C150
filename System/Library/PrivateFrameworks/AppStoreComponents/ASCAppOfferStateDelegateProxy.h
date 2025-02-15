//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol ASCAppOfferStateDelegate;

__attribute__((visibility("hidden")))
@interface ASCAppOfferStateDelegateProxy : NSObject
{
    id <ASCAppOfferStateDelegate> _target;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000015353
@property(readonly, nonatomic) __weak id <ASCAppOfferStateDelegate> target; // @synthesize target=_target;
- (void)offer:(id)arg1 didChangeStatusText:(id)arg2;	// IMP=0x000000000001522a
- (void)offer:(id)arg1 didChangeState:(id)arg2 withMetadata:(id)arg3 flags:(long long)arg4;	// IMP=0x00000000000150d9
- (id)initWithTarget:(id)arg1;	// IMP=0x0000000000015075

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

