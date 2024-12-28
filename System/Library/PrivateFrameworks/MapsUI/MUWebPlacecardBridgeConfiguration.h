//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MUWebPlacecardBridgeConfiguration : NSObject
{
    NSString *_nativeControllerName;	// 8 = 0x8
    NSString *_webControllerName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000015dd00
@property(readonly, copy, nonatomic) NSString *webControllerName; // @synthesize webControllerName=_webControllerName;
@property(readonly, copy, nonatomic) NSString *nativeControllerName; // @synthesize nativeControllerName=_nativeControllerName;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015dbdb
- (unsigned long long)hash;	// IMP=0x000000000015db4f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015db02
@property(readonly, nonatomic) NSString *manifestFileDirectory;
@property(readonly, nonatomic) NSString *manifestSignedResourceName;
@property(readonly, nonatomic) NSString *webBundleEntryPoint;
- (id)initWithNativeControllerName:(id)arg1 webControllerName:(id)arg2;	// IMP=0x000000000015da22

@end
