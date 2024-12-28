//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFHomeKitItemProtocol-Protocol.h>
#import <Home/HFHomeVendor-Protocol.h>
#import <Home/HFNamingComponentCreating-Protocol.h>
#import <Home/HFServiceVendor-Protocol.h>
#import <Home/NSCopying-Protocol.h>

@protocol HFCharacteristicValueSource;

@protocol HFServiceLikeItem <HFHomeKitItemProtocol, HFHomeVendor, HFServiceVendor, NSCopying, HFNamingComponentCreating>
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource;
- (id)copyWithValueSource:(id <HFCharacteristicValueSource>)arg1;
@end
