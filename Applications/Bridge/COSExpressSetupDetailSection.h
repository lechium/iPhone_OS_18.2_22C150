//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIImage;

@interface COSExpressSetupDetailSection : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_subtitle;	// 24 = 0x18
    UIImage *_image;	// 32 = 0x20
    NSArray *_items;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000cfa55
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)init;	// IMP=0x00100000000cf94b

@end

