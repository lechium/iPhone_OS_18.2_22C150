//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol GEOMapServiceTicket;

__attribute__((visibility("hidden")))
@interface _mkMapServiceWalletMerchantTicket : NSObject
{
    id <GEOMapServiceTicket> _ticket;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001fbdfa
- (void)cancel;	// IMP=0x00000000001fbdc8
- (void)submitWithCompletionQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001fbb23
- (id)initWithRequest:(id)arg1 traits:(id)arg2;	// IMP=0x00000000001fb1a6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

