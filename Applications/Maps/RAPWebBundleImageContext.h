//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface RAPWebBundleImageContext : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSData *_image;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000005318ea
@property(copy, nonatomic) NSData *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSDictionary *context;

@end

