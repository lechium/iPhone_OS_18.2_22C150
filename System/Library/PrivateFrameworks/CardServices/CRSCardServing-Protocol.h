//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CardServices/CRSServing-Protocol.h>

@protocol CRSCardRequesting;

@protocol CRSCardServing <CRSServing>
- (void)requestCard:(id <CRSCardRequesting>)arg1 reply:(void (^)(id <CRCard>, NSError *))arg2;
- (unsigned long long)servicePriorityForRequest:(id <CRSCardRequesting>)arg1;
- (_Bool)canSatisfyCardRequest:(id <CRSCardRequesting>)arg1;
@end

