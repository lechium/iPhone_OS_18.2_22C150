//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOAppleMediaServicesResult, NSMutableArray, NSString, _MXExtension, geo_isolater;

__attribute__((visibility("hidden")))
@interface _MUExtensionGroup : NSObject
{
    NSMutableArray *_extensions;	// 8 = 0x8
    geo_isolater *_extensionsLock;	// 16 = 0x10
    NSString *_appIdentifier;	// 24 = 0x18
    GEOAppleMediaServicesResult *_appStoreApp;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000013341c
@property(retain, nonatomic) GEOAppleMediaServicesResult *appStoreApp; // @synthesize appStoreApp=_appStoreApp;
@property(readonly, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
- (id)initWithAppIdentifier:(id)arg1;	// IMP=0x0000000000133357
- (void)addExtensionIfMatchedAppIdentifier:(id)arg1;	// IMP=0x0000000000133267
@property(readonly, nonatomic) _MXExtension *bestExtensionToUse;

@end
