//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CertInfo/NSObject-Protocol.h>

@class NSArray, NSDate, NSString;

@protocol CertInfoTrustDescription <NSObject>
- (NSDate *)certificateExpirationDateAtIndex:(unsigned long long)arg1;
- (NSString *)certificateIssuerSummaryAtIndex:(unsigned long long)arg1;
- (NSString *)certificateSubjectSummaryAtIndex:(unsigned long long)arg1;
- (NSArray *)certificatePropertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)certificateCount;
- (NSArray *)summaryDescriptionItems;
- (_Bool)isRootCertificate;
- (_Bool)isTrusted;
- (NSString *)summarySubtitle;
- (NSString *)summaryTitle;
@end

