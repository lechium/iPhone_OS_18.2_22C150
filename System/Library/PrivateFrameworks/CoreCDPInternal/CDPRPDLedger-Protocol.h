//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreCDPInternal/NSObject-Protocol.h>

@class NSError;

@protocol CDPRPDLedger <NSObject>
@property(readonly, nonatomic) NSError *edpRPDBlockingError;
@property(readonly, nonatomic) _Bool canOfferEDPRPD;
@property(readonly, nonatomic) unsigned long long escapeOffersPresented;
@property(readonly, nonatomic) NSError *manateeRPDBlockingError;
@property(readonly, nonatomic) NSError *rpdBlockingError;
@property(readonly, nonatomic) _Bool canOfferRPD;
- (void)satisfyManateeRequirementsForEDPRPD;
- (void)insert:(unsigned long long)arg1;
@end
