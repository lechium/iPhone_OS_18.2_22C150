//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, SKUIMediaSocialAuthor;

__attribute__((visibility("hidden")))
@interface SKUIJSMediaSocialAuthor : NSObject
{
    SKUIMediaSocialAuthor *_mediaSocialAuthor;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002a6e5e
@property(readonly, nonatomic) NSDictionary *storePlatformData;
@property(readonly, nonatomic) NSArray *permissions;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *entityType;
@property(readonly, nonatomic) NSString *entityIdentifier;
@property(readonly, nonatomic) NSString *dsId;
- (id)initWithSKUIMediaSocialAuthor:(id)arg1;	// IMP=0x00000000002a6d2c

@end
