//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/JSExport-Protocol.h>

@class IKJSRestrictions, NSString;

@protocol IKJSDeviceSettings <JSExport>
@property(readonly, nonatomic) IKJSRestrictions *restrictions;
@property(readonly, retain, nonatomic) NSString *storefrontCountryCode;
@property(readonly, retain, nonatomic) NSString *language;
@end

