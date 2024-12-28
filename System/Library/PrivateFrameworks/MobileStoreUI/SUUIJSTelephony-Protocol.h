//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileStoreUI/JSExport-Protocol.h>

@class NSString;

@protocol SUUIJSTelephony <JSExport>
@property(readonly, nonatomic) NSString *providerName;
@property(readonly, nonatomic) NSString *phoneNumber;
@property(readonly, nonatomic) NSString *operatorName;
@property(readonly, nonatomic) NSString *mobileNetworkCode;
@property(readonly, nonatomic) NSString *mobileCountryCode;
@property(readonly, nonatomic) NSString *countryCode;
@property(readonly, nonatomic, getter=isCellularRoaming) _Bool cellularRoaming;
- (void)sendSMSWithBodyText:(NSString *)arg1:(NSString *)arg2:(NSString *)arg3;
- (NSString *)formattedPhoneNumber:(NSString *)arg1;
- (void)beginObserving;
@end
