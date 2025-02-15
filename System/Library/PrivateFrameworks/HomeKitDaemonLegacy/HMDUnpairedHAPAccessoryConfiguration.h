//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDAccessoryNetworkCredential, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDUnpairedHAPAccessoryConfiguration : NSObject
{
    _Bool _requiresUserConsent;	// 8 = 0x8
    NSString *_setupCode;	// 16 = 0x10
    CDUnknownBlockType _setupCodeProvider;	// 24 = 0x18
    HMDAccessoryNetworkCredential *_networkCredential;	// 32 = 0x20
    NSString *_isoCountryCode;	// 40 = 0x28
    NSNumber *_chipFabricID;	// 48 = 0x30
    NSUUID *_homeUUID;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000a43814
@property(copy) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property(copy) NSNumber *chipFabricID; // @synthesize chipFabricID=_chipFabricID;
@property(copy) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(retain) HMDAccessoryNetworkCredential *networkCredential; // @synthesize networkCredential=_networkCredential;
@property _Bool requiresUserConsent; // @synthesize requiresUserConsent=_requiresUserConsent;
@property(copy) CDUnknownBlockType setupCodeProvider; // @synthesize setupCodeProvider=_setupCodeProvider;
@property(copy) NSString *setupCode; // @synthesize setupCode=_setupCode;

@end

