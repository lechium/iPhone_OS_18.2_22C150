//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface CTXPCConvertCountryCodeToISORequest
{
}

- (int)requiredEntitlement;	// IMP=0x0000000000179f68
@property(readonly, nonatomic) NSString *mcc;
- (void)performRequestWithHandler:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000179d11
- (id)initWithMcc:(id)arg1;	// IMP=0x0000000000179c26

@end

