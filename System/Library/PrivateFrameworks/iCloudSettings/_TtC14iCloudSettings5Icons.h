//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSDictionary, NSString, NSURL;

@interface _TtC14iCloudSettings5Icons : NSObject
{
    MISSING_TYPE *assetId;	// 8 = 0x8
    MISSING_TYPE *bundleIdentifiers;	// 24 = 0x18
    MISSING_TYPE *sfSymbolId;	// 32 = 0x20
    MISSING_TYPE *urls;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000010d110
- (id)init;	// IMP=0x000000000010d0c0
@property(nonatomic, readonly) NSURL *darkUrl3x;
@property(nonatomic, readonly) NSURL *darkUrl2x;
@property(nonatomic, readonly) NSURL *darkUrl1x;
@property(nonatomic, readonly) NSURL *url3x;
@property(nonatomic, readonly) NSURL *url2x;
@property(nonatomic, readonly) NSURL *url1x;
- (id)init:(id)arg1;	// IMP=0x000000000010cd00
@property(nonatomic, readonly) NSDictionary *urls;
@property(nonatomic, readonly) NSString *sfSymbolId;
@property(nonatomic, readonly) NSArray *bundleIdentifiers;
@property(nonatomic, readonly) NSString *assetId;
- (id)iconURL;	// IMP=0x0000000000035860

@end
